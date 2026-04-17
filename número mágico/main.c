#include <stdio.h>
#include <stdlib.h>

void main (void)
{
    int magic;
    int guess;
    
    magic=rand();
    
    printf ("adivinhe o número mágico:\n");
    scanf ("%d", &guess);
    
    if (guess==magic) printf ("**CERTO**\n");
    else printf ("ERRADO!\n");
    
  
    
}