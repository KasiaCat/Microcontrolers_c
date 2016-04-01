#include <avr/io.h>
#include <util/delay.h>

unsigned char seg7[] = {0xc0, 0xf9, 0xa4, 0xb0, 0x99, 0x92, 0x82, 0xf8, 0x80, 0x90 };

int main(void) {

	/*DDRA = 0xff;
	DDRB = 0xff;
	PORTA = 0xff;
	PORTB = 0xff;

	while(1)
	{
		PORTA = seg7[1];
		PORTB = 0b11111110;
		_delay_ms(500);
		//
		PORTA = seg7[2];
		PORTB = 0b11111101;
		_delay_ms(500);
		//
		PORTA = seg7[3];
		PORTB = 0b11111011;
		_delay_ms(1500);
		//
		PORTA = seg7[4];
		PORTB = 0b111110111;
		_delay_ms(1000);
	}*/


	DDRA = 0xff;
	DDRB = 0;
	PORTA = 0xff;
	PORTB = 0xff; //wlaczenie rezystorow polaryzujacych, 
					//bo portb jest wejsciem

	while(1)
	{
		PORTA = PINB;
		_delay_ms(500);
	}


	return 0;
}
