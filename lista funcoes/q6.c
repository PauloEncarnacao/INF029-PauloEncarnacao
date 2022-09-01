/*6) Crie um programa que tenha uma função ler3Letras. Essa função deve ler três letras do usuário
e retornar as três letras. A função main deve imprimir essas três letras.*/

#include <stdio.h>
#include <stdlib.h>

typedef struct{
  
  char letra[3];
}letras;


letras ler_tres_letras()
{
  letras entrada; 
  
  for(int i=0; i<3; i++)
    {
  printf("Informe uma letra\n ");
   scanf(" %c",&entrada.letra[i]);
      }
      
  return entrada;
}

int main(){

  letras saida=ler_tres_letras();
  for(int i=0; i<3; i++)
    {
  printf("as letras informados foram %c\n",saida.letra[i]);
    }

  return 0;
}