#include <stdio.h>

int main ()
{
	int x, i;
	int ii;
	float p;
	
	
	scanf ("%d", &x);
	ii=0;
	for (i=1; i<=x; i++)
	{
	    ii=ii+1;
		p=i/2.54;
		printf ("%d centimetros = %.2f polegadas\n", ii, p);
	}
	
	return 0;
}