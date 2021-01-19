#include <16f877a.h>
#use delay(crystal = 4MHz)
#fuses xt, nowdt

#byte  portc=0x07
#byte  portd=0x08

#bit s1=portc.0
#bit s2=portc.1
#bit s3=portc.2

#bit m=portd.0
#bit eb=portd.1
#bit ec=portd.2

main(){
	set_tris_c(0b00000111);
	set_tris_d(0b11111000);
	int8 estado=0;
	m=0;eb=0;ec=0;	
	while(1){
		switch(estado){
			case 0:	m=1; if(s1==1){m=0;estado=1;} 
			break;
			case 1:  eb=1; if(s2==1){eb=0;estado=2;} 
			break;
			case 2: ec=1; if(s3==1){ec=0;estado=0;} 
			break;
			
		}
	}
}