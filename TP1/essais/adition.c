#include <stdio.h>

int main(void)
{
	int x; // Premier Nombre
	int y; // Deuxième Nombre
	
	printf("Entrer le premier nombre\n");
	scanf("%d", &x);
	printf("Entre le deuxième nombre\n");
	scanf("%d", &y);
	printf("%d + %d = %d \n",x,y, x+y); 
	
	return 0;
}
