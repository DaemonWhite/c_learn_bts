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

void SaisieNote ( char Nom[][21], float Note[])
{

	for (int i=0; i < MAX; i++)
	{
		
		printf("Donner la note de %s est de : ", Nom[i]);
		scanf("%f", &Note[i]);
		
	}
	
}

void Afficher(char Nom[][21], float Note[], float moy)
{
	
	for (int i=0; i < MAX; i++)
	{
		printf("%s : %.2f\n", Nom[i], Note[i]);
	}
	
	printf("La moyenne et de : %.2f\n.", moy);
	
}
