#include <stdio.h>

int main(void)
{
	float prix;		//prix d'un article
	float somme =0;		//somme due par un client
	char rep;		//Reponce ('o' ou 'n') du client
	float montant=0;		//Montant donné par le client
	float monnaie;		//Somme a rendre au clien
	int pEmonnaie;		//Partie entière de la somme a rendre
	
	int centime=0;		//Nombre de centime à rendre
	int billet20=0;		//Nombre de billet de 20 a rendre
	int billet10=0;		//Nombre de billet de 10 a rendre
	int billet5=0;		//Nombre de billet de 5 a rendre
	int piece1=0;		//Nombre de piece de a rendre
	
	printf("Mettez le prix de l'artcile");
	
	do
	{ 
		
		printf("\nDonner moi le montant de l'article : ");
		scanf("%f", &somme);
		
		somme = somme + prix;
		
		printf("Avez vous d'autre article : ");
		scanf(" %c", &rep);
		
		
	
	} while( rep=='o' || rep=='O' || rep=='y' || rep=='Y' );
	
	printf("Combien vous me donez : ");
	scanf("%f", &montant);
	
	pEmonnaie = somme - montant;
	
	centime = ( monnaie - pEmonnaie )/100;
	
	

	billet20 = pEmonnaie/20;
	billet20 = pEmonnaie%20;
	
	billet10 = pEmonnaie/10;
	billet10 = pEmonnaie%10;
	
	billet5 = pEmonnaie/5;
	billet5 = pEmonnaie%5;
	
	piece1 = pEmonnaie;
	
	printf("Rendre %d billets de 20€\nRendre %d billets de 10€\nRendre %d billets de 5€\nRendre %d piece de 1 €\n centime %2f\n", billet20, billet10, billet5, piece1, centime);
	
	
}
