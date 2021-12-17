#include <stdio.h>
#include "def.h"

int main()
{
	const int maxEleve = 12;
	int noteAll = 0;
	int moyenne;

	eleve Eleve[maxEleve];

	for (int i = 0; i < maxEleve; ++i)
	{
		printf("le nom de l'eleve : ");
		scanf(" %s", Eleve[i].Nom);
		printf("Sa note : ");
		scanf(" %f", &Eleve[i].Note);
		noteAll += Eleve[i].Note;
	}

	moyenne = noteAll/noteAll;

	for (int i = 0; i < maxEleve; ++i)
	{
		printf("Le nom de l'eleve est %s et sa note est %f\n ", Eleve[i].Nom, Eleve[i].Note);
	}

	printf("La moyenne et de %f\n", moyenne);

	return 0;
}