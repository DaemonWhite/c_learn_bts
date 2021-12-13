int puissance(int nombre, int exposant)
{
	int result;
	
	result = nombre;
	
	for (int i=1; exposant > i; i++)
	{
		result = result * nombre;
	}
	
	return result;
	
}

int suitearythm(int premiernombre, int raison, int jusqu)
{
	int result;
	
	result = 0;
	
	for (int i=0; jusqu > i; i++)
	{
		
		result += premiernombre + raison*i;
	}
	
	return result;
	
}

int suitegeom(int premiernombre, int raison, int jusqu)
{
	int result;
	
	result = premiernombre;
	
	for (int i=1; jusqu > i; i++)
	{
		premiernombre = premiernombre * raison;
		result = result + premiernombre;

	}
	
	return result;
}
