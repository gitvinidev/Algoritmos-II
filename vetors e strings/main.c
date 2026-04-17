#include <stdio.h>

int main()
{
    int vetor[10], i;
    char texto[81];
    char texto1[81];
    /*Não é possível considera o espaço. 
    Desta forma, quando o programa detectar
    o espaço, ele termina a leitura.*/
    scanf ("%s", &texto);
    //com essa leitura, é possível ler o espço.
    scanf ("%80[^\n]", &texto1);
    //leitura generica, caso a primeira não funcione:
    scanf ("%[^\n]%*c\n", &texto1);
    
    for (i=0; i<=9; i++)
       {
           scanf ("%d", &vetor[i]);
       }
       
    for (i=0; i<=9; i++)
       {
        printf ("%d; ", vetor[i]);
       }
       printf ("Primeiro termo: %d", vetor[0]);
    return 0;
}
