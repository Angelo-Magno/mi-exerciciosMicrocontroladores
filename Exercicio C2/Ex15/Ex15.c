#include <16f877a.h>
#use delay (crystal = 4Mhz)//Definição de frequência do cristal

#fuses xt, nowdt, NOPROTECT, nobrownout, put//Fusebits
#byte PORTB = 0x06 //Acessa o endreço 06h do portb
#byte PORTD = 0x08

#bit LED1 = PORTD.0
#bit LED2 = PORTD.1
#bit LED3 = PORTD.2
#bit LED4 = PORTD.3
#bit LED5 = PORTD.4
#bit LED6 = PORTD.5
#bit LED7 = PORTD.6

#zero_ram
main(){	
	int zero = 0B10111111;
	int	um = 0B00000110;
	int	dois = 0B01011011;
	int	tres = 0B01001111;
	int	quatro = 0B01100110;
	int	cinco = 0B01101101;
	int	seis = 0B01111101;
	int	sete = 0B00000111;
	int	oito = 0B11111111;
	int	nove = 0B01101111;

	set_tris_b(0b00000000);
	set_tris_d(0b00000000);
	while(1){
		
		PORTD= zero;
		PORTB= 0B00000010;
		delay_ms(100);
		PORTD= zero;
		PORTB= 0B00000001;
		delay_ms(100);
		PORTD= zero;
		PORTB= 0B00000010;
		delay_ms(100);
		PORTD= um;
		PORTB= 0B00000001;
		delay_ms(100);
		PORTD= zero;
		PORTB= 0B00000010;
		delay_ms(100);
		PORTD= dois;
		PORTB= 0B00000001;
		delay_ms(100);
		PORTD= zero;
		PORTB= 0B00000010;
		delay_ms(100);
		PORTD= tres;
		PORTB= 0B00000001;
		delay_ms(100);
		PORTD= zero;
		PORTB= 0B00000010;
		delay_ms(100);
		PORTD= quatro;
		PORTB= 0B00000001;
		delay_ms(100);
		PORTD= zero;
		PORTB= 0B00000010;
		delay_ms(100);
		PORTD= cinco;
		PORTB= 0B00000001;
		delay_ms(100);
		PORTD= zero;
		PORTB= 0B00000010;
		delay_ms(100);
		PORTD= seis;
		PORTB= 0B00000001;
		delay_ms(100);
		PORTD= zero;
		PORTB= 0B00000010;
		delay_ms(100);
		PORTD= sete;
		PORTB= 0B00000001;
		delay_ms(100);
		PORTD= zero;
		PORTB= 0B00000010;
		delay_ms(100);
		PORTD= oito;
		PORTB= 0B00000001;
		delay_ms(100);
	}

}