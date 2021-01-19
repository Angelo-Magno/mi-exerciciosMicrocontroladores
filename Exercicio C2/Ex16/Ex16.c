#include <16f877a.h>
#use delay(crystal = 4MHz)
#fuses xt, nowdt
#byte portc= 0x07
#byte portd= 0x08

#bit s1 = portc.0 
#bit s2 = portc.1
#bit s3 = portc.2

#bit b1 = portd.0 
#bit b2 = portd.1
#bit m = portd.2
#bit v1 = portd.3
#zero_ram

main(){
	set_tris_c(0b00000111);
	set_tris_d(0b11110000);
	
	
	while(1){
		b1=0;b2=0;m=0;v1=0;
		b1=1;
		while(s1==0){
			b2=0;
		}
		while(s2==0){
			b1=0;b2=1;
		}
		b2=0;
		m=1;
		delay_ms(6000);
		m=0;
		while(s3==0){
			v1=1;
		}
		v1=0;
		
	}
}