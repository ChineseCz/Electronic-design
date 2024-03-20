
#include "headfile.h"

struct AD ad;

void AD_Init()
{

    adc_init(ADC_0, ADC0_CH0_A0);
    adc_init(ADC_0, ADC0_CH1_A1);
    adc_init(ADC_0, ADC0_CH2_A2);
    adc_init(ADC_0, ADC0_CH3_A3);
    adc_init(ADC_0, ADC0_CH4_A4);
    adc_init(ADC_0, ADC0_CH5_A5);
    adc_init(ADC_0, ADC0_CH6_A6);
    adc_init(ADC_0, ADC0_CH7_A7);

    adc_init(ADC_1, ADC1_CH0_A8);
    adc_init(ADC_1, ADC1_CH2_A10);
    adc_init(ADC_1, ADC1_CH3_A11);
    adc_init(ADC_1, ADC1_CH4_A12);
    adc_init(ADC_1, ADC1_CH5_A13);


    adc_init(ADC_2, ADC2_CH0_A16);
    adc_init(ADC_2, ADC2_CH1_A17);
    adc_init(ADC_2, ADC2_CH4_A20);
    adc_init(ADC_2, ADC2_CH5_A21);


    adc_init(ADC_3, ADC3_CH0_A24);
    adc_init(ADC_3, ADC3_CH1_A25);


    adc_init(ADC_8, ADC8_CH3_A35);
    adc_init(ADC_8, ADC8_CH4_A36);
    adc_init(ADC_8, ADC8_CH5_A37);
    adc_init(ADC_8, ADC8_CH6_A38);
    adc_init(ADC_8, ADC8_CH7_A39);
    adc_init(ADC_8, ADC8_CH10_A42);
    adc_init(ADC_8, ADC8_CH11_A43);
    adc_init(ADC_8, ADC8_CH12_A44);
    adc_init(ADC_8, ADC8_CH13_A45);
    adc_init(ADC_8, ADC8_CH14_A46);
    adc_init(ADC_8, ADC8_CH15_A47);



}

//Warning：没初始化就用会卡死
void Read_AD( )
{
    ad._0 =     adc_convert(ADC_0, ADC0_CH0_A0, ADC_10BIT);
    ad._1 =     adc_convert(ADC_0, ADC0_CH1_A1, ADC_10BIT);
    ad._2 =      adc_convert(ADC_0, ADC0_CH2_A2, ADC_10BIT);
    ad._3 =  adc_convert(ADC_0, ADC0_CH3_A3, ADC_10BIT);
    ad._4 =  adc_convert(ADC_0, ADC0_CH4_A4, ADC_10BIT);
    ad._5 =  adc_convert(ADC_0, ADC0_CH5_A5, ADC_10BIT);
    ad._6 =  adc_convert(ADC_0, ADC0_CH6_A6, ADC_10BIT);
    ad._7 =  adc_convert(ADC_0, ADC0_CH7_A7, ADC_10BIT);


    ad._8 =  adc_convert(ADC_1, ADC1_CH0_A8, ADC_10BIT);
    ad._10 =  adc_convert(ADC_1, ADC1_CH2_A10, ADC_10BIT);
    ad._11 =  adc_convert(ADC_1, ADC1_CH3_A11, ADC_10BIT);
    ad._12 =      adc_convert(ADC_1, ADC1_CH4_A12, ADC_10BIT);
    ad._13 =      adc_convert(ADC_1, ADC1_CH5_A13, ADC_10BIT);



    ad._16 =      adc_convert(ADC_2, ADC2_CH0_A16, ADC_10BIT);
    ad._17 =      adc_convert(ADC_2, ADC2_CH1_A17, ADC_10BIT);
    ad._20 =      adc_convert(ADC_2, ADC2_CH4_A20, ADC_10BIT);
    ad._21 =      adc_convert(ADC_2, ADC2_CH5_A21, ADC_10BIT);



    ad._24 =      adc_convert(ADC_3, ADC3_CH0_A24, ADC_10BIT);
    ad._25 =      adc_convert(ADC_3, ADC3_CH1_A25, ADC_10BIT);

    ad._35 =      adc_convert(ADC_8, ADC8_CH3_A35, ADC_10BIT) - 0;
    ad._36 =      adc_convert(ADC_8, ADC8_CH4_A36, ADC_10BIT) - 0;
    ad._37 =      adc_convert(ADC_8, ADC8_CH5_A37, ADC_10BIT) - 0;
    ad._38 =      adc_convert(ADC_8, ADC8_CH6_A38, ADC_10BIT) - 0;
    ad._39 =      adc_convert(ADC_8, ADC8_CH7_A39, ADC_10BIT) - 0;


    ad._42 =      adc_convert(ADC_8, ADC8_CH10_A42, ADC_10BIT) - 0;
    ad._43 =      adc_convert(ADC_8, ADC8_CH11_A43, ADC_10BIT) - 0;
    ad._44 =      adc_convert(ADC_8, ADC8_CH12_A44, ADC_10BIT) - 0;
    ad._45 =      adc_convert(ADC_8, ADC8_CH13_A45, ADC_10BIT) - 0;
    ad._46 =      adc_convert(ADC_8, ADC8_CH14_A46, ADC_10BIT) - 0;
    ad._47 =      adc_convert(ADC_8, ADC8_CH15_A47, ADC_10BIT) - 0;








}


