/*
 * BlinkALed.c
 *
 * Created: 01.12.2017 14:24:24
 * Author : st154517
 */ 

#define F_CPU 16000000L
#include <avr/io.h>
#include <util/delay.h>


int main(void)
{
    /* Replace with your application code */
	DDRB = 0x02;
	DDRD = 0x00;
	PORTD = 0x0C;
    while (1) 
    { if((PIND & 0x08) == 0)
		{
		    PORTB = 0x02;
			_delay_ms(100);
			PORTB = 0x00;
			_delay_ms(100);
		}
	  else
	   {
		   PORTB = 0x02;
		   _delay_ms(250);
		   PORTB = 0x00;
		   _delay_ms(250);
	   }
		
    }
}

