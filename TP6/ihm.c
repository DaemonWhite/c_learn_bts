#include <stdio.h>
#include "aplication.h"
#include "partage.h"

char menu()
{
	char letterChar;
	printf("\n- V pour la voyelle\n- A pour tout l'alphabet'\n- f pour quitter le programe\n");
	scanf(" %c", &letterChar);
	
	return letterChar;
	
}


void traitrechoix(char choix)
{
	const int MAX_VOYELLE
	const int MAX_CHARACTER
	
	switch(choix) 
	{
		
		case 'V' :  ;
		case 'v' :  voyelle(choix, max); break;
		case 'A' : v[2]++ ; 
		case 'a' : v[3]++ ; break;
		case 'F' : 
		case 'f' : printf("fermeture du programe") ; break;	
		
	}
	
}
