/*5.
Criar um programa que deixe entrar com nome e idade de 20 pessoas e
armazene em um vetor todos os nomes que comecem com a letara no
intervalo L-S*/

#include <stdio.h>
#include <string.h>

#define TAM 2

struct pesquisa{

  char nome[50];
  int idade;
}pessoa[TAM];

int main()
{
  char letra='L';
  for(int i=0; i<=TAM; i++)
    {
    printf("Informe o nome");
  fgets(pessoa[i].nome,50, stdin);
     printf("informe a idade");
  scanf("%d",&pessoa[i].idade);
      getchar();

      if(pessoa[i].nome[0]=='L' || 'M' || 'N'|| 'O'|| 'P'|| 'Q' || 'R'|| 'S')
        {
        printf("%s",pessoa[i].nome);
        }
  }

  return 0;
}