#include <stdio.h>

int main()
{
	int codeClient;
	float montant, reduction;
	
	printf("\nDonner le code client : ");
	scanf("%d", &codeClient);
	
	printf("\nDonner le montant du prix : ");
	scanf("%f", &montant);
	
	reduction = montant;
	
	switch (codeClient)
	{
		case 1 : 
			reduction = montant * 0.95;
			printf("\nremise de 5%"); break;
			
		case 4 : 
			reduction = montant * 0.90;
			printf("\nremise de 10%"); break;
			
		case 7 : 
			reduction = montant * 0.80;
			printf("\nremise de 20%"); break;
			
		default : printf("\nAucune remise");
	}
	
	printf("\nLe montant a payer par le client et de %.2f \n", reduction);
}
