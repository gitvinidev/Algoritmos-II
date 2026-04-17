#include <stdio.h>
#include <math.h>

int
main ()
{
  float k, l, m, i1, i2, dl;

  scanf ("%f %f %f", &k, &l, &m);

  dl = pow (l, 2) - (4 * k * m);
  i1 = ((-1 * l) + sqrt (dl)) / (2 * k);
  i2 = ((-1 * l) - sqrt (dl)) / (2 * k);

  printf ("%.2f %.2f %.2f", dl, i1, i2); 
  
  return 0;
}
