#include <stdio.h>

int main(void)
{	
	const double Pi = 3.14159;
	
	double Rayon; 	// Rayon du cercle
	double Circonf; // Circonférence du cercle
	double Air;	// Surface du cercle
	
	//Saisie du rayon
	printf("Ce programe calcule la circonférence et la surface d'un cercle\n");
	printf("Entrer la valeur du rayon ");
	scanf("%lf", &Rayon);
	
	//calcul
	Circonf = 2*Pi*Rayon;
	Air = Pi*Rayon*Rayon;
	
	// affichage des resulltat
	printf("Circonférence: %.2f\n Surface %.2f\n ", Circonf, Air);
	
	
	return 0;
}
