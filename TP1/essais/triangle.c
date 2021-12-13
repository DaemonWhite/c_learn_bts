#include <stdio.h>

int main(void)
{	
	const float demi = 0.5;
	
	float Base; 	// Rayon du cylindre
	float Hauteur; // Hauteur du cinlindre
	float Air;	// Surface du cercle
	
	//Saisie du rayon
	printf("Ce programe calcule la l'aire d'un triangle\n");
	printf("Entrer la valeur de la base ");
	scanf("%f", &Base);
	printf("Entrer la valeur de la hauteur ");
	scanf("%f", &Hauteur);
	
	//calcul
	Air = demi*Base*Hauteur;
	
	// affichage des resulltat
	printf(" Surface %f\n", Air);
	
	
	return 0;
}
