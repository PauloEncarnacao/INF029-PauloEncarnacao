#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "menu.h"

#define TAM 3
#define CADASTRO_SUCESSO 1
#define ERRO_CADASTRO_MATRICULA 2
#define ERRO_CADASTRO_SEXO 3
#define ERRO_DATA_NASCIMENTO 4

typedef struct dma{
  int dia;
  int mes;
  int ano;
}Data;

typedef struct dados_alunos{
int matricula;
char nome[40];
char cpf[15];
char sexo;
Data data_nascimento;
}Aluno;

Aluno aluno;
int qtd_alunos=0;
Aluno lista_aluno[TAM];

//int adicionar_aluno (Aluno lista_aluno[], int qtd_alunos);
int main(){//abertura main

int sair_menu_principal=0;

  while(!sair_menu_principal){//abertura while menu princpal
   
    //variavel opcao recebe funcao
    int opcao=MenuPrincipal();
    switch(opcao){//abertura switch opcoes do menu principal
    
      int sair_menu_secundario=0;
      int opcao_aluno;
      int opcao_professor;
      int opcao_disciplina;
      case 0:{//abertura case 0
        
        printf("FINALIZANDO PROGRAMA ESCOLA.....");
        
        break;
      }//fechamento case 0

        
      case 1:{//abertura case 1 aluno
        
          
         while(!sair_menu_secundario){
            printf("MENU ALUNO");
            MenuSecundario();
            scanf("%d",&opcao_aluno);
          }
        
          break;
      }//fechamento case 1

      
      case 2:{//abertura case 2 Professor
        
        
         while(!sair_menu_secundario){
            printf("MENU PROFESSOR");
            MenuSecundario();
            scanf("%d",&opcao_professor);
          }
        
          break;
      }//fechamento case 2

      
    case 3:{//abertura case 3 Disciplina
      
        
         while(!sair_menu_secundario){
            printf("MENU DISCIPLINA");
            MenuSecundario();
            scanf("%d",&opcao_disciplina);
          }
        
  
      break;
    }//fechamento case 3

      
      case 4:{// abertura case 4 relatorios
        
       printf("MENU RELATORIO\n");
        printf("EM PROGRESSO...");
        break;
      }//fechamento case 4

      default:{
        printf("OPCAO INVALIDA....");
      }
  
  
    }//fechmaneto swithc opcoes do menu principal
    
    break;
  }//fechamento wihle menu principal
  return 0;
}//fechamento main

/*
int adicionar_aluno (Aluno lista_aluno[], int qtd_alunos) {
  
        printf("Matricula: ");
        scanf("%d", &lista_aluno[qtd_alunos].matricula);
        getchar();

        if(lista_aluno[qtd_alunos].matricula <= 0){
            return ERRO_CADASTRO_MATRICULA;
        }

        printf("Nome: ");
        fgets(lista_aluno[qtd_alunos].nome, 100, stdin);
        size_t ln = strlen(lista_aluno[qtd_alunos].nome) -1;
        if(lista_aluno[qtd_alunos].nome[ln] == '\n')
            lista_aluno[qtd_alunos].nome[ln] = '\0';

        printf("Sexo: ");
        printf("Utilize as letras 'M' para masculino, 'F' para feminino e 'O' para outros");
        scanf("%c", &lista_aluno[qtd_alunos].sexo);

        lista_aluno[qtd_alunos].sexo = toupper(lista_aluno[qtd_alunos].sexo);
        if(lista_aluno[qtd_alunos].sexo != 'M' & lista_aluno[qtd_alunos].sexo != 'F'){
            return ERRO_CADASTRO_SEXO;
        }

        printf("Data de nascimento\n ");
        printf("Dia: ");
        scanf("%d", &lista_aluno[qtd_alunos].data_nascimento.dia);

        printf("Mes: ");
        scanf("%d", &lista_aluno[qtd_alunos].data_nascimento.mes);

        printf("Ano: ");
        scanf("%d", &lista_aluno[qtd_alunos].data_nascimento.ano);
        getchar();

        if(ValidaData(lista_aluno[qtd_alunos].data_nascimento.dia, lista_aluno[qtd_alunos].data_nascimento.mes, lista_aluno[qtd_alunos].data_nascimento.ano) != 0){
            printf("Digite o CPF: ");
            fgets(lista_aluno[qtd_alunos].cpf, 12, stdin); 
            ln = strlen(lista_aluno[qtd_alunos].cpf) - 1; 
            if (lista_aluno[qtd_alunos].cpf[ln] == '\n')
            lista_aluno[qtd_alunos].cpf[ln] = '\0';
            
        } else {
            return ERRO_DATA_NASCIMENTO;
        }

        printf("\n");

    return CADASTRO_SUCESSO;
}
  

*/