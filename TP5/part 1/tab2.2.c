#include <stdio.h>
#define MAX 3

float moyenne(float note[]);

int main(void)
{
	
	char tabEleve[MAX][21];
	float note[MAX];
	float moy;
	
	int i;
	
	
	
	for (i=0; i < MAX; i++)
	{
		printf("Donner le nom de l'élève %d : ", i+1);
		scanf("%s", tabEleve[i]);
		
		printf("Donner la note de %s est de : ", tabEleve[i]);
		scanf("%f", &note[i]);
		
	}
	
	moy = moyenne(note);
	
	printf("La moyenne de la classe est de %.2f \n", moy);

}

float moyenne(float note[])
{
	float somme = 0;
	float result;
	int i;
	
	for (i=0; i < MAX; i++)
	{
		somme += note[i];
	}
	
	result = somme/MAX;
	
	return result;

}
