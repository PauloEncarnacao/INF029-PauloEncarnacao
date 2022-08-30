/*8. 
Criar programa que leia dados de 20 elementos inteiros. imprimir o maior
e o menor, sem ordenar, o percentual de números pares e a media dos
elementos do vetor.*/

#/*7.
Criar programa que leia dois conjuntos de números inteiros, tendo cada
um 10 e 20 elementos e apresente os elementos comuns aos conjuntos.
lembre-se de que os elementos podem se repetir mas não podem aparecer
repetidos na saída*/

#include <stdio.h>
#include <string.h>

#define TAM 20	
int main (){


int vet[TAM];
int i;
int maior,menor;

for(i=0; i<TAM; i++)
{
	scanf("%d",&vet[i]);
}

//encontra o maior valor
maior= vet[0];
for(i=1; i<TAM; i++)
{
	if(vet[i]>maior)
	{
		maior= vet[i];
	}
}

//encontra o menor valor 
menor=vet[0];
for(i=1; i<TAM; i++)
{
	if(vet[i]<menor)
	{
		menor=vet[i];
	}
}

printf("vetor :");
for(i=0; i<TAM; i++)
{
	printf("%d\n",vet[i]);
	
}

printf("\nMaior valor : %d",maior);
printf("\nMenor valor : %d",menor);

  return 0;
}
  
