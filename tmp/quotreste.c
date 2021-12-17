#include <stdio.h>

int main(void)
{	
	int dividende;	// Nombre à diviser
	int diviseur;	//Nobre qui divise
	int quotient;	//Resultat de la division	
	int reste;	//Reste de la division
	
	
	printf("Saisir le dividende puis le divisuer : ");
	
	scanf("%d", &dividende);
	scanf("%d", &diviseur);
	
	quotient = dividende/diviseur;
	reste = dividende%diviseur;
	
	printf("le qutiontient est %d et le reste est %d", quotient, reste);
	
	
		
}
