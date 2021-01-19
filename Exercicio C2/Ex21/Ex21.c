#include <16f877a.h>
#use delay(crystal = 4MHz)
#fuses xt, nowdt

#byte  portc=0x07
#byte  portd=0x08

#bit botao=portc.0
#bit sa=portc.1
#bit sb=portc.2
#bit sc=portc.3
#bit botaop=portc.4

#bit m2d=portd.0
#bit m1h=portd.1
#bit m2s=portd.2
#bit m1a=portd.3

main(){
	int8 estado=3;
	m2d=0;m2s=0;m1h=0;m1a=0;
	
	set_tris_c(0b00001111);
	set_tris_d(0b11110000);
	while(1){
		switch(estado){
			case 3: m2d=0;m2s=0;m1h=0;m1a=0;
					if(botao==1){estado=0;}
			break;

			case 0:if(botaop==0){
					 if(sa==1){
						m2d=1;
						estado=4;
					
						}
					 if(sa==0)estado=1;
					}else estado=3;		
			break;	

			case 4 :if(botaop==0){
						if(sb==1)m1h=1; 
						if(sc==1)estado=2;
					}else estado=3;		
			break;

			case 1: if(botaop==0){
						m2s=1; 
						if(sa==1){m2s=0;estado=0;}
					}else estado=3;		
			break;

			case 2: if(botaop==0){
						m2d=0; m1h=0;
					    m2s=1; m1a=1;
						if(sb==0){
							estado=5;
						}
					}else estado=3;		
			break;
			case 5:if(botaop==0){
						m1a=0;
						if(sa==1){m2a=0;estado=3;
						}
					}else if() estado=3;	

			break;
		}
	}
}