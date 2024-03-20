#include "headfile.h"

#define divis 1
float data[17];
uint32 data_buf;

void read_now(void);

void Flash_ReadData()
{
   uint8 i;
   for (i=0;i<17;i++)
   {
       data[i] = flash_read(divis, i, float);
   }

   if (cnt.flash_xb==0) read_now();



}
void read_now()
{
    //现有参--快速
    steer.Kp = data[0];
    steer.Kd = data[1];
    motor.Kp = data[2];
    motor.Ki = data[3];
    rate.basic = data[4];
    rate.dynamic_kp = data[5];
    rate.encoder = data[6];
    rate.err_p = data[7];
    rate.err_n = data[8];
    rate.err = data[9];


    rate.ste = data[10];
    rate.ste_lef = data[11];
    rate.ste_rig = data[12];
    rate.err_tg = data[13];
    enc.expect_speed = data[14];
    enc.speed_control_out_max = data[15];
    cnt.run_time_limit = data[16];

}
void Flash_SaveData()
{
    uint8 i;
    if(flash_check(divis, 0) || flash_check(divis, 1) || flash_check(divis, 2) || flash_check(divis, 3))
    {
        eeprom_erase_sector(divis);
    }


    data[0] = steer.Kp;
    data[1] = steer.Kd;
    data[2] = motor.Kp;
    data[3] = motor.Ki;
    data[4] = rate.basic;
    data[5] = rate.dynamic_kp;
    data[6] = rate.encoder;
    data[7] = rate.err_p;
    data[8] = rate.err_n;
    data[9] = rate.err;

    data[10] = rate.ste;
    data[11] = rate.ste_lef;
    data[12] = rate.ste_rig;
    data[13] = rate.err_tg;
    data[14] = enc.expect_speed;
    data[15] = enc.speed_control_out_max;
    data[16] =cnt.run_time_limit;

    for (i=0;i<17;i++)
    {
        data_buf = float_conversion_uint32(data[i]);
        eeprom_page_program(divis, i, &data_buf);
    }


}



