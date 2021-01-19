#include <16f628a.h>
#use delay (crystal = 4Mhz)//Definição de frequência do cristal

#fuses xt, nowdt, NOPROTECT, nobrownout, put//Fusebits
#byte PORTB = 0x06 //Acessa o endreço 06h do portb
#bit LED = PORTB.0  //Acessa o pino B0
#bit LED1 = PORTB.1 
#bit LED2 = PORTB.2
#bit LED3 = PORTB.3
#bit LED4 = PORTB.4
#bit LED5 = PORTB.5
#bit LED6 = PORTB.6
#bit LED7 = PORTB.7
main(){
	set_tris_b(0b00000000);//0xFE
	while(1){
	 	PORTB = 0B01101111;
		delay_ms(500);
		PORTB = 0B11111111;
		delay_ms(500);
		PORTB = 0B00000111;
		delay_ms(500);
		PORTB = 0B01111101;
		delay_ms(500);
		PORTB = 0B01101101;
		delay_ms(500);
		PORTB = 0B01100110;
		delay_ms(500);
		PORTB = 0B01001111;
		delay_ms(500);
PORTB = 0B01011011;
		delay_ms(500);
PORTB = 0B00000110;
		delay_ms(500);
PORTB = 0B10111111;
		delay_ms(500);

	}	


}