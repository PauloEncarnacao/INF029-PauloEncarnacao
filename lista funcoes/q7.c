/*7) Crie um programa que tenha uma função ler3Palavras. Essa função deve ler três palavras do
usuário e retornar as três palavras. A função main deve imprimir essas três palavras.*/
#include <stdio.h>
#include <string.h>

typedef struct{

  char palavra[3][40];

}tres_palavras;

tres_palavras ler_3_palavras(){

  tres_palavras entrada;

  for(int i=0; i<3; i++)
  {
  printf("DIGITE AS PALAVRAS===");
  fflush(stdin);
  fgets(entrada.palavra[i],40,stdin);
  }
  
  return entrada;
  
}

int main (){


  tres_palavras saida=ler_3_palavras();
    
  for(int i=0; i<3; i++)
  {
  printf("AS PALAVRAS DIGITADAS FORAM = %s",saida.palavra[i]);
  }
  return 0;
}