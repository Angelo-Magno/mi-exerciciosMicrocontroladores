#include <16f877a.h>
#use delay(crystal = 4MHz)
#fuses xt, nowdt

#byte portc=0x07
#byte portd=0x08

#bit s1=portc.0

#bit m1=portd.0
#bit r1=portd.1
#bit t1=portd.2
#zero_ram

main(){
	set_tris_c(0b00000001);
	set_tris_d(0b11111000);
	int8 cont=0;
	m1=0;r1=0;t1=0;
	while(1){
		while(s1==0){
			m1=1;
		}
		m1=0;
		r1=1;
		delay_ms(1000);
		r1=0;
		t1=1;
		delay_ms(1000);
		t1=0;
		
		cont++;
	}
}