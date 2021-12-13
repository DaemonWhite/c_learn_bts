#include <stdio.h>
#include "traitement.h"
#include "partager.h"

int main(void)
{
	
	
	float note[MAX]={5,10,15};
	float moy;
	
	
	
	
	//for (i=0; i < MAX; i++)
	//{
		
	//	tabEleve[i] = SaisieNom()
		
	//	printf("Donner la note de %s est de : ", tabEleve[i]);
	//}
	
	moy = moyenne(note);
	
	printf("La moyenne de la classe est de %.2f \n", moy);

}
