/*Faça um programa que leia a idade de uma pessoa e informe de ela é de maior ou de menor. O programa deve repetir essa ação até que uma idade negativa seja informada */

#include <stdio.h>
#include <stdlib.h>

int main()
{
 
    int idade;
    printf("informe sua idade");
    scanf("%d",&idade);
    
for (int i=0; idade>=18; i++)
{
 
    printf("informe sua idade");
    scanf("%d",&idade);
}

  return 0;
}