#include <stdio.h>

int main()
{
    float M, N, O, cont1, cont2;
    
    scanf ("%f %f %f", &M, &N, &O);
    
    cont1=3*(M+N)/(M*O)-O+N;
    cont2=M*N*O;
    
    if (cont1>cont2) printf("MAIOR");
       else if (cont1<=cont2) printf("MENOR OU IGUAL");

    return 0;
}
