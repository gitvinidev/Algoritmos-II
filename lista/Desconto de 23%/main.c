#include <stdio.h>
#include <math.h>
int main()
{
    float di, ds, rf;
    
    scanf ("%f", &di);
    
    ds=(di*0.23);
    rf=di-ds;
    
    printf ("%.2f", rf);
    
    return 0;
}
