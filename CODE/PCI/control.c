
#include "headfile.h"

void Control_Init()
{
    motor_init;
    motor1_init;
    motor2_init;
    motor3_init;
    steer_init;
    steer1_init;

}

void steer_control()
{

}

void motor_control()
{
    /*闭环*/
    if (flag.drug==5)
    {
        enc.left_pwm=enc.expect_speed+2000-steer.angle;//steer.angle即电机差速
        enc.right_pwm=enc.expect_speed+2000+steer.angle;
    }
    else
    {
        enc.left_pwm=enc.expect_speed+0-steer.angle;//steer.angle即电机差速
        enc.right_pwm=enc.expect_speed+0+steer.angle;
    }

    if (!flag.man_swi)
    {

        if (flag.drug==3 || flag.get_turn)
        {
            cnt.turn_round++;
            if (cnt.turn_round>rate.basic*1000/5)
            {
                cnt.turn_round=0;
                flag.drug=4;
                flag.get_turn=0;
            }
            if (flag.get_turn) flag.led=0;
            motor(3000);
            motor2(3000);

        }
        else if(art.con_left==1)
        {
            motor(1000);
            motor3(5000);


            gpio_set(P00_0,1);
        }
        else if (art.con_right==1)
        {
            motor(5000);
            motor3(1000);


            gpio_set(P00_0,1);
        }
        else if (mv.track==0   )
        {
            if (!flag.turn_direc&& (flag.drug==5 || flag.drug==2))
            {
                motor(0);
                motor3(0);
                motor2(0);
                motor1(0);
            }
            else if (flag.turn_direc)
            {
                if  (!flag.is_first_yellow)
                {
                    flag.led=3;
                    flag.is_first_yellow=1;
                }
                motor(0);
                motor3(0);
                motor2(0);
                motor1(0);
            }


        }

        else
        {
            gpio_set(P00_0,0);
            if (enc.left_pwm>0)
            {
                motor(enc.left_pwm);
                motor1(0);

            }
            else
            {
                motor(0);
                motor1(-enc.left_pwm);

            }

            if (enc.right_pwm>0)
            {
                motor2(0);
                motor3(enc.right_pwm*1.2);

            }
            else
            {
                motor2(-enc.right_pwm*1.2);
                motor3(0);

            }
        }



    }

}











