/*4) Crie um programa que tenha uma função ler3Numeros. Essa função deve ler três números do
usuário e retornar os três números. A função main deve imprimir esses três números. Utilize vetor
para fazer o retorno.*/


#include <stdio.h>

 typedef struct{
    int vetor[3];
} tres_numero;

tres_numero ler_3_numeros()
{

  tres_numero num;
   //capturando os dados
   for(int i=0 ;i<3; i++)
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
   
    tres_numero mostra= ler_3_numeros();
    
    for(int i=0; i<3; i++)
    {
        printf("%d",mostra.vetor[i]);   
        
    }

    return 0;
}