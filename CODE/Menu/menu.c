
#include "headfile.h"

//增量参数
float key_add=1;
float add=1,gain=1,rate_gain=0.1,add_gain=0.1;

//箭头定位
char subline=0,subcolumn=4;


//菜单索引变量
int menu_first=0;
int submenu_first=0;
unsigned char line=0;
unsigned char column=4;
char out=0;//退出二级菜单标志位

//主菜单名称
char menu_case_num=0;
char menu_case0[20][20]={"Go!!!!","err.dis","rate.p","spe.p","PID.p","Uint.p","gyro.dis"};

char menu_case1[20][20]={"unit_para","PID_para","Special_para","Speed_para","Start_para"};//20~39
char menu_case2[20][20]={"ad_dis","err_dis","ad1_dis","cnt.dis"};//40~59
char menu_case3[20][20]={"all_spe","Left_spe","Right_spe","cro_spe","isl_spe"};//60~79
char menu_case4[20][20]={"isl1_con","isl2_con","slow_con","slow1_con","left_con","right_con","xie"};//80~99





//各列序号
/********0-19**********/
//GO
/*****************************************************/
char submenu0_case[20][20]={"sw.str","sw.ste","sw.mot","sw.save","sw.read","sw.f_Xb","sw.man"};
int *submenu0_num[20]={&flag.str,&flag.ste_con,&flag.mot_con,&cnt.save,&cnt.read,&cnt.flash_xb,&flag.man_swi};
/*****************************************************/

//err
char submenu1_case[20][20]={"ste.err","mot.err","ste.out","mot.out","mot.pulse","mot.pulse1","err_h","err_x"};
float *submenu1_num[20]={&steer.err,&steer.angle,&steer.duty,&enc.speed_control_out,&enc.pulse,&enc.pulse1,&steer.err_h,&steer.err_x};

//RATE
/************************************************************************************************/
char submenu2_case[20][20]={"0.err","1.err1","2.kp1","3.ste","4.lef","5.rig","6.err+","7.err-",
            "8.bas","9.rush","10.mote"};
float *submenu2_num[20]={&rate.err,&rate.err_tg,&rate.dynamic_kp,&rate.ste,&rate.ste_lef,
        &rate.ste_rig,&rate.err_p,&rate.err_n,&rate.basic,&rate.rush,&rate.encoder};
/************************************************************************************************/

//Speed
/************************************************************************************************/
char submenu3_case[20][20]={"Exc_Spe","Spe_Max","all_time"};
float *submenu3_num[20]={&enc.expect_speed,&enc.speed_control_out_max,&cnt.run_time_limit};
/************************************************************************************************/


//PID
/***********************************************************************/
char submenu4_case[20][20]={"ste.p","ste.d","mot.p","mot.i","mot.d"};
float *submenu4_num[20]={&steer.Kp,&steer.Kd,&motor.Kp,&motor.Ki,&motor.Kd};
/**********************************************************************/

//Uint
/*****************************************************/
char submenu5_case[20][20]={"U.add","U.gain","U.ra_g","U.ad_g"};
float *submenu5_num[20]={&add,&gain,&rate_gain,&add_gain};
/*****************************************************/


//GYRO
/*****************************************************/
char submenu6_case[20][20]={"g_x","g_y","g_z","a_x","a_y","a_z"};
int16 *submenu6_num[20]={&icm_gyro_x,&icm_gyro_y,&icm_gyro_z,&icm_acc_x,&icm_acc_y,&icm_acc_z};
/*****************************************************/





/****箭头打印****/
void cursor()
{
    oled_clearcursor();
	oled_p6x8str(column,line,"->");
}
void subcursor()
{
    oled_clearcursor();
    oled_p6x8str(subcolumn,subline,"->");
}
/****主菜单打印****/
void menu()
{    
    int i;
    if (menu_case_num==0)
        for (i=menu_first;i<8+menu_first;i++)
        {
            oled_p6x8str(18,i-menu_first,menu_case0[i]);
            if (i==0)
            {
                OLED_Print_Num1(76,0,(float) mv.err);

            }
            if (i==1)
            {
                OLED_Print_Num1(76,1,(float)flag.drug);
            }
            if (i==2)
            {
                OLED_Print_Num1(76,2,(float)art.con_left);
            }
            if (i==3)
            {
                OLED_Print_Num1(76,3,(float)art.con_right);

            }
            if(i==4)
            {
                OLED_Print_Num1(76,4,(float)art.num_judge);
            }
            if(i==5)
            {
                OLED_Print_Num1(76,5,(float)flag.turn_direc);
            }

        }
    else if  (menu_case_num==1)
        for (i=menu_first;i<8+menu_first;i++)
            oled_p6x8str(18,i-menu_first,menu_case1[i]);
    else if (menu_case_num==2)
        for (i=menu_first;i<8+menu_first;i++)
            oled_p6x8str(18,i-menu_first,menu_case2[i]);
    else if (menu_case_num==3)
        for (i=menu_first;i<8+menu_first;i++)
            oled_p6x8str(18,i-menu_first,menu_case3[i]);
    else if (menu_case_num==4)
        for (i=menu_first;i<8+menu_first;i++)
            oled_p6x8str(18,i-menu_first,menu_case4[i]);
        
    	
}
/****主菜单按键扫描****/
void menukey()
{
    if (!keyright())
    {
        if (menu_case_num==4)
        {
            menu_case_num=0;
            oled_clear();
            cursor();
        }
        else if (menu_case_num==0)
        {
            menu_case_num=4;
            oled_clear();
            cursor();
        }
    } 
    if (!keyleft())
    {
        if (menu_case_num==0 )
        {
            menu_case_num=4;
            oled_clear();
            cursor();
        }
        else if(menu_case_num==4)
        {
            menu_case_num=0;
            oled_clear();
            cursor();
        }
    }    
    if (!keyup())
    {
        if (line>0)
            line--;
        else line=7;
        cursor();
    }
    
    if (!keydown())
    {
        line++;
        if (line==8)
            line=0;
        cursor();
    }
    if (!keycenter())
    {
        my_delay(2000);
        oled_clear();
        submenu_first=0;
        submenu();
        oled_clear();
        menu();
        cursor();
    }
    if (!key1())
    {
        
        menu_first++;
        oled_clear();
        cursor();
        
    }
    if (!key2())
    {
        if (menu_first>0)
            menu_first--;
        oled_clear();
        cursor();
    }
}
/****子菜单打印****/
void submenu()
{
    switch(line+menu_first+menu_case_num*20)
    {
        case 0://GO!!!!
        {
             int i;
             /*光标打印*/
             subcursor();
             while(1)
             {
                 /*按键扫描*/
                 subkey();
                 /*打印*/
                 for (i=submenu_first;i<8+submenu_first;i++)
                 {
                     oled_p6x8str(18,i-submenu_first,submenu0_case[i]);
                     if (submenu0_case[i][0]!='\0') OLED_Print_Num1(76,i-submenu_first, (float)*submenu0_num[i]);
                 }
                 /*退出子菜单标志*/
                 if (out)
                 {
                     out=0;
                     break;
                 }
             }
             break;
        }
        case 1://err.dis
        {
           int i;
           subcursor();
           while(1)
           {
               subkey();
               for (i=submenu_first;i<8+submenu_first;i++)
               {
                   oled_p6x8str(18,i-submenu_first,submenu1_case[i]);
                   if (submenu1_case[i][0]!='\0') OLED_Print_Num1(76,i-submenu_first, (float)*submenu1_num[i]);
               }
               if (out)
               {
                   out=0;
                   break;
               }
           }
           break;
        }

        case 2://rate
        {
            int i=0;
            subcursor();
            while(1)
            {
                subkey();
                for (i=submenu_first;i<8+submenu_first;i++)
                 {
                     oled_p6x8str(18,i-submenu_first,submenu2_case[i]);
                     if (submenu2_case[i][0]!='\0') OLED_Print_Num1(76,i-submenu_first, (float)(*submenu2_num[i]));
                 }
                if (out)
                {
                    out=0;
                    break;
                }
            }
            break;
        }

        case 3://speed
        {
            int i;
            subcursor();
            while(1)
            {
                subkey();
                for (i=submenu_first;i<8+submenu_first;i++)
                {
                    oled_p6x8str(18,i-submenu_first,submenu3_case[i]);
                    if (submenu3_case[i][0]!='\0') OLED_Print_Num1(76,i-submenu_first, *submenu3_num[i]);
                }
                if (out)
                {
                    out=0;
                    break;
                }
            }
            break;
        }


        case 4://PID
        {
            int i;
            subcursor();
            while(1)
            {
                subkey();
                for (i=submenu_first;i<8+submenu_first;i++)
                {
                    oled_p6x8str(18,i-submenu_first,submenu4_case[i]);
                    if (submenu4_case[i][0]!='\0') OLED_Print_Num1(76,i-submenu_first, *submenu4_num[i]);
                }
                if (out)
                {
                    out=0;
                    break;
                }
            }
            break;
        }

        case 5://Uint
        {
            int i;
            subcursor();
            while(1)
            {
                subkey();
                for (i=submenu_first;i<8+submenu_first;i++)
                {
                    oled_p6x8str(18,i-submenu_first,submenu5_case[i]);
                    if (submenu5_case[i][0]!='\0') OLED_Print_Num1(76,i-submenu_first, *submenu5_num[i]);
                }
                if (out)
                {
                    out=0;
                    break;
                }
            }
            break;
        }
        case 6://GYRO
        {
            int i;
            subcursor();
            while(1)
            {
                subkey();
                for (i=submenu_first;i<8+submenu_first;i++)
                {
                    oled_p6x8str(18,i-submenu_first,submenu6_case[i]);
                    if (submenu6_case[i][0]!='\0') OLED_Print_Num1(76,i-submenu_first, *submenu6_num[i]);
                }
                if (out)
                {
                    out=0;
                    break;
                }
            }
            break;
        }



    }
}
void subkey()
{
    if (!keydown())
    {
        subline++;
        if (subline==8)
            subline=0;
        subcursor();

    }
    if (!keyup())
    {
        subline--;
        if (subline==-1)
            subline=7;
        subcursor();
    }
    if (!keyright())
    {
        switch(line+menu_first+menu_case_num*20)
        {
            case 0:
            {
                switch(subline+submenu_first)
                {
                    case 0:
                    {
                        servo(SERVO_MIDDLE);
                        motor(0);
                        motor3(0);
                        motor1(0);
                        motor2(0);
                        flag.str=0;
                        cnt.speedout_err0=0;
                        break;
                    }
                    case 1:
                    {
                        flag.ste_con=0;
                        break;
                    }
                    case 2:
                    {
                        flag.mot_con=0;
                        break;
                    }

                    case 5:
                    {
                        if (cnt.flash_xb>0)
                            cnt.flash_xb--;
                        break;
                    }
                    case 6:
                    {

                        flag.man_swi=0;
                        break;
                    }

                }
                break;
            }



            case 5:
            {
                switch(subline+submenu_first)
                {
                    case 0:
                    {
                        add-=key_add*1;
                        break;
                    }
                    case 1:
                    {
                        gain-=key_add*1;
                        break;
                    }
                    case 2:
                    {              
                        rate_gain/=10;
                        break;
                    }
                    case 3:
                    {
                        add_gain/=10;
                        break;
                    }
                }
                break;    
            }
            case 4:
            {
                switch(subline+submenu_first)
                {
                    case 0:
                    {
                        steer.Kp-=key_add*add*add_gain;
                        steer.Kp/=gain;
                        break;
                    }
                    case 1:
                    {
                        steer.Kd-=key_add*add*add_gain;
                        steer.Kd/=gain;
                        break;
                    }
                    case 2:
                    {
                        motor.Kp-=key_add*add*add_gain;
                        motor.Kp/=gain;
                        break;
                    }
                    case 3:
                    {
                        motor.Ki-=key_add*add*add_gain;
                        motor.Ki/=gain;
                        break;
                    }
                    case 4:
                    {
                        motor.Kd-=key_add*add*add_gain;
                        motor.Kd/=gain;
                        break;
                    }

                }
                break;    
            }
            case 2:
            {
                switch(subline+submenu_first)
                {
                    case 0:
                    {
                        rate.err-=key_add*1*rate_gain;
                        break;
                    }
                    case 1:
                    {
                        rate.err_tg-=key_add*1*rate_gain;
                        break;
                    }
                    case 2:
                    {
                        rate.dynamic_kp-=key_add*rate_gain;
                        break;
                    }
                    case 3:
                    {
                        rate.ste-=key_add*rate_gain;
                        break;
                    }
                    case 4:
                    {
                        rate.ste_lef-=key_add*rate_gain;
                        break;
                    }     
 
                    case 5:
                    {
                        rate.ste_rig-=key_add*rate_gain;
                        break;
                    }  
                    case 6:
                    {
                        rate.err_p-=key_add*rate_gain;
                        break;
                    }
                    case 7:
                    {
                        rate.err_n-=key_add*rate_gain;
                        break;
                    }

                    case 8:
                    {
                        rate.basic-=key_add*rate_gain;
                        break;
                    }   
                    case 9:
                    {
                        rate.rush-=key_add*rate_gain;
                        break;
                    }  
                    case 10:
                    {
                        rate.encoder-=key_add*rate_gain;
                        break;
                    }
                }
                break;    
            }
            case 3:
            {
                switch(subline+submenu_first)
                {
                    case 0:
                    {
                        enc.expect_speed-=key_add*add*add_gain;
                        break;
                    }
                    case 1:
                    {
                        enc.speed_control_out_max-=key_add*add*add_gain;
                        break;
                    }
                    case 2:
                    {
                        cnt.run_time_limit-=key_add*add_gain;
                        break;
                    }


                }
                break;    
            }




            /************************/
        }
    }
    if (!keyleft())
    {
        switch(line+menu_first+menu_case_num*20)
        {
            case 0:
            {
                switch(subline+submenu_first)
                {
                    case 0:
                    {
                        flag.str=1;
                        flag.timeswitch=1;
                        cnt.speedout_err0=0;
                        cnt._5ms=0;
                        cnt._250ms=0;
                        cnt._1ms=0;
                        cnt._1s=0;

                        out=1;
                        break;
                    }
                    case 1:
                    {
                        flag.ste_con=1;
                        break;
                    }
                    case 2:
                    {
                        flag.mot_con=1;
                        break;
                    }

                    case 5:
                    {
                        if (cnt.flash_xb<3)
                            cnt.flash_xb++;
                        break;
                    }
                    case 6:
                    {
                        flag.man_swi=1;
                        break;
                    }



                }
                break;
            }

            case 5:
            {
                switch(subline+submenu_first)
                {
                    case 0:
                    {
                        add+=key_add*1;
                        break;
                    }
                    case 1:
                    {
                        gain+=key_add*1;
                        break;
                    }
                    case 2:
                    {              
                        rate_gain*=10;
                        break;
                    }
                    case 3:
                    {
                        add_gain*=10;
                        break;
                    }
                }
                break;    
            }
            case 4:
            {
                switch(subline+submenu_first)
                {
                    case 0:
                    {
                        steer.Kp+=key_add*add*add_gain;
                        steer.Kp*=gain;
                        break;
                    }
                    case 1:
                    {
                        steer.Kd+=key_add*add*add_gain;
                        steer.Kd*=gain;
                        break;
                    }
                    case 2:
                    {
                        motor.Kp+=key_add*add*add_gain;
                        motor.Kp*=gain;
                        break;
                    }
                    case 3:
                    {
                        motor.Ki+=key_add*add*add_gain;
                        motor.Ki*=gain;
                        break;
                    }
                    case 4:
                    {
                        motor.Kd+=key_add*add*add_gain;
                        motor.Kd*=gain;
                        break;
                    }

                }
                break;    
            }
            case 2:
            {
                switch(subline+submenu_first)
                {
                    case 0:
                    {
                        rate.err+=key_add*1*rate_gain;
                        break;
                    }
                    case 1:
                    {
                        rate.err_tg+=key_add*1*rate_gain;
                        break;
                    }
                    case 2:
                    {
                        rate.dynamic_kp+=key_add*rate_gain;
                        break;
                    }
                    case 3:
                    {
                        rate.ste+=key_add*rate_gain;
                        break;
                    }
                    case 4:
                    {
                        rate.ste_lef+=key_add*rate_gain;
                        break;
                    }

                    case 5:
                    {
                        rate.ste_rig+=key_add*rate_gain;
                        break;
                    }
                    case 6:
                    {
                        rate.err_p+=key_add*rate_gain;
                        break;
                    }
                    case 7:
                    {
                        rate.err_n+=key_add*rate_gain;
                        break;
                    }

                    case 8:
                    {
                        rate.basic+=key_add*rate_gain;
                        break;
                    }   
                    case 9:
                    {
                        rate.rush+=key_add*rate_gain;
                        break;
                    }  
                    case 10:
                    {
                        rate.encoder+=key_add*rate_gain;
                        break;
                    }
                }
                break;    
            }
            case 3:
            {
                switch(subline+submenu_first)
                {
                    case 0:
                    {
                        enc.expect_speed+=key_add*add*add_gain;
                        break;
                    }
                    case 1:
                    {
                        enc.speed_control_out_max+=key_add*add*add_gain;
                        break;
                    }
                    case 2:
                    {
                        cnt.run_time_limit+=key_add*add_gain;
                        break;
                    }


                }
                break;    
            }
        }

    }  

    if (!keycenter())
    {
        switch(line+menu_first+menu_case_num*20)
        {
            case 0:
            {
                switch(subline+submenu_first)
                {
                    case 3:
                    {
                        Flash_SaveData();
                        cnt.save++;
                        break;
                    }
                    case 4:
                    {
                        Flash_ReadData();
                        cnt.read++;
                        break;
                    }
                    default:
                        break;

                }
                break;
            }

        }
        my_delay(1000);
        out=1;
     
    }
    if (!key1())
    {
        if (submenu_first<12)
            submenu_first++;
        else
            submenu_first=0;

        oled_clear();
        subcursor();
    }
    if (!key2())
    {
        if (submenu_first>0)
            submenu_first--;
        oled_clear();
        subcursor();
    }   

    if (!key3())
    {
        if (key_add==1) key_add=10;
        else key_add=1;
    }
}
