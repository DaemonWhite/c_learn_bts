#include <stdio.h>

int main(void)
{
	float note;	//la note entrer par l'utilisateur'
	float nbNote=0; // le nombre de note 
	float resultat=0.0; // le resultat de la moyenne
	char reps='y';	//Reponce da donner
	
	do
	{
	
		printf("Donnez moi une note ?\n");
		scanf("%f", &note);
		
		while (note < 0 || note > 20)
		{
			printf("la valeur est incorecte elle doit êtres 0 et 20 compris\n");	
			scanf("%f", &note);
		}
		nbNote++;
		
		resultat = resultat+note;
		
		printf("voulez vous continuer? o = oui \n");
		scanf(" %c", &reps);	
	
		
	} 
	while( reps=='y' || reps=='Y' || reps=='o' || reps=='O' );
	
	
	resultat = resultat/nbNote;
	
	printf("La moyenne des note est de %.2f \n", resultat);
	 
}
