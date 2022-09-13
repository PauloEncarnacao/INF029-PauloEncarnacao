/*4) Crie um programa que tenha uma função ler3Numeros. Essa função deve ler três números do
usuário e retornar os três números. A função main deve imprimir esses três números. Utilize vetor
para fazer o retorno.*/



#include <stdio.h>

void ler_tres_numero(int numero[]){
      
  for(int i=0; i<3; i++)
    {
     printf("digite os numeros");
     scanf("%d",&numero[i]);
    }   
}

int main()
{
    
    int vetor[3];
    ler_tres_numero(vetor);
    
    for(int i=0; i<3; i++)
    {
    printf("%d",vetor[i]);
    }
    return 0;
}