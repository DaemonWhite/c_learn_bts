#include "partager.h"

float moyenne(float note[])
{
	float somme = 0;
	float result;
	int i;
	
	for (i=0; i < MAX; i++)
	{
		somme += note[i];
	}
	
	result = somme/MAX;
	
	return result;

}
