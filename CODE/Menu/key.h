#ifndef _key_H_
#define _key_H_





#define KEY_DOWN P32_4
#define KEY_UP P22_2
#define KEY_RIGHT P22_0
#define KEY_LEFT P22_1
#define KEY_CENTER P23_1


#define KEY_P0 P21_2
#define KEY_P1 P22_3
#define KEY_P2 P22_3





#define KEY_UP_Init gpio_init(KEY_UP, GPI, 1, PULLUP)
#define KEY_DOWN_Init gpio_init(KEY_DOWN, GPI, 1, PULLUP)
#define KEY_LEFT_Init gpio_init(KEY_LEFT, GPI, 1, PULLUP)
#define KEY_RIGHT_Init gpio_init(KEY_RIGHT, GPI, 1, PULLUP)
#define KEY_CENTER_Init gpio_init(KEY_CENTER, GPI, 1, PULLUP)
#define KEY0_Init gpio_init(KEY_P0, GPI, 1, PULLUP)
#define KEY1_Init gpio_init(KEY_P1, GPI, 1, PULLUP)
#define KEY2_Init gpio_init(KEY_P2, GPI, 1, PULLUP)



typedef enum
{
    KEY0,  //Ä¸°åÉÏ°´¼ü0
    KEY1,
    KEY2,
    KEYLEFT,
    KEYRIGHT,
    KEYUP,
    KEYDOWN,
    KEYCENTER
} KEYn_e;

void Key_Init(void);
int keyup(void);
int keydown(void);
int keycenter(void);
int keyleft(void);
int keyright(void);
int key1(void);
int key2(void);
int key3(void);
extern struct RATE rate;
extern struct FLAG flag;
extern struct CNT cnt;

#endif
