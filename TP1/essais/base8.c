#include <stdio.h>

int main(void)
{
	const int BASE = 8;
	const int MAXI = 500;
	
	int poids_0;
	int poids_1;
	int poids_2;
	int nombre;
	
	printf("Entre un entier compris entre 0 et 500 : ");
	scanf("%d", &nombre);
	
	if (nombre < MAXI)
	{
		poids_0 = nombre%BASE;
		nombre  = nombre/BASE;
		poids_1 = nombre%BASE;
		poids_2 = nombre/BASE;
		printf("Resultat =%d%d%d",poids_2, poids_1, poids_0);
	}
	else 
	{
		printf("Nombre non valide");
	}
	 
}
