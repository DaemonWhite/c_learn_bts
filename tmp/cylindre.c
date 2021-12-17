#include <stdio.h>

int main(void)
{	
	const float Pi = 3.14159;
	
	float Rayon; 	// Rayon du cylindre
	float Hauteur; // Hauteur du cinlindre
	float Circonf; // Circonférence du cylindre
	float Air;	// Surface du cercle
	
	//Saisie du rayon
	printf("Ce programe calcule la circonférence et la surface d'un cylindre\n");
	printf("Entrer la valeur du rayon ");
	scanf("%f", &Rayon);
	printf("Entrer la valeur de la hauteur");
	scanf("%f", &Hauteur);
	
	//calcul
	Circonf = Pi*Rayon*Rayon*Hauteur;
	Air = Pi*Rayon*Rayon;
	
	// affichage des resulltat
	printf("Circonférence: %f\n Surface %f\n ", Circonf, Air);
	
	
	return 0;
}
