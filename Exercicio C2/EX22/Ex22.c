#include <16f877a.h>
#use delay(crystal = 4MHz)
#fuses xt, nowdt

#byte  portc=0x07
#byte  portd=0x08

#bit s1=portc.0
#bit s2=portc.1
#bit s3=portc.2
#bit s4=portc.3
#bit s5=portc.4
#bit botao=portc.5

#bit q1=portd.0
#bit q2=portd.1
#bit q3=portd.2
#bit q4=portd.3
main(){
	int8 estado=0;
	q1=0;q2=0;q3=0;q4=0;
	set_tris_c(0b00111111);
	set_tris_d(0b11110000);
	while(1){
		switch(estado){
			case 0: if(botao==1)estado=1;
			case 1: q1=1;q3=1; 
					if(s3==1)estado=3;
					if(s1==1)estado=4;
					
			break;
			case 3: q1=1;q2=1; if(s2==1)estado=4;
			break;
			case 4: q3=1;q2=1;if(s4==1)estado=2;
			break;
			case 2: q1=1;q4=1; 
					if(s3==1)estado=0;
					if(s5==1)estado=1;
					if(s2==1)estado=4;
			
		}
	}
}