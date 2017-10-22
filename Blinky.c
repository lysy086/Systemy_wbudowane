/******************************************************************************/
/* BLINKY.C: LED Flasher                                                      */
/******************************************************************************/
                  
#include <AT91SAM7X256.H>                        /* AT91SAMT7X256 definitions */
#include "delay.h"
#include "LED.h"

//
//  Main Program
// 
int main (void) {
		
LED_INIT;
 
while(1)
{
if (LEFT_KEY_DOWN)
{
LED_BCK_TGL;
delay(10);
	
			LED1_EXT_SET;
			LED2_EXT_CLR;

	while (LEFT_KEY_DOWN)
{};
delay(10);

			LED1_EXT_CLR;
			LED2_EXT_SET;
};
}
}
