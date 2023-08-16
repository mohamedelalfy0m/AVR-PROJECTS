/*
 * 7segment 4bit.c
 *
 * Created: 8/16/2023 4:49:55 PM
 * Author : MOHAMED
 */ 

#include <avr/io.h>
#include <util/delay.h>
#define LED_direction DDRA		/* define LED Direction */
#define LED_PORT PORTA			/* define LED PORT */

int main(void)
{
	LED_direction |= 0xff;		/* define LED port direction is output */
	LED_PORT = 0xff;
	char array[]={0,1,2,3,4,5,6,7,8,9};
	/* write BCD value for CA display from 0 to 9 */
	while(1)
	{
		for(int i=0;i<10;i++)
		{
			LED_PORT = array[i];/* write data on to the LED port */
			_delay_ms(1000); /* wait for 1 second */
		}
	}
}

