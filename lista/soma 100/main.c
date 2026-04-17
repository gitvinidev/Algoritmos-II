#include <stdio.h>

int main()
{
    int D[9999], j; 
    float soma=0, P;
    
    while (soma<=100)
         {
            scanf ("%d", &D[j]); 
            soma=soma+D[j];
            j++;
         }
         
     P=D[0];
     if (D[0]==0) printf ("%.2f", soma/10.0);
         else if (D[0]!=0) printf ("%.2f", soma/P);
         


    return 0;
    
}

