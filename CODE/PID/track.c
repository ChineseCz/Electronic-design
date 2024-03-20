
#include "headfile.h"










void stop_car()
{
    /*停车*/
      if (cnt._1ms>=cnt.run_time_limit*1000)
      {
          servo(SERVO_MIDDLE);
          motor1(0);
          motor(0);
          motor2(0);
          motor3(0);
          flag.str=0;
          cnt._1ms=0;
      }

}




void Count()
{
    /**计数**/
    if (cnt._5ms==10)
    {
        cnt._5ms=0;
    }

    if (cnt.oled==cnt.oled_rst)
        cnt.oled=0;

    if(flag.timeswitch)
    {
        cnt._5ms++;
        cnt._1ms+=5;
    }

    /*stop*/
    stop_car();
    cnt.oled++;
}
void err_revise()
{


    if (steer.err >= 0)
        steer.err*=rate.err_p;
    else
        steer.err*=rate.err_n;

    if (steer.err >= 200 ) steer.err=200;
    if (steer.err <=-200) steer.err=-200;

    steer.errtmp[4] = steer.errtmp[3];
    steer.errtmp[3] = steer.errtmp[2];
    steer.errtmp[2] = steer.errtmp[1];
    steer.errtmp[1] = steer.errtmp[0];
    steer.errtmp[0] = steer.err;
}

void regular_revise()
{


    steer.err_last=steer.err;
    steer.err = mv.err;

    err_revise();
}
void track_judge()//赛道判断
{



}


void protect()//出线与碰撞保护
{


}
