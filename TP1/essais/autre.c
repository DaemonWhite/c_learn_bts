#include <stdio.h>

int main(void)
{
	
	int x;
	int y;
	int z;
	
	int tampon;
	
	printf("Donner la valeur de x: ");
	scanf("%d", &x);
	printf("Donner la valeur de y: ");
	scanf("%d", &y);
	printf("Donner la valeur de z: ");
	scanf("%d", &z);
	
	tampon = x;
	x=z;
	z=y;
	
	y=tampon;
	
	printf("les valeurs sont maintenatn inverser x=%d y=%d z=%d \n", x,y,z );
	
	 
}
