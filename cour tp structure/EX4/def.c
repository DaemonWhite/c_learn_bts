#include <stdio.h>
#include "def.h"

int main(void)
{
	rdv transfer;
	transfer = Saisie();
	Affichage(&transfer);



	return 0;
}

rdv Saisie()
{
	rdv RendezVous;

	printf("Le nom du rendez vous : ");
	scanf("%s", RendezVous.nom);

	printf("La date du rendez vous j mois an : ");
	scanf("%hd %s %hd", &RendezVous.queljour.jour, RendezVous.queljour.mois,&RendezVous.queljour.anne);

	printf("L'heure' du rendez vous format 07:10 : ");
	scanf("%hd:%hd", &RendezVous.quelheure.heure, &RendezVous.quelheure.minute);

	//printf(" %hd\n");

	return RendezVous;
}


void Affichage(rdv RendezVous)
{
	printf("\n%s \nRendez vous le %hd %s %hd à %hdH%hdm.\n", 
		RendezVous.nom,
		RendezVous.queljour.jour,
		RendezVous.queljour.mois,
		RendezVous.queljour.anne,
		RendezVous.quelheure.heure,
		RendezVous.quelheure.minute );
}
