typedef struct 
{
	short heure;
	short minute;
}temps;

typedef struct
{
	short jour;
	char mois[10];
	short anne;
}date;

typedef struct
{
	char nom[20];
	date queljour;
	temps quelheure;
}rdv;

rdv Saisie();
void Affichage();