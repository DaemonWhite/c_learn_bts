#include <stdio.h>
#include "partager.h"
#include "ihm.h"
#include "traitement.h"


int main(void)
{
	
	char tabEleve[MAX][21];
	float note[MAX][MAXNOTE];
	float Moy[MAX];
	float moy;
	
	SaisieNom(tabEleve);
	SaisieNote(tabEleve, note);
	
	moy = moyenne(note,Moy);
	
	Afficher(tabEleve, note, moy,Moy);

}
