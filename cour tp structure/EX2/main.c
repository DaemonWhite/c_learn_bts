#include "fonction.h"
#include <stdio.h>

int main()
{
	eleve tabEleve[NOMBRE];
	float moy;

	for (int i = 0; i < NOMBRE; ++i)
	{
		tabEleve[i] = Saisie();	
	}

	moy = Traitement(tabEleve);

	for (int i = 0; i < NOMBRE; ++i)
	{
		Affichage(tabEleve[i]);
	}

	printf("moyenne : %f", moy);

	return 0;
}