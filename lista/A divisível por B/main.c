#include <stdio.h>

int
main ()
{
  int A, B;

  scanf ("%d %d", &A, &B);

  if (A % B == 0)
  {
    printf ("Eh divisivel");
  }
  else
  {
    printf ("Nao eh divisivel");
  }

  return 0;
}
