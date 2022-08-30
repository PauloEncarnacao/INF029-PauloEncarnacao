/*7.
Criar programa que leia dois conjuntos de números inteiros, tendo cada
um 10 e 20 elementos e apresente os elementos comuns aos conjuntos.
lembre-se de que os elementos podem se repetir mas não podem aparecer
repetidos na saída*/

#include <stdio.h>
#include <string.h>

int main ()

{
int c1[9],c2[19];

  for (int i=0; i<10; i++)
    {
  printf("insira o elemento do primeiro conjunto = ");
  scanf("%d",&c1[i]);
    }

  for (int j=0; j<20; j++)
    {
  printf("insira o elemento do segundo conjunto = ");
  scanf("%d",&c2[j]);
	}
	int cont=0;
	for(int k=0; k<19; k++)
	{
		if (c1[k]==c2[k])//numeros iguais entre os conjuntos
		{
			cont= cont+c1[k];
			printf("os numeros comeuns entre os conjuntos sao =%d\n",cont);
			cont=0;	
		}
	}
  return 0;
}

  