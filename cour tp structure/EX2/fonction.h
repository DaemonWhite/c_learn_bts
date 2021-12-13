typedef struct
{
	char nom[30];
	float note;	
} eleve;

eleve Saisie();

void Affichage(eleve Eleve);
float Traitement(eleve Eleve[]);

#define NOMBRE 3