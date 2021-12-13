#include <stdio.h>

int main(void)
{
	float 	nbNote;	// Nombre de note
	float 	note;	//la note entrer par l'utilisateur'
	float 	resultat=0.0; // le resultat de la moyenne
	
	printf("Combien de note voulez vous entrez ?\n");
	scanf("%f", &nbNote);
	
	for (int i=0; i < nbNote; i++)
	{
		printf("Donnez moi une note ?\n");
		scanf("%f", &note);
		
		while (note < 0 || note > 20)
		{
			printf("la valeur est incorecte elle doit êtres 0 et 20 compris\n");	
			scanf("%f", &note);
		} 
		
		resultat = resultat+note;
		
	}
	
	resultat = resultat/nbNote;
	
	printf("La moyenne des note est de %.2f \n", resultat);
	 
}
