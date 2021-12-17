#include <stdio.h>

int main(void)
{
	char continuer; // Defini quant l'utilisateur à fini d'entre des valleurs
	int somme = 0; // Nombe de note dans la variable
	float notes; 	//note rentrer par l'utilisateur'
	float totalNote;

	do
	{
		do
		{
			printf("\nEntre une valeur : ");
			scanf("%f", &notes);
			
			if (notes < 0 || notes > 20)
			{
				printf("La valeur doit êtres entre 0 et 20\n");
			}
			
		} while (notes < 0 || notes > 20);
		
		somme++;
		
		totalNote += notes;
		
		printf("\nVoulez vous ajouter une nouvelle notes 'o' ou 'y' pour contnuer : ");
		scanf(" %c", &continuer);
		
		
		
	} while (continuer == 'O' || continuer == 'o' || continuer == 'y' || continuer == 'Y');
	
	totalNote = totalNote/somme;
	
	printf("\nLa moyenne et de %.2f\n", totalNote);
	 
}
