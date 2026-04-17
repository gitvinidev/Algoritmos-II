#include <stdio.h>

int main()
{
    int c;
    float f;
    
    for (c=0, f=32.00; c<=100 && f<212.80; c++, f+=1.80)
       {
           printf ("%d C = %.2f F\n", c, f);
       }

    return 0;
}
