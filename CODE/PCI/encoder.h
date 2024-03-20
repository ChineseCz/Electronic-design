#ifndef _encoder_H_
#define _encoder_H_




#define Enc_Init gpt12_init(GPT12_T2, GPT12_T2INB_P33_7, GPT12_T2EUDB_P33_6)
#define Enc1_Init gpt12_init(GPT12_T5, GPT12_T5INB_P10_3, GPT12_T5EUDB_P10_1)

#define Enc_Clear gpt12_clear(GPT12_T2);gpt12_clear(GPT12_T5)
#define Speed_Left_Get -gpt12_get(GPT12_T2)
#define Speed_Right_Get -gpt12_get(GPT12_T5)

void Encoder_Init(void);
void Control_Speed(void);

extern struct ENCODER enc;


#endif
