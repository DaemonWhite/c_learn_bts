#include <stdio.h>

int main()
{
	int R,A,B;
	
	scanf("%d", &A);
	scanf("%d", &B);
	
	R = A%B;
	
	while (R != 0)
	{
		R = A%B;
		A=B;
		B=R;
	}
	
	printf("%d", B);
	
}
