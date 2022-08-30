/*11. 
Criar e armazenar ua matriz a 10x10 e gerar e imprimir a matriz invertida*/

/*11. 
Criar e armazenar ua matriz a 10x10 e gerar e imprimir a matriz invertida*/

#include <stdio.h>

int main()
{

  int matriz[2][2];
  int i,j;
  
// gerando matriz e coletando dados
for( i=0; i<2; i++)
  {
  
  for ( j=0; j<2; j++)
      {
  
      printf("informe os numeros [%d] \t[ %d]",i,j);
       scanf("%d",&matriz[i][i]);
      
      }
  }

for (i=1; i>=0; i--)
{
    for(j=1; j>=0; j--)
    {
        printf("\t%d",matriz[i][j]);
    }
    
    printf("\n");
}



    return 0;
}