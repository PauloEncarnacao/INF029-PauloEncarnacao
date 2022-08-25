/*Faça um programa que leia a idade de duas pessoas e imprima a soma das idades*/

#include <stdio.h>
int main()
{
int a, b,soma;
printf("insira a idade da primeira pessoa");
scanf("%d",&a);
printf("insira a idade da segunda pessoa");
scanf("%d",&b);
soma = a+b;
printf("a soma da idade eh= %d",soma);

  
  return 0;
}