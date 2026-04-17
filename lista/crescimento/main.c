#include <stdio.h>

int main()
{
  float at1, cs1, at2, cs2;
  int ans=0;
  
  scanf("%f %f %f %f", &at1, &cs1, &at2, &cs2);
  
  if ((at1>at2 && cs1>cs2) || (at1<at2 && cs1<cs2)) printf ("dados invalidos");
     else if (at1<at2 && cs1>cs2)
            {
             do 
                 {
                     ans++; 
                     at1=at1+cs1; 
                     at2=at2+cs2;    
                 }
             while (at1<at2);
             printf ("%d", ans);
            }
             else if (at1>at2 && cs1<cs2)
                     {
                     do 
                         {
                             ans++; 
                             at1=at1+cs1; 
                             at2=at2+cs2;    
                         }
                     while (at2<at1); 
                     }
                  
        
       
        
        
    return 0;
}
