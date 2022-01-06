#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{	
	srand(time(0));

	int gagne;	// Nombre entier binaire généré aléatoirement
	int montant; 	//Représente le monant gagné au carte
	
	gagne =  rand() % 2;
	
	printf("%d \n", gagne);
	
	if (gagne == 0)
	{
		printf("Vous avez perdu\n");
		printf("Ne dite rien à votre femme\n");
	} 
	else
	{
		printf("Vous avez gagné\n");
		printf("Vous devez faire un cadeau à votre femme\n");
		
		montant =  rand() % 501;
		
		if ( montant > 100)
		{
		
			printf("Ce sera un collier\n");
		
		} 
		else 
		{
			printf("Ce seraun bouquet de fleur\n");
		}
		 
	}
	
	
	return 0;
}
