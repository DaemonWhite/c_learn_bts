#include <stdio.h>
#include "ihm.h"


int main(void)
{

	char choix;
	do
	{
		choix = menu();
		traitechoix(choix);
	
	} while(choix != 'f');

}

