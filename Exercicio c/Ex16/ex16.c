#include <16f628a.h>
#use delay (crystal = 4MHz)
#fuses xt, nowdt
#byte porta = 0x05
#byte portb = 0x06
#bit s1 = porta.0
#bit s2 = porta.1
#bit s3 = porta.2
#bit b1 = portb.0
#bit b2 = portb.1
#bit v1 = portb.2


main(){
	set_tris_a(0b00000000);
	set_tris_b(0b00000000);

	b1=0;b2=0;v1=0;
	while(1){
		b1 = 1;
		while(s1==0);
		b1 = 0; b2 = 1;
		while(s2==0);
		b2 = 0;
		delay_ms(600);
		v1 = 1;
		while(s3==1);
		v1 = 0;
	}
}