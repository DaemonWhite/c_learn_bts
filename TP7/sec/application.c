#include <stdio.h>

float inverse(float nbUser)
{
	float result;

	 result = 1 / nbUser;	


	return result;
}

void quoteReste(int nbA,int nbB,int *quotient,int *reste)
{
	*quotient = nbA / nbB;
	*reste = nbA % nbB;
}

void minmax(float tab[], float *max,float *min)
{
	float resulte = tab[0];
	float b = tab[1];
	float c = tab[2];
	float d = tab[3];

	resulte = (resulte>b)? resulte :b;
	resulte = (resulte>c)? resulte :c;
	resulte = (resulte>d)? resulte :d;

	*max = resulte;

	resulte = tab[0];
	b = tab[1];
	c = tab[2];
	d = tab[3];

	resulte = (resulte<b)? resulte :b;
	resulte = (resulte<c)? resulte :c;
	resulte = (resulte<d)? resulte :d;	

	*min = resulte;
		
}