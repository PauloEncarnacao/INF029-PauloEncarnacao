
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "aluno.h"
#define TAM 3

int MenuPrincipal(){
  int opcao;
  printf("\n\n");
  printf("digite a opcao\n");
  printf("SAIR....0\n");
  printf("GERENCIAR ALUNO.....1\n");
  printf("GERENCIAR PROFESSORES....2\n");
  printf("GERENCIAR DISCIPLINAS....3\n");
  printf("RELATORIOS......4\n");
  scanf("%d",&opcao);

  printf("\n\n");
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
          qtd_alunos= main_aluno(lista_aluno, qtd_alunos);
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
