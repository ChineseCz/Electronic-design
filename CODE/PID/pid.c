
#include "headfile.h"




//PID理解：https://blog.csdn.net/qq_43348439/article/details/108246909
struct PID steer,motor;


void PID_angle_limit()
{
    if (steer.angle<0)
    {
         steer.duty=SERVO_MIDDLE-rate.ste*rate.ste_lef*steer.angle;
    }
    else
    {
         steer.duty=SERVO_MIDDLE-rate.ste*rate.ste_rig*steer.angle;

    }


     if(steer.duty>=SERVO_MAX) steer.duty=SERVO_MAX;
     if(steer.duty<=SERVO_MIN) steer.duty=SERVO_MIN;


}



void PID_steer_trace()//JT+新公式
{
    /*正常循迹*/
    track_judge( );
    regular_revise();



    steer.angle=steer.Kp*(steer.err)+steer.Kd*(steer.err-steer.err_last);
//    PID_angle_limit();




}




//1500-80
//1600-90
//1700-100
//1800-110
//1900-120
//2000-130



void PID_speed_control()
{

    float speed;
    int index=1;

    Control_Speed();

    speed = enc.expect_speed*rate.basic;


    motor.err= speed - ((enc.filter_speed-50)*10 +1200);
    

   
    motor.errtmp[4] = motor.errtmp[3];
    motor.errtmp[3] = motor.errtmp[2];
    motor.errtmp[2] = motor.errtmp[1];
    motor.errtmp[1] = motor.errtmp[0];
    motor.errtmp[0] = motor.err;
    //增量式

    if((motor.err<=5500)&&(motor.err>=-5500))
       index=1;
    else
       index=0;
    

    motor.integ = index * motor.Ki * motor.err * 0.05;
    if (flag.str==0)
    {
        motor.integ=0;
    }

    enc.speed_control_out += ( motor.Kp*0.5*(motor.errtmp[0]-motor.errtmp[1]) + motor.integ );
    enc.speed_control_out = (enc.speed_control_out>=enc.speed_control_out_max?enc.speed_control_out_max:enc.speed_control_out); //限幅720对打角有影响
     if ( motor.err<=10 || motor.err>=-10)
    {
        if (flag.str ) cnt.speedout_err0++;
    }
    //备用位置式
  
   
}


