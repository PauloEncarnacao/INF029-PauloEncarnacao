/*Faça um programa que tenha uma função que recebe um número inteiro e retorna o fatorial
deste número. Esta função deve ainda verificar se é possível calcular o fatorial, se não for, ela deve
de alguma forma retornar para a main que deu algum erro. A função main deve solicitar o valor do
usuário e imprimir o fatorial dele, ou se não é possível calcular o fatorial.*/

#include <stdio.h>

int fatorial(int num){

  int fat=1;

  for( ; num>=1; num-- ) {

         fat=fat*num;
         
    }
    return fat;
}

int main ()
{
int v1,resultado;
  
  printf("digite o numero que deseja obter o fatorial ");
  scanf("%d",&v1);

  resultado= fatorial(v1);

  if (v1<0)
  {
    printf("numero menor que 0");
  }
  else 
    printf("o fatorial eh= %d",fatorial);
  
}