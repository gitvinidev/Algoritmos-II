#include <stdio.h>
#include <math.h>

double Distancia(int x1, int x2, int y1, int y2){
    double Resultado;
    int dx, dy;
    
    dx=x2-x1;
    dy=y2-y1;
    Resultado= sqrt (pow (dx, 2)+pow (dy, 2));
    return (Resultado);
}


int main()
{
     typedef struct c{
         int x, y;
         float distancia;
     } COORDENADAS;
     
     COORDENADAS listaCoordenadas [10];
     
     int cont = 0;
     
     FILE *arquivo;
     
     arquivo= fopen("Teste.txt", "r");
     
    while(fscanf(arquivo,"%d %d", &listaCoordenadas[cont].x, &listaCoordenadas[cont].y)!= EOF)
    {
        listaCoordenadas[cont].distancia=0;
        cont++;
    }
    
    for (int i=0; i<10; i++){
            printf("%d %d \n", listaCoordenadas[i].x, listaCoordenadas[i].y);
    }
    
    for(int g=0; g<10; g++){
		
		for(int h=0; h<10; h++){
			
			listaCoordenadas[g].distancia += Distancia (listaCoordenadas[h].x, listaCoordenadas[g].x, listaCoordenadas[h].y, listaCoordenadas[g].y);

		}
        
    }
    
    
    float menor=listaCoordenadas[0].distancia;
    int s;
    
    for (int m=1; m<10; m++){
        if (listaCoordenadas[m].distancia<menor){
            s=m;
            menor=listaCoordenadas[m].distancia;
        }
        
    }
    
    printf ("%d %d", listaCoordenadas[s].x, listaCoordenadas[s].y);
    
    
    fclose (arquivo);
    return 0;
}
