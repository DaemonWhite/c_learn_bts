#include <stdio.h>
#include <math.h>

int main(void)
{
	
	float a;		//1er coefficient
	float b;		//2eme coefficient
	float c;		//3eme coefficient
	float discri;		//discriminant
	float X1;		//1 ère racine
	float X2;		//2éme racine
	
	printf("Calcul les racines d'une équation du scond degré\n");
	
	printf("Entrer le coefficient a : ");
	scanf("%f", &a);
	
	printf("Entrer le coefficient b : ");
	scanf("%f", &b);
	
	printf("Entrer le coefficient c : ");
	scanf("%f", &c);
	
	discri = pow(b,2)-(4*a*c);
	
	if (discri >=0)
	{
		X1 = (-b-sqrt(discri))/(2*a);
		X2 = (-b+sqrt(discri))/(2*a);
		
		if (X1 == X2)
		{
			printf("Racines double x=%f\n", X1);
		}
		else
		{
			printf("X1=%f et X2=%f\n", X1, X2);
		}
		
	}
	else
	{
		printf("il n'y a aucune solution\n");
	}
	 
}
