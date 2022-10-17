#include <stdio.h>
#include "aluno.h"
#include <string.h>

int MenuAluno()
{
  int opcao;
  printf("DIGITE A OPCAO\n");
  printf("VOLTAR....0\n");
  printf("CADASTRAR......1\n");
  printf("LISTAR........2");
  printf("EXCLUIR......3\n");
  scanf("%d",&opcao);
  return opcao;
}

int main_aluno(Aluno lista_aluno[], int qtd_alunos){
  int opcao=1;

  while(opcao!=0){
    opcao=MenuAluno();

    switch(opcao){
      case 1:{
        printf("CADASTAR");
        qtd_alunos= cadastrar_aluno(lista_aluno, qtd_alunos);
        break;
      }
      case 2:{
        printf("ATUALIZAR");
        break;
      }
      case 3:{
        printf("EXCLUIR");
        break;
      }
    }
  }
  return qtd_alunos;
}

int cadastar_aluno(Aluno lista[], int qtd){
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
  

}