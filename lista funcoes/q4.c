/*4) Crie um programa que tenha uma função ler3Numeros. Essa função deve ler três números do
usuário e retornar os três números. A função main deve imprimir esses três números. Utilize vetor
para fazer o retorno.*/


#include <stdio.h>

struct tres_numeros{
    int vetor[2];
}numero;

int ler_3_numeros(int num )
{
   //capturando os dados
   for(int i=0 ;i<3; i++)
   {
    printf("Digite o valor dos numeros");
    scanf("%d",&numero.vetor[i]);
   }
     //imprimindo os dados 
   for(int i=0; i<2; i++)
   {
    printf("Digite o valor dos numeros %d\n",numero.vetor[i]);
   }
   
   
    return numero;
}

int main()
{
    
    int reposta=ler_3_numeros();
     for(int i=0; i<3; i++)
     {
         printf("%d\n",resposta);
     }
    
    
    return 0;
}


