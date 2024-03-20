
#include "headfile.h"
struct CAR getcar1;
void car2_get_str()
{

    if (uart_query(UART_2,&getcar1.data))
    {
        if (getcar1.data=='Z' )
        {
            flag.turn_direc=1;
            flag.str=1;
        }
        else if (getcar1.data=='X')
        {
            flag.turn_direc=2;
            flag.str=1;
        }
        else if (getcar1.data=='S')
        {
            flag.get_turn=1;
        }


    }
//    else
//    {
//        gpio_set(P00_0,0);
//    }
}
