
 /* 9. 
Criar programa que leia elementos de uma matriz inteira de 10x10 e escreva os elementos da diagonal principal*/


#include <stdio.h>


#define TAM 10	
int main (){

int matriz[TAM][TAM];

// captura os dados da matriz
for(int i=0; i<TAM; i++ )
{
	for(int j=0; j<TAM; j++)
	{
		scanf("%d	",&matriz[i][j]);
	}
	printf("\n");
}

//imprime os elementos da diagonal principal  
for(int i=0; i<TAM; i++ )
{
	for(int j=0; j<TAM; j++)
	{
		if(i==j)
	printf("[%d]  ",matriz[i][j]);
	}
}
  return 0;
}
  