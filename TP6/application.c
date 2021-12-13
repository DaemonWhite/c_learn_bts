#include "partage.h"

int initia(int max)
{
	for (i=0; i <= max; i++ )
	{
		v[i] = 0;
	}	
}

int voyelles(int max, char v[])
{

	initia(max);
	
	do
	{
		switch(c)
		{
			case 'a' : v[0]++ ; break;
			case 'e' : v[1]++ ; break;
			case 'i' : v[2]++ ; break;
			case 'o' : v[3]++ ; break;
			case 'u' : v[4]++ ; break;
			case 'y' : v[5]++ ; break;
		}
	}while(c!='*');
}

int lettre(int max, char v[])
{

	const int ASCIIstart = 97;
	do
	{
		c=getchar(); /*saisi du caractère en tête de la file après l'apui sur entré'*/
		
		i= c - ASCIIstart;
		v[i]++;
		
	}while(c!='*');
}
