#include <stdio.h>
#include "ihm.h"
#include "partager.h"

int main(void)
{

	int tab[MAXTABD_PREMIER][MAXTABD_SECOND];

	reclamTabl(tab);
	
	char choix;
	do
	{
		

		choix = menu();
		traitechoix(choix, tab);
	
	} while(choix != 'f');

}

