#include <16f877a.h>
#use delay (crystal= 4Mhz)
#fuses xt, nowdt, noprotect, put

#byte portb=0x06
#byte portd=0x08
#bit led=portb.0
#bit led1=portd.0

//#zero_ram

main(){
	set_tris_b(0b11111110);
	set_tris_d(0b11111110);
	int8 cont = 0;
	int8 cont1 = 0;
	while(cont1<3){
		led = 0;
		led1= 0;
		while(cont<=1){
			led=1;
			delay_ms(500);
			led= 0 ;
			delay_ms(500);
			cont++;
		}
		cont=0;
		while(cont<=2){
			led1=1;
			delay_ms(500);
			led1= 0 ;
			delay_ms(500);
			cont++;
		}
		cont=0;
		cont1++;
	}

}