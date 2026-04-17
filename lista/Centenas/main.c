#include <stdio.h>

int main()
{
    int Numero, resto;
    
    scanf("%d", &Numero);
 
    resto=Numero/100;
    
        if (Numero<100 || Numero>999) printf ("Numero Invalido");
        else
        {
        if (resto%2==0) printf ("PAR");
        else printf ("IMPAR");
        }
        

return 0;
}



