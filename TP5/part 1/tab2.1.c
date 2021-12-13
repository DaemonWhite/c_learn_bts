#include <stdio.h>



int main(void)
{
	const int maxEleve = 3;
	
	char tabEleve[maxEleve][21];
	float note[maxEleve];
	float somme = 0;
	float result;
	
	int i;
	
	
	
	for (i=0; i < maxEleve; i++)
	{
		printf("Donner le nom de l'élève %d : ", i+1);
		scanf("%s", tabEleve[i]);
		
		printf("Donner la note de %s est de : ", tabEleve[i]);
		scanf("%f", &note[i]);
		
		somme += note[i];
		
	}
	
	result = somme/maxEleve;
	
	printf("La moyenne de la classe est de %.2f \n", result);

}


