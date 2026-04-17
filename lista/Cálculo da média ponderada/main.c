#include <stdio.h>

int main()
{
    float k1, k2, k3, mpd;
    
    scanf("%f %f %f", &k1, &k2, &k3);
    
    mpd=((k1*2)+(k2*5)+(k3*7))/(14);
    
    printf ("%.2f", mpd);

    return 0;
}
