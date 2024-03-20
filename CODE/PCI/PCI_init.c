#include "headfile.h"
/**初始化一些其他文件变量**/
#define All_spe_Init 1
#define INF 999
void Gyro_Init()
{
    //    icm20602_init_spi(); //逐飞
        My_Gyro_Init();//浩奇
}

void Beep_Init()
{
    gpio_init(P00_0, GPO, 0, NO_PULL);
}
void Pit_Init()
{
    pit_interrupt_ms(CCU6_1, PIT_CH0, 5);
}
void All_Init()
{
    /*各模块初始化*/
    seekfree_wireless_init();
    Key_Init();
    Encoder_Init();
//    Gyro_Init();
    Variable_Init();
    oled_init();
//    AD_Init();
    Control_Init();
    Pit_Init();
    cursor();
    Beep_Init();
    reeds_init();
    led_init();

}
void Variable_Init()
{
    //无初始化全局变量默认为0

    flag.man_swi=0;

    flag.ste_con=1;
    flag.mot_con=1;


    cnt.oled_rst=10;

//    test.mot_du=2500;
//    test.ste_du=SERVO_MIDDLE;

//    enc.speed_control_out_max=500;
    enc.expect_speed=2800;
    enc.speed_control_out_max=1.8;
    cnt.run_time_limit=30;


    Flash_ReadData();


    cnt.read++;


}






