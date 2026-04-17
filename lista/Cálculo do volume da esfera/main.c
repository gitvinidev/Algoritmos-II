#include <stdio.h>
#include <math.h>
int main()
{
    float f, voll;
    
    scanf ("%f", &f);
    voll=(4*3.14*(pow(f, 3)))/3;
    printf("%.2f", voll);

    return 0;
}
