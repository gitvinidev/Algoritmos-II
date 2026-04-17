#include <stdio.h>

int main()
{
    int mx, my, c, x, y, a, b;
    
    scanf ("%d %d", &x, &y);
    
    while (mx!=my)
         {
        for (a=1; a<=800; a++)
            {
             mx=x*a;
              
            for (b=1; b<=800; b++)
               {
                my=y*b; 
               }
            }
             
             
         }
         
         printf ("%d %d\n", a, b);
         printf ("%d %d\n", mx, my);

    return 0;
}

