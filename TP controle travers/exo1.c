#include <stdio.h>

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
	
}
