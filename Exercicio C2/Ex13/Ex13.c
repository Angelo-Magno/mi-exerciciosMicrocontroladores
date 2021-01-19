#include <16f628a.h>
#use delay (crystal = 4 Mhz)
#fuses xt, nowdt, noprotect, put

#byte portb=0x06
#bit led=portb.0
#bit led1=portb.1

main(){
	set_tris_b(0b11111100);
	int8 cont = 0;
	while(1){
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
	}
}