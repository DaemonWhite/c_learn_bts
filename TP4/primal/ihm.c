#include <stdio.h>
#include "OpeBase.h"

char menu()
{
	char letterChar;
	printf("\n- a pour l'adittion\n- s pour la soustraction\n- m pour la multiplication\n- d pour la division \n- f pour quitter le programe\n");
	scanf(" %c", &letterChar);
	
	return letterChar;
	
}

void resultat(float resul)
{
	printf("Le resultat est : %f\n", resul);
}

float saisieReel(char val)
{
	float dem;
	printf("Saisie le reel %c ", val);
	scanf("%f", &dem);
	
	return dem;
}

void traitrechoix(char choix)
{
	float demA;
	float demB;
	float reponce;
	
	switch(choix) 
	{
		case 'a' : 
			
			demA =saisieReel('a');
			demB = saisieReel('b');
			reponce = addition(demA, demB);
			resultat(reponce);
			 ; break;
		case 's' : 
			demA =saisieReel('a');
			demB = saisieReel('b');
			reponce = soustraction(demA, demB);
			resultat(reponce);
			; break;
		case 'm' : 
			demA =saisieReel('a');
			demB = saisieReel('b');
			reponce = multi(demA, demB);
			resultat(reponce); break;
		case 'd' :
		
			demA =saisieReel('a');
			demB = saisieReel('b');
			if (demB == 0)
			{
				reponce = div(demA, demB);
				resultat(reponce);
			}
			else 
			{
				printf("Imposible de diviser par 0");
			} break;	
			
		case 'f' : printf("fermeture du prpgrame\n"); break;
		default : printf("La lettre saisie est incorecte");
	}
	
}
