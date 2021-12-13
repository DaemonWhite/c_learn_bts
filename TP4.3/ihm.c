#include <stdio.h>
#include "calcul.h"

char menu()
{
	char choix;
	
	printf("\n'p' s'il veut calculer la puissance d'un nombre'\n'a' s''il veut obtenir la somme arithmétique\n'g' s'il veut obtenir la somme des termes d'une suite géométrique'\n'f' fermeture du programe\n ");
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
		case 'p' : 
			optionA = demande("L'a valeur");
			optionB = demande("L'exposant");
			
			resultA = puissance(optionA, optionB); 
			
			printf("Le resultat est ; %d", resultA ); break;
		case 'a' : 
			optionA = demande("le Premier Nombre");
			optionB = demande("la raison");
			optionC = demande("le nombre d'entier voulue'");
			
			resultA = suitearythm(optionA, optionB, optionC);
			 
			printf("La suite arythmetique et de : %d", resultA ); break;
		case 'g' : 
			optionA = demande("le Premier Nombre");
			optionB = demande("la raison");
			optionC = demande("le nombre d'entier voulue'");
			
			resultA = suitegeom(optionA, optionB, optionC);
			 
			printf("La suite gemetrique et de : %d", resultA ); break;
			 
			printf("Le nombre le plus grand est %d et le plus petit %d", resultA, resultB ); break;
		case 'f' : printf("Fermeture du programe\n"); break;
		default : printf("\nValeur inconue");
	}
	
}
