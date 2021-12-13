#include <stdio.h>
#include "ihm.h"
#include "traitement.h"
#include "partager.h"

int main(void)
{
	
	char tabEleve[MAX][21];
	float note[MAX];
	float moy;
	
	SaisieNom(tabEleve);
	SaisieNote(tabEleve, note);
	
	moy = moyenne(note);
	
	Afficher(tabEleve, note, moy);

}
