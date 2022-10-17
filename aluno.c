#include <stdio.h>
#include "aluno.h"
#include <string.h>

int cadastar_aluno(Aluno lista[],int qtd);

int MenuAluno(){
  int opcaoAlunos;
    printf("\n-------------------\n.....ALUNOS.....\nDigite uma Opção:\n\n");
    printf("0 - Voltar.\n");
    printf("1 - Cadastrar Aluno.\n");
    printf("2 - Listar Alunos.\n");
    printf("3 - Atualizar Aluno.\n");
    printf("4 - Excluir Aluno.\n");
    printf("\n> ");
    scanf("%d", &opcaoAlunos);

    return opcaoAlunos;
}

int main_aluno(Aluno listaAluno[], int qtdAluno){
  int opcao=1;

  while(opcao!=0){
    opcao=MenuAluno();

    switch(opcao){
      case 1:{
       qtdAluno=cadastrar_aluno(listaAluno, qtdAluno);
        break;
      }
      case 2:{
        printf("\nATUALIZAR");
        break;
      }
      case 3:{
        printf("\nEXCLUIR");
        break;
      }
    }
  }
  return qtdAluno;
}

int cadastrar_aluno(Aluno lista[],int qtd){
  printf("#### CADASTRO ALUNO ####\n");
  
  printf("DIGITE A MATRICULA DO ALUNO");
  scanf("%d",lista[qtd].matricula);
  
  printf("DIGITE O NOME DO ALUNO");
  fgets(lista[qtd].nome,50,stdin);
  fflush(stdin);

  printf("DIGITE O SEXO DO ALUNO");
  fgets(lista[qtd].sexo,2,stdin);
  fflush(stdin);

  printf("DIGITE O CPF DO ALUNO");
  fgets(lista[qtd].cpf,15,stdin);
  fflush(stdin);
    
  printf("DIGITE A DATA DE NASCIMENTO DO ALUNO\n");
  printf("dia\n");
  scanf("%d",&lista[qtd].data.dia);
  printf("mes\n");
  scanf("%d",&lista[qtd].data.mes);
  printf("ano\n");
  scanf("%d",&lista[qtd].data.ano);

  return qtd;
}