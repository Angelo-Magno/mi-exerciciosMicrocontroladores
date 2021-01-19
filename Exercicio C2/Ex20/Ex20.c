#include <16f877a.h>
#use delay(crystal = 4MHz)
#fuses xt, nowdt

#byte  portc=0x07
#byte  portd=0x08

#bit botao=portc.0
#bit s1=portc.1
#bit s2=portc.2

#bit esteira=portd.0
#bit r=portd.1
main(){
	int8 estado=0;
	botao=0;esteira=0;r=0;
	set_tris_c(0b00000111);
	set_tris_d(0b11111100);
	while(1){
		switch(estado){
			case 0: if(botao==1){esteira=1;estado=1;}
			break;
			case 1: if(s1==1){estado=2;}
			break;
			case 2: esteira=0; r=1; if(s2==1){r=0; estado=0;}
			break;
		}
	}
}