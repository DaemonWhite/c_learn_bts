#include "partager.h"

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
