#include <stdio.h>
#include <math.h>
int main()
{
    float cop, cad, hpa;
    
    scanf ("%f  %f", &cop, &cad);
    
    hpa=sqrt((pow(cop, 2)+pow(cad, 2)));
    
    printf ("%.2f", hpa);
    
    return 0;
}
