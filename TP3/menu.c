#include <stdio.h>

float testNumberMax(float);
float testNumberMin(float);

int main(void)
{
	/*----- Variable de i -----*/
	float invReel;
	
	/*----- Variable de d -----*/
	int nbEntierA;
	int nbEntierB;
	
	int reste;
	
	int quot;
	
	
	/*----- Variable de m -----*/
	float demA;
	float demB;
	float demC;
	float demD;
	
	float max;
	float min;
	
	char demande;// variabele demande switch
	
	do
	{
		printf("\ntaper la lettre pour choisir le calcule à faire \ni : inverse du nombre reel\nd : reste de 2 nombre entirer\nm : La valeur la plus grande\nf : pour quiter\nentrer la valeur : ");
		scanf(" %c", &demande);
		
		switch (demande)
		{ 
		
			// Donne l'inverse'
			case 'i' :
				
				printf("\nDonner le nombres à inverser : ");
				scanf("%f", &invReel);
				
				invReel = 1/invReel;
				
				printf("La valuer inverser et de %f\n", invReel);
				
			
				
			break;
		
			case 'd' : 
				
				printf("Donner la valeur du premier nombre entier");
				scanf("%d", &nbEntierA);
				
				printf("Donner la valeur du deuxième nombre entier");
				scanf("%d", &nbEntierB);
				
				reste = nbEntierA % nbEntierB;
				quot = nbEntierA / nbEntierB;
				
				printf("Le quotient et de : %d et le reste et de %d", quot, reste);
				
				
			break;
			
			case 'm' : 
		
				printf("Donner la valeur de A\n");
				scanf("%f", &demA);
	
				printf("Donner la valeur de B\n");
				scanf("%f", &demB);
	
				printf("Donner la valeur de C\n");
				scanf("%f", &demC);
	
				printf("Donner la valeur de D\n");
				scanf("%f", &demD);
	
				max = testNumberMax(demA, demB, demC, demD);
				min = testNumberMin(demA, demB, demC, demD);
	
				printf("La valeur la plus grande est %.2f et la valeur minimum %.2f \n", max, min);
			break;
			
			case 'f' :  break;
		
			default : printf("\nValeur inconue\n");
		}
	}
	while(demande != 'f');
	
	
	return 0;
	
}

float testNumberMax(float a,b,c,d)
{

		int result = a;
		resulte = (resulte>b)? resulte :b;
		resulte = (resulte>c)? resulte :c;
		resulte = (resulte>d)? resulte :d;	
		
}
float testNumberMin(float a,b,c,d)
{

		int result = a;
		resulte = (result<b)? resulte :b;
		resulte = (resulte<c)? resulte :c;
		resulte = (resulte<d)? resulte :d;	

}
