#include <stdio.h>
#include "partager.h"
#include "traitement.h"

void SaisieNom ( char Nom[][21] )
{
	for (int i=0; i < MAX; i++)
	{	
		printf("Donner le nom de l'élève : ");
		scanf("%s", Nom[i]);
	}	

}

void SaisieNote ( char Nom[][21], float Note[][MAXNOTE])
{


	for (int i=0; i < MAX; i++)
	{
	
		for (int ideux=0; ideux < MAXNOTE; ideux++)
		{ 
			printf("Donner la note %d de %s est de : ", ideux + 1,Nom[i]);
			scanf("%f", &Note[i][ideux]);
		}
		
		
		
	}
	
}

void Afficher(char Nom[][21], float Note[][MAXNOTE], float moy, float Moy[])
{
	
	for (int i=0; i < MAX; i++)
	{
		for (int ideux=0; ideux < MAXNOTE; ideux++)
		{ 
			printf("%-21s : %.2f\n", Nom[i], Note[i][ideux]);
		}
		
		printf("La moyene de %s et de %.2f\n", Nom[i], Moy[i]);
		
	}
	
	printf("La moyenne et de : %.2f\n.", moy);
	
}
