#include <stdio.h>

int main(void)
{
	const int maxEleve = 12;
	
	char tabEleve[maxEleve][21];
	int i;
	
	for (i=0; i < maxEleve; i++)
	{
		printf("Donner le nom de l'élève %d : ", i+1);
		scanf("%s", tabEleve[i]);
		
	}
	
	for (i=0; i < maxEleve; i++)
	{
		printf("L'elèves %d est :'%s\n", i+1, tabEleve[i]);
		
	}

}


