#include <stdio.h>

int main()
{
    int F, G, H;
    float medi;
    
    scanf ("%d %d %d", &F, &G, &H);
    
    if (F==G && G==H)
      {
          if (F%2==0) printf ("PAR");
            else printf ("IMPAR");

      }
        else if (!(F==G && G==H))
               {
                   medi=(F+G+H)/3.0;
                   printf ("%.2f", medi);
               }
    return 0;
}
