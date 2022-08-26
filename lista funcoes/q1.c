/*1) Crie um programa que tenha uma função soma e a função main. A função main deve ler dois
valores, enviar para a função soma. A função soma deve realizar a soma e retornar o valor. */

#include <stdio.h>

int soma(int num1, int num2)
{
  

  return num1+num2;
}


int main()

{
int v1,v2,resultado;

  printf("digite o primeiro valor");
  scanf("%d",v1);
  
  printf("digite o segundo valor");
  scanf("%d",v2);

  resultado= soma(v1,v2);

  printf("%d",resultado);
  
}