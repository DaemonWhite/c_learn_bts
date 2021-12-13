#include <stdio.h>
#include "partager.h"

void someMoy(int tab[][MAXTABD_SECOND], int *somme, float *moyenne)
{
	*somme = 0;
	*moyenne = 0;

	for (int i = 0; i < MAXTABD_PREMIER; ++i)
	{
		for (int i2 = 0; i2 < MAXTABD_SECOND; ++i2)
		{
			*somme += tab[i][i2];
		}
	}

	*moyenne = (float)*somme / ( MAXTABD_PREMIER * MAXTABD_SECOND );

}

void maxminSome(int tab[][MAXTABD_SECOND], int *max, int *min)
{

	float resultMax = tab[0][0];
	float resultMin = tab[0][0];

	for (int i = 0; i < MAXTABD_PREMIER; ++i)
	{
		for (int i2 = 1; i2 < MAXTABD_SECOND; ++i2)
		{
			resultMax = (resultMax>tab[i][i2])? resultMax :tab[i][i2];
			resultMin = (resultMin<tab[i][i2])? resultMin :tab[i][i2];
		}
	}

	*max = resultMax;
	*min = resultMin; 

}