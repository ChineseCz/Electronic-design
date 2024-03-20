#include "headfile.h"
struct ENCODER enc;

void Encoder_Init ()
{
    Enc_Init;
    Enc1_Init;

}

void Control_Speed()
{  

        enc.pulse = Speed_Left_Get;
        enc.pulse1 = Speed_Right_Get;

        Enc_Clear;
        enc.real_speed = (enc.pulse + enc.pulse1) * rate.encoder * 0.5;
        enc.real_speed = (enc.real_speed>3400?3400:enc.real_speed);



        enc.speed_old= enc.filter_speed;
        enc.speed_new= enc.real_speed;

        enc.filter_speed = ((enc.speed_new-enc.speed_old)> 300?(enc.speed_old+300):enc.speed_new);
        enc.filter_speed = ((enc. speed_new-enc.speed_old)< -300?(enc.speed_old-300):enc.speed_new);

}

