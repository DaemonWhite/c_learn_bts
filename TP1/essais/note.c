#include <stdio.h>

int main(void)
{
	int Yes = 0; // Defini quant l'utilisateur à fini d'entre des valleurs
	int nmNotes = 0; // Nombe de note dans la variable
	float notes; 	//note rentrer par l'utilisateur'

	while (Yes == 0)
	{
		printf("Entre une valeur : ");
		scanf("%f", notes);
		
		nmNotes++;
		
		printf("Voulez vous ajouter une nouvelle notes 0=non 1=oui");
		scanf("%d", Yes)
		
		
		
	}
	 
}
