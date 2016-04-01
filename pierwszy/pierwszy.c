#include <avr/io.h>
#include <util/delay.h>

unsigned char seg7[] = {0xc0, 0xf9, 0xa4, 0xb0, 0x99, 0x92, 0x82, 0xf8, 0x80, 0x90 };

int main(void) {

	int i;
	DDRA = 0xff;
	PORTA = 0x90;
	
	while(1)
	{
		for (i = 0; i < 10; i++)
		{
			PORTA = seg7[i];
			_delay_ms(500);
		}
		
	}

	/*DDRA = 0b11111111;
	PORTA = 0;
	while(1);
		{
			PORTA = 0xff;
			_delay_ms(500);

			PORTA = 0xfe;
			_delay_ms(500);
		}*/


	return 0;
}
