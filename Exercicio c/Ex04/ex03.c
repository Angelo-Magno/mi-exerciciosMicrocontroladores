#include <16f628a.h>
#use delay (crystal = 4mhz)
#fuses xt, nowdt, noprotect, nobrownout, put
#byte portb = 0x06
#byte porta = 0x05
#bit botao = porta.0
#bit led = portb.0
main(){
	set_tris_a(0b00000000);
	set_tris_b(0b11111110);
	while(1){
		if(botao==1)
			led = 1;
		while(botao==0)
			led = 0;
	}

}