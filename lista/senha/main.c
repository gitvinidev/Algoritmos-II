#include <stdio.h>
#include <string.h>

int main()
{
    char senha [10]={"nX4%"};
    char tentativa [10];
    int resultado;

    scanf ("%s", &tentativa[0]);
    resultado= strcmp (senha, tentativa);
    
    if (resultado==0) printf ("Acesso concedido");
      else printf ("Acesso nao concedido");
      
    return 0;
}
