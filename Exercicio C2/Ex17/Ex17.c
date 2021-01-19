#include <16f877a.h>
#use delay(crystal = 4MHz)
#fuses xt, nowdt
#byte  portc=0x07
#byte  portd=0x08

#bit s1=portc.0
#bit s2=portc.1
#bit s3=portc.2
#bit s4=portc.3

#bit v1=portd.0
#bit v2=portd.1
#bit v3=portd.2
#bit m=portd.3
#bit v4=portd.4
main(){

	set_tris_c(0b00001111);
	set_tris_d(0b11100000);
	while(1){
		while(s3==0){
			v1=1;v2=0;v3=0;v4=0;m=0;
		}
		while(s2==0){
			v1=0;v2=1;
		}
		while(s1==0){
			v2=0;v3=1;
		}
		v3=0;m=1;
		delay_ms(5000);
		m=0;
		while(s4==0){
			v4=1;
		}
		v4=0;
		
	}
}