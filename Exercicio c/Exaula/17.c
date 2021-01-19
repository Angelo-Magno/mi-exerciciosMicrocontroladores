#include <16f628a.h>
#use delay (crystal = 4MHz)
#fuses xt, nowdt
#byte porta = 0x05
#byte portb = 0x06
#bit s1 = porta.0
#bit s2 = porta.1
#bit s3 = porta.2
#bit s4 = porta.3
#bit v1 = portb.0
#bit v2 = portb.1
#bit v3 = portb.2
#bit motor = portb.3
#bit v4 = portb.4

main(){
	set_tris_a(0b11111111);
	set_tris_b(0b00000000);
	
	v2=0;v3=0;v4=0;motor=0;
	
	while(1){
		v1 = 1;
		while(s3==0);
		v1 = 0; v2 = 1;
		while(s2==0);
		v2 = 0;v3 = 1;
		while(s1==0);
		v3=0;motor=1;
		delay_ms(5000);
		motor = 0;v4 = 1;
		while(s4==0);
		v4=0;
	}

}