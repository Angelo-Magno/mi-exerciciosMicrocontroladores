#include <16f877a.h>
#use delay(crystal = 1MHz)
#fuses xt, nowdt
#byte portb= 0x06
#byte portd= 0x08
#bit led = portb.0
#bit led2 = portd.3 
#zero_ram
int i=1,j,z=1;

main(){
	set_tris_b(0b11111110);
	set_tris_d(0b11110111);
	portb = 0;
	portd = 0;
	while(z<=3){
		i=1;
		while(i<=2){
			led=1;delay_ms(200);
			led=0;delay_ms(200);
			i++;
		}
		for(j=1;j<=3;j++){
			led2=1;delay_ms(200);
			led2=0;delay_ms(200);
		}
		z++;
	}
} 