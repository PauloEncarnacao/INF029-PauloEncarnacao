/*Faça um programa que leia dois valores informados pelo usuário e inverta os valores nas variáveis lidas sem utilizar variável auxiliar*/
/*Faça um programa que leia dois valores informados pelo usuário e inverta os valores nas variáveis lidas sem utilizar 
variável auxiliar*/

#include <stdio.h>

int main()
{
    int v1,v2;
    
    printf("valor 1=");
    scanf("%d",&v1);
    
    printf("valor 2=");
    scanf("%d",&v2);
    
       
    v1 = v1 + v2;
      
    v2 = v1 - v2;
      
    v1= v1 - v2; 
    
    
    
    printf("valor 1= %d valor 2= %d",v1,v2);


    return 0;
}