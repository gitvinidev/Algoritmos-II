#include <stdio.h>
#include <math.h>
int main()
{
    float f, g, vlc;
    
    scanf ("%f %f", &f, &g);
    
    vlc=3.14*pow(f, 2)*g;
    
    printf("%.2f", vlc);

    return 0;
}
