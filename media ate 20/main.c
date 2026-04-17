#include <stdio.h>

int main()
{
    int numeros[999],soma=0, i;
    float media, contador=-1, a=2.5;
    do
    {
    scanf ("%d", &numeros[i]);
    soma+=numeros[i];
    contador++;
    i++;
    }
    while (numeros[i]<=20);
    
    soma=soma-numeros[i-1];
    soma=soma+2;
    
    if (contador==0){
        printf ("Divisao por zero");
    }
    else {
          media=soma/contador;
          printf ("%0.2f", media);}
    
    return(0);
}