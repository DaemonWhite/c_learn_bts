#include <stdio.h>
#include "fonction.h"

eleve Saisie()
{

	eleve Eleve;

	printf("Donner le nom de l'élève : ");
	scanf(" %s", Eleve.nom);

	printf("Donner la note de %s : ", Eleve.nom);
	scanf(" %f", &Eleve.note);

	return Eleve;

}

void Affichage(eleve Eleve)
{
	printf("La note de %s et de %f\n", Eleve.nom, Eleve.note);
}

float Traitement(eleve Eleve[])
{
	float somme =0;
	float moyenne;

	for (int i = 0; i < NOMBRE; ++i)
	{
		somme += Eleve[i].note;
	}

	moyenne = somme/NOMBRE;

	return moyenne;
}
