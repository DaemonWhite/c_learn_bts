#include <stdio.h>
#include "Def.h"

void Saisie(eltpers tab[MAXPERS]);
float SommeNets(eltpers tab[MAXPERS]);

int main()
{
	eltpers Tab[MAXPERS];
	float somme;
	
	Saisie(Tab);
	somme = SommeNets(Tab);
	
	printf("somme des salaires nets = %.2f\n",somme);
	
	return 0;
}

float SommeNets(eltpers tab[MAXPERS])
{
	float somme = 0;

	for (int i = 0; i < MAXPERS; ++i)
	{
		somme += tab[i].sal.net;
	}

	return somme;
}

void Saisie(eltpers tab[MAXPERS])
{
	for (int i = 0; i < MAXPERS; ++i)
	{
		printf("Donner votre nom : ");
		scanf("%s", tab[i].nom);
		printf("Donner votre tel : ");
		scanf("%s", tab[i].tel);
		printf("Donner votre brut : ");
		scanf("%f", &tab[i].sal.brut);
		printf("Donner votre net : ");
		scanf("%f", &tab[i].sal.net);
	}
}
