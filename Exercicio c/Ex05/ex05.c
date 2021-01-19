#include <16f628a.h>
#use delay (crystal = 4mhz)
#fuses xt, nowdt, noprotect, nobrownout, put
#byte portb = 0x06
#byte porta = 0x05
#bit botao = porta.0
#bit botao1 = porta.1
#bit led = portb.0
#bit led1 = portb.1
main(){
	set_tris_a(0b11111100);
	set_tris_b(0b11111100);
	while(1){
		if(botao==1){
			led = 1;
		}
		if(botao1==1){
			led1 = 1;
		}
		while(botao==0 && botao1==0){
			led = 0;
			led1 = 0;
		}
	}

}