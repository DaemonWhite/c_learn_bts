#include <stdio.h>

int main(void)
{
	const int MAXi = 25;
	const int ASCIIstart = 97;
	
	int v[26]; /* Tablau de 6 entier à contenir les fréquences des 6 boyelles */
	char c;
	int i; /*compteurt de boucle*/
	int decalage = 97;
	
	//mise a zero du tablaux
	
	for (i=0; i <= MAXi; i++ )
	{
		v[i] = 0;
	}
	
	printf("Le programme compte les voyelle dans ce que vous avez saisi.\n");		
	printf("Entrer un texte Fini par la touche * puis Entrée :\n");
	
	do
	{
		c=getchar(); /*saisi du caractère en tête de la file après l'apui sur entré'*/
		
		i= c - ASCIIstart;
		v[i]++;
		
	}while(c!='*');
	
	printf("fréquence de la voyelle: \n\n");
	
	for (i=0; i <= MAXi; i++ )
	{
		printf("%c : %d\n", ASCIIstart+i, v[i]);
	}
	
	return 0;
}
