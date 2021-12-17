#include <stdio.h>
#include "application.h"

char menu()
{
	char choix;
	
	printf("\n'i' pour calculer les nombres\n'd' le qutient et le reste des nombres entier\n'm' si il veut optenir le maximum et minimum\n'f' fermeture du programe\n ");
	scanf(" %c", &choix);

	return choix;
	
}

char demande(char * dem)
{
	int result;
	printf("Donnez %s : ", dem);
	scanf("%d", &result);
	
	return result;
}

void traitechoix(char choix)
{

	int optionA;
	int optionB;
	int optionC;
	int optionD;
	
	int resultA;
	int resultB;
	
	switch (choix)
	{
		case 'i' : 
			optionA = demande("La Première valeur ");
			optionB = demande("La Seconde valeur ");
			
			resultA = cacule(optionA, optionB); 
			
			printf("Le resultat est ; %d", resultA ); break;
		case 'd' : 
			optionA = demande("le diviseur ");
			optionB = demande("le dividende ");
			
			resultA = quotient(optionA, optionB);
			resultB = reste(optionA, optionB);
			 
			printf("Le resultat est du quotient est %d et le reste est %d", resultA, resultB ); break;
		case 'm' : 
			optionA = demande("le premier Nombre ");
			optionB = demande("le second Nombre ");
			optionC = demande("le troisiéme Nombre ");
			optionD = demande("le quatrieme Nomnre ");
			
			resultA = max(optionA, optionB, optionC, optionD);
			resultB = mini(optionA, optionB, optionC, optionD);
			 
			printf("Le nombre le plus grand est %d et le plus petit %d", resultA, resultB ); break;
		case 'f' : printf("Fermeture du programe"); break;
		default : printf("Valeur inconue");
	}
	
}
