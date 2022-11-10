#include <stdio.h>
#include <stdlib.h>

void imprimirVetor(int*vet,)

int main(){

  int i,vet[10]={5,4,6,8,9,5,4,7,6,10};

  printf("%p\t%p\n",vet,&vet[0]);
  
  for(i=0; i<10; i++){
    printf("%d\n",*(vet+i));//aritimetica de ponteiros 
  }

  /*
    int *valor1, valor2= 50;//ponteiro para um tipo int
    char *letra1, letra2='g';//ponteiro para um tipo char

  valor1 = &valor2;
  // armezena o endereço de memória da variavel valor2
  letra1 = &letra2;// armezan o endereço de memória da variavel letra2

  //
  printf("conteudo da variavel VALOR2 : %d\n",valor2);
  printf("endereco da variavel  VALOR2 : %p\n",&valor2);
  printf("conteudo da variavel VALOR1: %p\n",valor1);
  printf("conteudo apontado pela variavel VALOR1 %d\n",*valor1);

  //
  printf("\nconteudo da variavel LETRA2 : %c\n",letra2);
  printf("endereco da variavel  LETRA2 : %p\n",&letra2);
  printf("conteudo da variavel LETRA1: %p\n",letra1);
  printf("conteudo apontado pela variavel VALOR1:  %c",*letra1);
  */
  
  return 0;
  
}