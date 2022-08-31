
 /* 9. 
Criar programa que leia elementos de uma matriz inteira de 10x10 e escreva os elementos da diagonal principal*/


#

#include <stdio.h>
#include <string.h>

#define TAM 3	
int main (){

int matriz[TAM][TAM];
int i,j;

for(i=0; i<TAM; i++)
{
	for( j=0; j<TAM; j++)
	{
		printf("[%d %d]",i,j);
		scanf("%d",&matriz[i][j]);
	}
}

for(i=0; i<TAM; i++)
{

	printf("%d\t",matriz[i][i]);
}
  return 0;
}
  