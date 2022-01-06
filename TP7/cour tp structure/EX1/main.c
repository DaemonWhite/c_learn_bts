#include <stdio.h>
#include "def.h"

int main()
{
	
	eleve Eleve;

	printf("le nom de l'eleve : ");
	scanf(" %s", Eleve.Nom);
	printf("Sa note : ");
	scanf(" %f", &Eleve.Note);

	printf("Le nom de l'eleve est %s et sa note est %f\n ", Eleve.Nom, Eleve.Note);


	return 0;
}