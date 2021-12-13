#include <stdio.h>
int carcube(int Nde);
int main()
{
	int N,I,X,Y;
	
	scanf("%d", &N);
	
	for (I=1; I <= N; I++)
	{
		X = I*I;
		Y = X*I;
		printf("%d,%d,%d,%d\n", N,I,X,Y);
		
	}
	
	carcube(N);
	
}

int carcube(int Nde)
{
	int carre;
	int cube;
	
	carre = Nde * Nde;
	cube = carre * Nde;
	
	printf("Le carré de N est  : %d\net soncube et de : %d\n", carre,cube);

}
