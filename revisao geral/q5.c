/*5.
Criar um programa que deixe entrar com nome e idade de 20 pessoas e
armazene em um vetor todos os nomes que comecem com a letra no
intervalo L-S*/

/*5.
Criar um programa que deixe entrar com nome e idade de 20 pessoas e
armazene em um vetor todos os nomes que comecem com a letra no
intervalo L-S*/

#include <stdio.h>
#include <string.h>


struct nome_idade{
  char nome[50];
  int idade;
}pessoas[19];//0,1..19


int main (){
      
    
     for(int i=0; i<20; i++) //ciclo para capturar dados
  {
    printf("digite o nome");
    fgets(pessoas[i].nome, 50, stdin);
    ////////////////////////////
    printf("digite a idade");
    scanf("%d",&pessoas[i].idade);
    getchar();
  }

  

    

  return 0;
}