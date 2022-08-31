/*Faça um programa que leia 10 números do usuário e informe quais deles são primos. Além disso, mostre a soma de todos os números primos existentes.*/

#include <stdio.h>

int main()
{
  
  int numero[9];
  int cont=0;

  for (int i=1 ;  i<=10; i++)
{
    
   printf("informe o valor do numero %d\n",i);
   scanf("%d",&numero[i]);  
}

  if (numero[i]%2==0)
  {
    printf("%d",numero[i]);
  }

  
  return 0;
}