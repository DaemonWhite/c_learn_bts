
#include "ihm.h"

int main()
{
	char choix;
	do
	{
		choix = menu();
		traitrechoix(choix);
		
	} 
	while (choix != 'f');
	
	return 0;
}
