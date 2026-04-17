#include <stdio.h>
#include <math.h>
int main()
{
    int H, c, q;
    
    scanf ("%d", &H);
    
    if (H<=0) printf ("Numero invalido");
       else if (H>0)
                {
                    for (c=1; c<=H; c++)
                        {
                            q=pow(c, 2);
                            printf("O quadrado de %d eh %d\n", c, q);
                        }
                }

    return 0;
}
