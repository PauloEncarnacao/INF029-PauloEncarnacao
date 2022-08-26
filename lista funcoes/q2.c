/*Crie um programa que tenha uma função subtrai e a função main. A função main deve ler três
valores, enviar para a função subtrai. A função subtrai deve realizar a subtração dos três valores
(primeiro menos o segundo menos o terceiro) e retornar o valor. A Função main deve imprimir o
resultado da subtração.*/

#include <stdio.h>

int subtrai (int num1,int num2,int num3)
{

  return (num1-num2-num3);
}

int main()
{

int v1,v2,v3,resultado;

  printf("digite o primeiro valor");
  scanf("%d",v1);
  
  printf("digite o segundo valor");
  scanf("%d",v2);

  printf("digite o segundo valor");
  scanf("%d",v3);
  resultado= subtrai(v1,v2,v3);

  printf("%d",resultado);
  
}