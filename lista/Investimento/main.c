#include <stdio.h>

int main()
{
    const float poup=0.03, rf=0.04;
    
    int o;
    
    float D;
    
    scanf ("%d %f", &o, &D);
    
    if (!(o==1 || o==2)) printf ("Tipo invalido");
      else if (o==1 || o==2)
      {
    switch (o)
         {
          case 1:
            D=D+(poup*D);
            printf ("%.2f", D);
            break;
          case 2:
            D=D+(rf*D);
            printf ("%.2f", D);
            break;
         }
      }
    return 0;
}
