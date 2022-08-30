/*10. 
Criar programa que leia e armazena os elementos de uma matriz M inteira
10x10 e imprima todos os elementos que estão em linhas pares e colunas
impares.*/



#include <stdio.h>
#include <string.h>

#define TAM 10	
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
	for( j=0; j<TAM; j++)
	{
	if(j%2==0 && i%2!=0) 
	{
	printf("[%d",matriz[i][j]);
	}
	
	}	
}

return 0;
}
	
	