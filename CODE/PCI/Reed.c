#include "headfile.h"



void reeds_init(void)
{
    gpio_init(Reeds, GPI, 1, PULLUP);
}

void reeds_get(void)
{
    if(gpio_get(Reeds))
    {
        flag.reed=0;
    }
    else
    {
        flag.reed=1;
    }
}


void led_init(void)
{
    gpio_init(Led_red, GPO, 0, PULLUP);
    gpio_init(Led_green, GPO,0, PULLUP);
    gpio_init(Led_yellow, GPO, 0, PULLUP);
}

void led_control(void)
{
    switch(flag.led)
    {
        case 1:gpio_set(Led_red,1);gpio_set(Led_green,0);gpio_set(Led_yellow,0);break;
        case 2:gpio_set(Led_red,0);gpio_set(Led_green,1);gpio_set(Led_yellow,0);break;
        case 3:gpio_set(Led_red,0);gpio_set(Led_green,0);gpio_set(Led_yellow,1);break;
        default:gpio_set(Led_red,0);gpio_set(Led_green,0);gpio_set(Led_yellow,0);break;
    }
}
