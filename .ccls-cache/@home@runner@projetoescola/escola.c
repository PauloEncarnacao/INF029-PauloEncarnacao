#include <stdio.h>
#define TAM 3

#include "aluno.h"

int imprimeMenu();

int imprimeMenu(){
  int opcao;
  printf("Digite a opÃ§Ã£o\n");
  printf("0. Sair\n");
  printf("1. Aluno\n");
  printf("2. Professor\n");
  printf("3. Disciplina\n");
  scanf("%d", &opcao);
  return opcao;
}

int main(void) {
  Aluno listaAluno[TAM];
  int qtdAluno = 0;
  int opcao = 1;
  
  while(opcao != 0){
    opcao = imprimeMenu();
    
    switch (opcao){
      case 1:{
        qtdAluno = mainAluno(listaAluno, qtdAluno);
        break;
      }
      case 2:{
        printf("Opcao de Professor\n");
        break;
      }
      case 3:{
        printf("Opcao de Disciplina\n");
        break;
      }
      default:{
        printf("Opcao InvÃ¡lida\n");
      }    
    }
    
  }
  
  return 0;
}