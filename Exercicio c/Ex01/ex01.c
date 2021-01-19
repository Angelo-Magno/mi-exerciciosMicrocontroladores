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
	set_tris_b(0b0000000);//0xFE
	while(1){
		LED = 1;
		LED1 = 1;
		LED2 = 1;
		LED3 = 1;
		LED4 = 0;
		LED5 = 0;
		LED6 = 0;
		LED7 = 0;
		delay_ms(500);
		LED = 0;
		LED1 = 0;
		LED2 = 0;
		LED3 = 0;
		LED4 = 1;
		LED5 = 1;
		LED6 = 1;
		LED7 = 1;
		delay_ms(500);
	
	}	


}