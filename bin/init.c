
#include "main.h"

int init(void) {

	Decode_R();

	if(system("ls etc/init.conf") == 0) {

		if(strcmp(Decode, Activation_V_Code) == 0)

		  Main_Menu();

		else 

		  Activation();	
	}

	else

	  Welcome();

	return EXIT_SUCCESS;
}
