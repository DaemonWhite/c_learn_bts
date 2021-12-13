#include <stdio.h>

float aire(float);

int main(void)
{

	float rayon;
	float volume;
	
	
	printf("Donner le rayon du cercle\n");
	scanf("%f", &rayon);
	
	volume = aire(rayon);
	
	printf("Le rayon du cercle est de : %f \n", volume);
	 
}

float aire(float calc)
{
	float result;
	const float pi = 3.14159265359;
	result = calc*calc*pi;
	
	return result;
	 
	
}
