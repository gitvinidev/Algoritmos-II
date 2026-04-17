#include <stdio.h>
#include <math.h>
int main ()
{
    typedef struct dist
    {
        float Distancia1;
        float Distancia2;
        float Distancia3;
        float Distancia4;
        float Distancia5;
    } DISTANCIAS;
    
    DISTANCIAS ListaDistancias[5];
    
    typedef struct c
    {
        int x, y;
    } COORDENADA;
    
   COORDENADA ListaCoordenadas[5];
    
    FILE *pteste;
    pteste=fopen ("teste.txt", "r");
    
    int cont=0;
    
    while (fscanf(pteste,"%d %d", &ListaCoordenadas[cont].x, &ListaCoordenadas[cont].y)!= EOF)
      {
        cont++;
      }
      
      printf ("%d %d", ListaCoordenadas[3].x, ListaCoordenadas[3].y);
      
  
  
      
      
      
    fclose(pteste);
  
    return 0;
}

