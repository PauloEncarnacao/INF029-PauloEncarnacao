/* 
  PROJETO ESCOLA
  * Disciplina: INF029 - Laboratório de Programação
  * Aluno: 
    Paulo Henrique dos santos da encarnação/20212160035
    Luis André Souza/ 
    Rebeca Vitória/ 
  * Data de Criação: 05/09/2022
  * Última Modificação: 22/09/2022
*/ //  gcc aluno.c menus.c main.c -o escola

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "structs.h"
#include "aluno.h"
#include "menus.h"
#define TAM 5
#define SUCESSO 1

  cadastro_pessoa lista_aluno[TAM];
  int qtd_alunos=0;  //contador aluno
  int qtd_professores=0;//contador professor
  int qtd_disciplinas=0;//contador disciplina

  int  op_aluno, op_professor, op_disciplina,retorno,sair;
  

int main()
{
	while(!sair){

    int opocao;
		printf("\nDigite a opcao: \n ");
		printf("0 - Sair\n");
    	printf("1 - Inserir Aluno\n");
   		printf("2 - Listar Alunos\n");
   		printf("3 - Inserir Professor\n");
   		printf("4 - Listar Professores\n");
   		printf("5 - Inserir Disciplna\n");
   		printf("6 - Listar Disciplinas\n");
    	scanf("%d",&opcao);
    
    switch(opcao)
    {
    	case 1:
    		cadastro_aluno();
			break;
		case 2:
			  printa_aluno();
			break;
    case 3:
			  //cadastro_professor();
			break;
		case 4:
			//printa_professor();
			break;
		case 5:
			//cadastro_disciplina();
			break;
		case 6:
			//printa_disciplina();
			break;
	}
}

  return 0;
}
