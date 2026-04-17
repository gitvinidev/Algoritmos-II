#include <stdio.h>
#include "imprime.h"

int main()
{
    FILE *arquivoI;
    FILE *arquivoII;
    FILE *arquivoIII;
    
    arquivoI= fopen ("arquivo1.txt", "r");
    arquivoII= fopen ("arquivo2.txt", "r");
    arquivoIII= fopen ("arquivo3.txt", "w");
    
    
    char textoI [40];
    char textoII [40];
    
    
    
    while(fscanf(arquivoI,"%s", textoI) != EOF)
    {
        fscanf(arquivoII, "%s", textoII);
        
        fprintf (arquivoIII,"%s\n", textoI);
        fprintf (arquivoIII,"%s\n", textoII);
    }
    
    
    
  
        // fprintf(arquivoIII, ("%s\n", textoI));
        // fprintf(arquivoIII, ("%s", textoII));
         
         
    
       
    
    
   
    
    
    
    fclose (arquivoI);
    fclose (arquivoII);
    fclose (arquivoIII);
    
    imprime();
    return 0;
}

