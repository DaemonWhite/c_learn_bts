#include <stdio.h>
#include "application.h"

char menu()
{
	char choix;
	
	printf("\n'i' pour calculer l'inverse d'un nombre\n'd' quotient reste\n'm' minimum et max de 4 nombre reel\n'f' fermeture du programe\n ");
	scanf(" %c", &choix);

	return choix;
	
}

void traitechoix(char choix)
{
	
	float floatA;
	float flResulte;

	float tab[4];

	float max;
	float min;

	int intA;
	int intB;

	int quotient;
	int reste;

	switch (choix)
	{
		case 'i' : 

			printf("\nDonner le nombre à inverser : ");
			scanf("%f", &floatA);

			flResulte = inverse(floatA);

			printf("L'inverse est %f\n", flResulte); break;

		case 'd' : 

			printf("\nDonner le quotient : ");
			scanf("%d", &intA);

			printf("\nDonner le reste : ");
			scanf("%d",&intB);

			quoteReste(intA, intB, &quotient, &reste);
			printf("\nLe quotient : %d\n Le reste : %d", quotient,reste); break;

		case 'm' : 

			for (int i = 0; i < 4; i++)
			{
				printf("\nDonner le nombre %d : ", i+1);
				scanf("%f", &tab[i]);
			}

			minmax(tab, &max, &min);
			printf("Le max est de : %f\nLe min est de : %f\n", max, min); break;
		case 'f' : printf("Fermeture du programe\n"); break;
		default : printf("Valeur inconue\n");
	}
	
}