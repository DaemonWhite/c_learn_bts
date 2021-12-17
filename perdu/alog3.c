#include <stdio.h>

int main(void)
{
	
	float demA;
	float demB;
	float demC;
	float demD;
	
	float max;
	float min;
	
	printf("Donner la valeur de A\n");
	scanf("%f", &demA);
	
	printf("Donner la valeur de B\n");
	scanf("%f", &demB);
	
	printf("Donner la valeur de C\n");
	scanf("%f", &demC);
	
	printf("Donner la valeur de D\n");
	scanf("%f", &demD);
	
	max = demA;
	min = demA;
	
	max = (max>demB)? max :demB;
	max = (max>demC)? max :demC;
	max = (max>demD)? max :demD;
	
	min = (min<demB)? min :demB;
	min = (min<demC)? min :demC;
	min = (min<demD)? min :demD;
	
	printf("La valeur la plus grande est %f et la valeur minimum %f \n", max, min);
	
	
}
