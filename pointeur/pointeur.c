#include <stdio.h>

void SomProdTab(int tab[], int *addition, int *multipl);
void demande(int tab[]);

int main(void)
{
	int addition ;
	int multipl ;
	int tab[10] ;

	demande(tab);
	SomProdTab(tab, &addition, &multipl);
	
	printf("addition : %d\nmultipl : %d\n", addition, multipl);
}

void demande(int * tab)
{
	int i;

	for (i=0; i<10; i++)
	{
		printf("\nDonner la valeur %d : ", tab[i]);
		scanf("%d", &tab[i]);
	}

}

void SomProdTab(int tab[], int *addition, int *multipl)
{
	int i;
	*addition=0;
	*multipl=1;
	for (i=0; i<10; i++)
	{
		*addition += tab[i];
		*multipl = *multipl * tab[i];
	}
}
