#include <stdio.h>

int main(void)
{
	int x;
	
	printf("Donner l'age de l'enfant : ");
	scanf("%d", &x);
	
	printf("\nVotre enfant est en categorie ");
	
	switch(x)
	{
		case 7 : 
		case 8 : printf("poussin\n"); break;
		
		case 9 : 
		case 10 : printf("pupille\n"); break;
		
		case 11 :
		case 12 : printf("Benjamin\n"); break;
		
		case 13 : 
		case 14 : printf("Minime\n"); break;
		
		case 15 : 
		case 16 : printf("Cadet\n"); break;
		
		default : printf("Dans une catégorie inconu\n");
	}
	
	 
}
