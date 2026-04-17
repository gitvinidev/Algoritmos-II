#include <stdio.h>

int main()
{
    int X, Y, S;
    scanf ("%d %d %d", &X, &Y, &S);
    
    if (X==Y && Y==S) printf("Iguais");
       else if (!(X==Y && Y==S))
               {
                   if (X<Y && X<S && Y<S) printf ("%d %d %d", X, Y, S);
                      else if (X<Y && X<S && S<Y) printf ("%d %d %d", X, S, Y);
                           else if (Y<X && Y<S && X<S) printf ("%d %d %d", Y, X, S);
                                else if (Y<X && Y<S && S<X) printf ("%d %d %d", Y, S, X);
                                     else if (S<X && S<Y && X<Y) printf ("%d %d %d", S, X, Y);
                                          else if (S<X && S<Y && Y<X) printf ("%d %d %d", S, Y, X);
                                               else if (X==Y && Y<S) printf ("%d %d %d", X, Y, S);
                                                    else if (X==Y && S<Y) printf ("%d %d %d", S, X, Y);
                                                         else if (X==S && S<Y) printf ("%d %d %d", X, S, Y);
                                                              else if (X==S && Y<S) printf ("%d %d %d", Y, X, S);
                                                                   else if (Y==S && S<X) printf ("%d %d %d", Y, S, X);
                                                                        else if (Y==S && X<S) printf ("%d %d %d", X, Y, S);
               }
              
               
               
               
    return 0;
}
