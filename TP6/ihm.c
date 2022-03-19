#include <stdio.h>
#include "application.h"



char menu()
{
	char letterChar;
	printf("\n- V pour la voyelle\n- A pour tout l'alphabet'\n- f pour quitter le programe\n");
	scanf(" %c", &letterChar);
	
	return letterChar;
	
}

void renderVoyelles(char v[])
{
	printf("a : %d\ne : %d\ni : %d\no : %d\nu : %d\ny : %d\n", v[0], v[1], v[2], v[3], v[4], v[5] );
}

void renderLetter(char v[])
{
	for (int i=0; i <= 25; i++ )
	{
		printf("%c : %d\n", 97+i, v[i]);
	}
}

void traitrechoix(char choix)
{
	
	char v[26];
	int maxi=26;
	switch(choix) 
	{
		
		case 'V' :  ;
		case 'v' :  
			printf("Entrer un texte qui ce fini par la touche * puis Entrée : ");
			voyelles(maxi, v); 
			renderVoyelles(v);
		break;
		case 'A' :  ; 
		case 'a' :  
			printf("Entrer un texte qui ce fini par la touche * puis Entrée : ");
			lettre(maxi, v);
			renderLetter(v);
		break;
		case 'F' : 
		case 'f' : printf("fermeture du programe") ; break;	
		
	}
	
}
