#include <stdio.h>

int main()
{
    float r0, p, h, rf;
    
    scanf ("%f %f %f", &r0, &p, &h);
    
    rf=r0+(p*h);
    
    printf ("%.2f", rf);

    return 0;
}
