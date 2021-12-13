#include <stdio.h>
#include "partager.h"
#include "application.h"

char menu()
{
	char choix;
	
	printf("\n'i' pour calculer la somme et la moyenne\n'm' minimum et max de 4 nombre reel\n'f' fermeture du programe\n ");
	scanf(" %c", &choix);

	return choix;
	
}

void reclamTabl(int tab[][MAXTABD_SECOND])
{
	int count = 1;

	for (int i = 0; i < MAXTABD_PREMIER; ++i)
	{
		for (int i2 = 0; i2 < MAXTABD_SECOND; ++i2)
		{
			printf("Donner la valeur %d à traiter : ", count );
			scanf("%d", &tab[i][i2]);
			count++;
		}
	}
}

void renderTabl(int tab[][MAXTABD_SECOND])
{
	char demande;

	printf("Voulez vous afficher les valeurs? oui [y] ");
	scanf(" %c", demande);

	if (demande != 'y')
	{
		for (int i = 0; i < MAXTABD_PREMIER; ++i)
		{
			for (int i2 = 0; i2 < MAXTABD_SECOND; ++i2)
			{
				printf("\t 1 \t 2\t 3 \t 4 \t 5\t 6 \t7 \t8 \t9 \t10 \t11 \t12");

				printf("\t %d")
			}
		}
	}
}

void traitechoix(char choix, int tabSomeMoy[][MAXTABD_SECOND])
{
	
	float moy;

	int somme;
	int max, min;



	switch (choix)
	{
		case 'i' : 

			someMoy(tabSomeMoy, &somme, &moy);

			printf("La somme et de %d, la moyenne et de %f", somme, moy); break;

		case 'm' : 

			maxminSome(tabSomeMoy, &max, &min);
			printf("Le max et de %d, le min et de %d", max, min); break;

		case 'f' : printf("Fermeture du programe\n"); break;
		default : printf("Valeur inconue\n");
	}
	
}
