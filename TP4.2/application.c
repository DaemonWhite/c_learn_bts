int cacule(int cacA, int cacB)
{
	int result;
	
	result = cacA + cacB;
	
	return result;
}

int quotient(int diviseur, int diviser)
{
	
	int result;
	
	result = diviser/diviseur;
	
	return result;
	
}

int reste(int diviseur, int diviser)
{
	
	int result;
	
	result = diviser%diviseur;
	
	return result;
	
}

int max(int a, int b,int c, int d)
{

		int resulte = a;
		resulte = (resulte>b)? resulte :b;
		resulte = (resulte>c)? resulte :c;
		resulte = (resulte>d)? resulte :d;	
		
		return resulte;
		
}

int mini(int a,int b,int c, int d)
{

		int resulte = a;
		resulte = (resulte<b)? resulte :b;
		resulte = (resulte<c)? resulte :c;
		resulte = (resulte<d)? resulte :d;	
		
		return resulte;
}

