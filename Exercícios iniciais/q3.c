/*Faça um programa que leia dois valores informados pelo usuário e inverta os valores nas variáveis lidas*/

#include <stdio.h>

int main()
{
    
    int v1,v2,novo;
    
    printf("valor 1=");
    scanf("%d",&v1);
    
    
    printf("valor 2=");
    scanf("%d",&v2);
    
 
   novo=v1;
   v1=v2;
   v2=novo;
 
   
   printf("os valos invertidos sao v1 %d e v2 %d",v1,v2);
    
}