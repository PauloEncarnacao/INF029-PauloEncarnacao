/*11. 
Criar e armazenar ua matriz a 10x10 e gerar e imprimir a matriz invertida*/

#include <stdio.h>
#include <string.h>

#define TAM 2	
int main (){

int matriz[TAM][TAM];
int i,j;

for(i=0; i<=TAM; i++)
{
	for( j=0; j<=TAM; j++)
	{
		printf("\n[%d %d]",i,j);
		scanf("%d",&matriz[i][j]);
	}
}

for(i=TAM; i>=0; i--)
{
	for( j=TAM; j>=0; j--)
	{
		printf("\n[%d %d]\n",i,j);
		printf(" %d ",matriz[i][j]);
		
	}
}
return 0;
}
	
	