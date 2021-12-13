#include "partager.h"


// Calcule les espace dans un tableau après et avant le nom
float testPrint(char Nom[][21], int nbLettre[])
{
	int i=0;
	int i2=0;
	int result;
	int tmp=0;
	
	for (i=0; i < MAX; i++)
	{
		for (i2; Nom[i]; i2++)
		{
		
		}

		printf("i2 = %d", i2);
		tmp = i2;
		
		if (tmp < nbLettre[i])
		{
			tmp = nbLettre[i];
		}
		
		printf(" Incroyable %d ", nbLettre[i]);
		
	}
	
	tmp = result;
	
	for (i=0; i < MAX; i++)
	{
		
		nbLettre[i] = tmp - nbLettre[i];

	}
	

	return result;
}

float moyenne(float note[][MAXNOTE], float Moy[])
{
	float somme = 0;
	float someTmp;
	float result;
	int i,ideux;
	
	for (i=0; i < MAX; i++)
	{
		someTmp = 0;
		
		for (ideux=0; ideux < MAXNOTE; ideux++)
		{
			someTmp += note[i][ideux];
		}
		
		Moy[i] = someTmp/MAXNOTE;
		
		somme += someTmp;
	}
	
	result += somme/(MAX*MAXNOTE);
	
	return result;

}
