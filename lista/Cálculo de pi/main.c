#include <stdio.h>

int main()
{
    int termos, i;
    float pi, termoii, denominador;
    
    scanf ("%d", &termos);
    
    pi=4;
    denominador=1.0;
    
    if (termos!=0)
    {
    for (i=2; i<=termos; i++)
       {
           denominador+=2;
           termoii=4/denominador;
           termoii=termoii*-1;
           pi=pi+termoii;
           pi=pi*-1;
       }
    pi=pi*-1;
    }
    else {pi=0*-1;}
    
    printf ("%.5f", pi);
    return 0;
}
