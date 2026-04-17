#include <stdio.h>

int main()
{
    float dt, vmed, esp;
    
    scanf ("%f %f", &dt, &vmed);
    
    esp=dt*vmed;
    printf ("%.2f km", esp);

    return 0;
}
