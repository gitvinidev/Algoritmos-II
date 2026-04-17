#include <stdio.h>

int main()
{
    float N1, N2, R;
    char Op;
    
    scanf ("%f %s %f", &N1, &Op, &N2);
    
          if (Op!='+' && Op!='-' && Op!='*' && Op!='/')  printf ("Operacao Invalida");                                     
            else if (Op=='+') {R=N1+N2; printf("%.2f", R);}
                 else if (Op=='-') {R=N1-N2; printf("%.2f", R);}
                      else if (Op=='*') {R=N1*N2; printf("%.2f", R);}
                           else if (Op=='/' && N2==0) printf ("Divisao por zero");
						        else if (Op=='/') {R=N1/N2; printf("%.2f", R);}
						        
    return 0;
}



