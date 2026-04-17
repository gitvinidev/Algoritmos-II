#include <stdio.h>


	typedef struct E
{
	int rua;
	int casa;
	char cidade[51];
	char bairro[51];
	
} ENDERECO;

int main ()
{
int i;

//Vetor de uma struct:
ENDERECO ListaEnderecos[100];

//struct único:

ENDERECO ed1;

//manipulação da struct:
ed1.bairro=4

//leitura de valor para a struct:
scanf (""%i"", &ed1.rua);

//leitura de valor para o vetor de uma struct:

for (i=0; i<3; i++)
   {
    scanf ("%[^\n]%*c", &ListaEnderecos[i].cidade);
    scanf ("%d%*c", &ListaEnderecos.casa); //"%d%*c" estava no exemplo para idade.
    scanf ("%s%*c", &ListaEnderecos[i].rua); //"%s%*c" estava no exemplo para telefone.
   }
//saída na tela:
for (i=0; i<3; i++)
    {
	
    printf ("%s", ListaEnderecos[i].cidade);
    printf ("%d", ListaEnderecos.casa);
	printf ("%d", ListaEnderecos[i].rua);	
	}
	return 0;
	
}