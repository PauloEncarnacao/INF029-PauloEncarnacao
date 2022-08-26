/*Faça um programa que calcula o fatorial de um número*/

#include <stdio.h>

int main(){
  
  int numero;
  printf("digite um para descobrir seu fatorial ");
  scanf("%d",&numero);
  
  int fat=1;

  for( ; numero>=1; numero-- ) {

         fat=fat*numero;
    }

  printf("o numero digitado em fatorial eh = %d",fat);


  return 0;
}