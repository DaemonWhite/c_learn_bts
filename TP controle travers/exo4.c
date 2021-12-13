#include <stdio.h>

int main(void)
{
	char continuer; // Defini quant l'utilisateur à fini d'entre des valleurs
	int somme = 0; // Nombe de note dans la variable
	float notes; 	//note rentrer par l'utilisateur'
	float totalNote;

	printf("\nDonner le nombre de note a entrer : ");
	scanf("%d", &somme);

	for (int i = 0; i < somme; i++)
	{
		
		printf("\nEntre une valeur : ");
		scanf("%f", &notes);
		
		
		totalNote += notes;
		
		
	} 
	
	totalNote = totalNote/somme;
	
	printf("La moyenne et de %.2f\n", totalNote);
	 
}
