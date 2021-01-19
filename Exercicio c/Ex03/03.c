#include <16f628a.h>
#use delay (crystal = 4Mhz)//Definição de frequência do cristal

#fuses xt, nowdt, NOPROTECT, nobrownout, put//Fusebits
#byte PORTB = 0x06 //Acessa o endreço 06h do portb
#byte PORTA = 0x05
#bit LED = PORTB.0  //Acessa o pino B0
#bit LED1 = PORTB.1 
#bit LED2 = PORTB.2
#bit LED3 = PORTB.3
#bit LED4 = PORTB.4
#bit LED5 = PORTB.5
#bit LED6 = PORTB.6
#bit LED7 = PORTB.7
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
		set_tris_a(0b00000000);
	
	while(1){
		PORTB = zero;//0
		PORTA = 0B00000001;
		delay_ms(500);
		PORTA = 0B00000010;
		PORTB = zero;
		delay_ms(500);
		//primeiro numero	

		PORTB = um;//1
		PORTA = 0B00000001;
		delay_ms(500);
		PORTA = 0B00000010;
		PORTB = zero;
		delay_ms(500);
		//segundo numero

		PORTB = dois;//2
		PORTA = 0B00000001;
		delay_ms(500);
		PORTA = 0B00000010;
		PORTB = zero;
		delay_ms(500);

		PORTB = tres;//3
		PORTA = 0B00000001;
		delay_ms(500);
		PORTA = 0B00000010;
		PORTB = zero;
		delay_ms(500);

		PORTB = quatro;//4
		PORTA = 0B00000001;
		delay_ms(500);
		PORTA = 0B00000010;
		PORTB = zero;
		delay_ms(500);

		PORTB = cinco;//5
		PORTA = 0B00000001;
		delay_ms(500);
		PORTA = 0B00000010;
		PORTB = zero;
		delay_ms(500);

		PORTB = seis;//6
		PORTA = 0B00000001;
		delay_ms(500);
		PORTA = 0B00000010;
		PORTB = zero;
		delay_ms(500);

		PORTB = sete;//7
		PORTA = 0B00000001;
		delay_ms(500);
		PORTA = 0B00000010;
		PORTB = zero;
		delay_ms(500);

		PORTB = oito;//8
		PORTA = 0B00000001;
		delay_ms(500);
		PORTA = 0B00000010;
		PORTB = zero;
		delay_ms(500);
		
	 	PORTB = nove;//9
		PORTA = 0B00000001;
		delay_ms(500);
		PORTA = 0B00000010;
		PORTB = zero;
		delay_ms(500);

	 	PORTB = zero;//10
		PORTA = 0B00000001;
		delay_ms(500);
		PORTA = 0B00000010;
		PORTB = um;
		delay_ms(500);

	 	PORTB = um;//11
		PORTA = 0B00000001;
		delay_ms(500);
		PORTA = 0B00000010;
		PORTB = um;
		delay_ms(500);

	 	PORTB = dois;//12
		PORTA = 0B00000001;
		delay_ms(500);
		PORTA = 0B00000010;
		PORTB = um;
		delay_ms(500);

	 	PORTB = tres;//13
		PORTA = 0B00000001;
		delay_ms(500);
		PORTA = 0B00000010;
		PORTB = um;
		delay_ms(500);

	 	PORTB = quatro;//14
		PORTA = 0B00000001;
		delay_ms(500);
		PORTA = 0B00000010;
		PORTB = um;
		delay_ms(500);

	 	PORTB = cinco;//15
		PORTA = 0B00000001;
		delay_ms(500);
		PORTA = 0B00000010;
		PORTB = um;
		delay_ms(500);

	 	PORTB = seis;//16
		PORTA = 0B00000001;
		delay_ms(500);
		PORTA = 0B00000010;
		PORTB = um;
		delay_ms(500);

	 	PORTB = sete;//17
		PORTA = 0B00000001;
		delay_ms(500);
		PORTA = 0B00000010;
		PORTB = um;
		delay_ms(500);

	 	PORTB = oito;//18
		PORTA = 0B00000001;
		delay_ms(500);
		PORTA = 0B00000010;
		PORTB = um;
		delay_ms(500);

	 	PORTB = nove;//19
		PORTA = 0B00000001;
		delay_ms(500);
		PORTA = 0B00000010;
		PORTB = um;
		delay_ms(500);

	 	PORTB = zero;//20
		PORTA = 0B00000001;
		delay_ms(500);
		PORTA = 0B00000010;
		PORTB = dois;
		delay_ms(500);
		

	}	


}