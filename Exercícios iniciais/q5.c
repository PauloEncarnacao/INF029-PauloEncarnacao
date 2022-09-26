/*Faça um programa que leia a idade de uma pessoa e informe de ela é de maior ou menor*/

#include <stdio.h>
int main()
{
  int idade;
  
  printf("informe sua idade");
  scanf("%d",&idade);


  if (idade>=18)
  {
  printf("maior de idade"); 
  }

  else
  printf("menor de idade");
  return 0;
}