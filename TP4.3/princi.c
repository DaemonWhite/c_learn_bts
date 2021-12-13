#include "ihm.h"

int main()
{
	char choix;
	do
	{
		choix = menu();
		traitechoix(choix);
	
	} while(choix != 'f');
}
