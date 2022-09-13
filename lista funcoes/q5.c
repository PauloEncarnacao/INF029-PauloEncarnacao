/*5) Crie um programa que tenha uma função ler4Numeros. Essa função deve ler quatro números do
usuário e retornar os quatro números. A função main deve imprimir esses quatro números. Utilize
struct para fazer o retorno.*/

#include <stdio.h>

 typedef struct{
    int vetor[4];
} quatro_numero;

quatro_numero ler_4_numeros()
{

  quatro_numero num;
   //capturando os dados
   for(int i=0 ;i<4; i++)
   {
    printf("Digite o valor dos numeros");
    scanf("%d",&num.vetor[i]);
   }     //imprimindo os dados 
   /*
  for(int i=0; i<1; i++)
   {
    printf("valores digitados %d\n",num.vetor[i]);
   }
   */
   
    return num;
}

int main()
{
   
    quatro_numero mostra= ler_4_numeros();
    
    for(int i=0; i<4; i++)
    {
        printf("%d",mostra.vetor[i]);   
        
    }

    return 0;
}