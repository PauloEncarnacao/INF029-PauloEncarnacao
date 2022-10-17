
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "aluno.h"
#define TAM 3

int MenuPrincipal(){
  int opcao;
   
    printf("\n-------------------\nDigite uma Opção:\n\n");
    printf("0 - Sair.\n");
    printf("1 - Gerenciar Alunos.\n");
    printf("2 - Gerenciar Professores.\n");
    printf("3 - Gerenciar Disciplinas.\n");
    printf("4 - Relatórios.\n");
    printf("\n> ");
    scanf("%d", &opcao);

    return opcao;
}

int main(void){
  
  Aluno lista_aluno[TAM];
  int qtd_alunos=0;
    int opcao=1;

  while(opcao!=0){
    opcao=MenuPrincipal();
      switch(opcao){
        case 1:{
          printf("MENU ALUNO\n");
          qtd_alunos= main_aluno(lista_aluno,qtd_alunos);
          break;
        }
        case 2:{
          printf("MENU PROFESSOR\n");
          break;
        }
        case 3:{
          printf("MENU DISCIPLINA\n");
          break;  
        }
        case 4:{
          printf("MENU RELATÓRIOS\n");
          break;
        }
        default:{
          printf("SAINDO......");
        }
    
        
      }    
  }
  return 0;
}
