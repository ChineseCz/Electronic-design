/*********************************************************************************************************************
 * COPYRIGHT NOTICE
 * Copyright (c) 2020,逐飞科技
 * All rights reserved.
 * 技术讨论QQ群：三群：824575535
 *
 * 以下所有内容版权均属逐飞科技所有，未经允许不得用于商业用途，
 * 欢迎各位使用并传播本程序，修改内容时必须保留逐飞科技的版权声明。
 *
 * @file       		headfile
 * @company	   		成都逐飞科技有限公司
 * @author     		逐飞科技(QQ3184284598)
 * @version    		查看doc内version文件 版本说明
 * @Software 		ADS v1.2.2
 * @Target core		TC364DP
 * @Taobao   		https://seekfree.taobao.com/
 * @date       		2020-11-23
 ********************************************************************************************************************/
 
#ifndef _headfile_h
#define _headfile_h



//通用库
#include "SEEKFREE_PRINTF.h"

#include "zf_assert.h"
#include "stdio.h"
#include "math.h"
#include "string.h"
#include "stdlib.h"
//#include "../../CODE/Special_Control/speacil_element.h"
#include "ifxAsclin_reg.h"
#include "SysSe/Bsp/Bsp.h"
#include "IfxCcu6_Timer.h"
#include "IfxScuEru.h"

//------逐飞科技单片机外设驱动头文件
#include "zf_gpio.h"
#include "zf_gtm_pwm.h"
#include "zf_uart.h"
#include "zf_ccu6_pit.h"
#include "zf_stm_systick.h"
#include "zf_spi.h"
#include "zf_eru.h"
#include "zf_eru_dma.h"
#include "zf_vadc.h"
#include "zf_gpt12.h"
#include "zf_eeprom.h"

//------逐飞科技产品驱动头文件
#include "SEEKFREE_18TFT.h"
#include "SEEKFREE_FONT.h"
#include "SEEKFREE_FUN.h"
#include "SEEKFREE_IIC.h"
#include "SEEKFREE_IPS114_SPI.h"
#include "SEEKFREE_OLED.h"
#include "SEEKFREE_VIRSCO.h"
#include "SEEKFREE_MT9V03X.h"
#include "SEEKFREE_ICM20602.h"
#include "SEEKFREE_MPU6050.h"
#include "SEEKFREE_MMA8451.h"
#include "SEEKFREE_L3G4200D.h"
#include "SEEKFREE_WIRELESS.h"
#include "SEEKFREE_IPS200_PARALLEL8.h"
#include "SEEKFREE_7725.h"
#include "SEEKFREE_RDA5807.h"
#include "SEEKFREE_7725_UART.h"





//-----------我的库汇总----------------
//全都分开移植.h了/////
///////ChineseCz149库//////////////////
#include "encoder.h"
#include "openmv.h"
#include "AD.h"
#include "control.h"
#include "key.h"
#include "menu.h"
#include "pid.h"

#include "PCI_init.h"
#include "flashsave.h"
#include "test.h"
#include "Cpu0_Main.h"

#include "Reed.h"
#include "track.h"
#include "UART.h"

//浩奇陀螺仪
#include "icm20602.h"

//调用的话会报错：一个致命的外部错误
//void all_init(void);









/****************结构变量声明以及类定义******************/
struct PID
{
    float err;
    float err_last;
    float angle;

    float err_h;
    float err_x;

    float duty;//占空比输出
    float duty_last;
    float Kp,Kd,Ki;
    float errtmp[5];
    float integ;

};
//steer.err作为电感err.
struct RATE
{
    float err;
    float err_tg;
    float dynamic_kp;
    float ste;
    float ste_lef;
    float ste_rig;
    float err_p;
    float err_n;
    float encoder;


    float basic;
    float rush;




};
struct FLAG
{
    int str;
    int timeswitch;
    int ste_con;
    int mot_con;
    int man_swi;








    //取拿药
    int drug;


    int reed;
    int first_get_reed;
    int first_out_reed;
    int led;


    int turn_memory[2];


    //发挥部分
    int turn_direc;
    int get_turn;
    int is_first_yellow;



};
struct CAR
{
    /**误差类**/
    char data;


};
struct CNT
{
    int enc;
    int _1ms,_5ms,_20ms,_250ms,_1s;
    int oled,oled_rst;
//    int cross;


    int speedout_err0;
    float run_time_limit;

    int save,read;





    int flash_xb;


    //左右转计时
    int left;
    int right;
    int turn_round;
    int turn_num;



};
struct ENCODER
{

    float pulse;
    float pulse1;
    float expect_speed;//
    float filter_speed;
    float real_speed;
    float speed_control_out;
    float speed_control_out_max;//
    float speed_old,speed_new;
    float all_speedout;
    float distance;

    float left_pwm;
    float right_pwm;


};

struct OPENMV
{
    /**误差类**/
    char data;
    char str[15];
    float err;

    /**控制类**/

    char num_judge;//mv1(art)
    char con_left;//art
    char con_right;//art


    int track;//mv 0:丢线,1:直线,2:十字







    /**发送接受标志**/
};

struct AD
{

    uint16 _0,_1,_2,_3,_4,_5,_6,_7,_8,_9,_10,_11,_12,_13,_14,_15,_16,_17,_18,_19,_20,_21,_22,_23,_24,_25,_35,_36,_37,_38,_39,_42,_43,_44,_45,_46,_47,_48,_49; //对应+1是 AN

    uint16 s_left,s_mid_left,s_shu_left,s_xie_Left,s_mid,
           s_right,s_mid_right,s_shu_right,s_xie_right;

    uint16 l_left,l_mid_left,l_shu_left,l_xie_Left,l_mid,
           l_right,l_mid_right,l_shu_right,l_xie_right;




};

struct TRY
{
    float ste_du;
    float mot_du;
    float ste_du1;
    float mot_du1;
};



#endif

