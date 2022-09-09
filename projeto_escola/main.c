
/*{Desenvolver um programa em C que controle o funcionamento de uma Escola. Existem diversas
funcionalidades em uma Escola, mas você deve focar no que é pedido. Caso tenha interesse você
pode evoluir sua solução para adicionar mais funcionalidades.
Funcionalidades solicitadas:
• Cadastro de Alunos (Matrícula, Nome, Sexo, Data Nascimento, CPF) .
• Cadastro de Professores (Matrícula, Nome, Sexo, Data Nascimento, CPF).
• Cadastro de Disciplinas (Nome, Código, Semestre, Professor)
? Inserir/Excluir aluno de uma disciplina
• Relatórios
? Listar Alunos
? Listar Professores
? Listar Disciplinas (dados da disciplina sem os alunos)
? Listar uma disciplina (dados da disciplina e os alunos matriculados)
? Listar Alunos por sexo (Masculino/Feminino)
? Listar Alunos ordenados por Nome
? Listar Alunos ordenados por data de nascimento
? Listar Professores por sexo (Masculino/Feminino)
? Listar Professores ordenados por Nome
? Listar Professores ordenados por data de nascimento
INF029 - Laboratório de Programação – Graduação Tecnológica em Análise e Desenvolvimento de Sistemas – Atividade Extra
? Aniversariantes do mês
? Lista de pessoas (professor/aluno) a partir de uma string de busca. O usuário informa no
mínimo três letras e deve ser listado todas as pessoas que contem essas três letras no
nome.
? Lista de alunos matriculados em menos de 3 disciplinas
? Lista de Disciplinas, com nome do professor, que extrapolam 40 vagas.
Observação:
• Por Cadastro entenda Incluir, excluir, atualizar
• Valide todos os campos necessários (ex. Data nascimento, CPF)*/


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "funcoes.h"

typedef struct dma{
	int dia;
	int mes;
	int ano;
	
}Data;
//struct responsavel pela data

typedef struct dados_alunos{
	int matricula;
	char nome[40];
	char sexo;
	Data data_nascimento;
	char cpf[15];
	//struct com as informacoes do aluno	
}Aluno;


typedef struct dados_professor{
	
	int matricula;
	char nome[40];
	char sexo;
	Data data_nascimento;
	char cpf[15];
	//struct com as informacoes do professor
}Professor;

typedef struct dados_disciplina{
	
	int codigo;
	char nome[40];
	int semestre;
	char docente[40];
}Disciplina;

int main(){

	//Aluno
	Aluno aluno;// variavel aluno do tipo aluno
	Aluno lista_aluno[10];//vetor para armazenar a lista de alunos
	int qtd_alunos=0;//contador para controlar a quantidade de alunos
	//
	Professor professor;
	Professor lista_professor[10];
	int qtd_professores=0;
	//
	Disciplina disciplina;
	Disciplina lista_disciplina[10];
	int qtd_disciplinas;
	//
	int opcao;
	int sair=0;
	//incializo o menu com o while
while(!sair){
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
    	case 0:{
    		printf("finalizando programa");
    		sair=1;
			break;
		}
    	case 1:{
    		printf("\n###CADASTRO DE ALUNO ###\n");
    		
			/*CADASTRO NOME*/
    		printf("digite a matricula do aluno: ");
    		scanf("%d",&lista_aluno[qtd_alunos].matricula);
    		getchar();
			
			printf("Digite o nome do aluno:  ");
			fgets(lista_aluno[qtd_alunos].nome,40,stdin);
       		 size_t ln = strlen(lista_aluno[qtd_alunos].nome); - 1; //size_t = unsigned integer type
        	if (lista_aluno[qtd_alunos].nome[ln] == '\n')//remover o \n do final da string
         	 lista_aluno[qtd_alunos].nome[ln] = '\0';
         	 
         	 /*CADASTRO SEXO */
         	 printf("digite o sexo: ");
         		scanf("%c",&lista_aluno[qtd_alunos].sexo);
         	
         	/*CADASTRO DATA DE NASCIMENTO*/
         	printf("digite o dia de nascimento :");
         	scanf("%d",&lista_aluno[qtd_alunos].data_nascimento.dia);
         	
         	printf("digite o mes de nascimento :");
         	scanf("%d",&lista_aluno[qtd_alunos].data_nascimento.mes);
         	
         	printf("digite o ano de nascimento :");
         	scanf("%d",&lista_aluno[qtd_alunos].data_nascimento.ano);
         	getchar();
         	
         	/*CADASTRO CPF*/
         	printf("digite o CPF: ");
         	fgets(lista_aluno[qtd_alunos].cpf,15,stdin);
         	
         	 ln = strlen(lista_aluno[qtd_alunos].cpf) - 1; 
        if (lista_aluno[qtd_alunos].cpf[ln] == '\n')
          lista_aluno[qtd_alunos].cpf[ln] = '\0';

    
    	qtd_alunos++;
    	
    	printf("\n");
    	
    	break;
		}
		case 2:{
			
		printf("\n### Alunos Cadastrasdos ####\n");
        int i;
        for (i = 0; i < qtd_alunos; i++){
          printf("-----\n");
          printf("Matricula: %d\n", lista_aluno[i].matricula);
          printf("Nome: %s", lista_aluno[i].nome);
          printf("Sexo: %c\n", lista_aluno[i].sexo);
          printf("Data Nascimento: %d/%d/%d\n", lista_aluno[i].data_nascimento.dia, lista_aluno[i].data_nascimento.mes, lista_aluno[i].data_nascimento.ano);
          printf("CPF: %s\n", lista_aluno[i].cpf);

        }
        printf("-----\n\n");
			break;
		}
		case 3:{
				printf("\n###CADASTRO DE PROFESSOR ###\n");
    		
			/*CADASTRO NOME*/
    		printf("digite a matricula do professor: ");
    		scanf("%d",&lista_professor[qtd_professores].matricula);
    		getchar();
			
			printf("Digite o nome do professor:  ");
			fgets(lista_professor[qtd_professores].nome,40,stdin);
       		 size_t ln = strlen(lista_professor[qtd_professores].nome); - 1; //size_t = unsigned integer type
        	if (lista_professor[qtd_professores].nome[ln] == '\n')//remover o \n do final da string
         	 lista_professor[qtd_professores].nome[ln] = '\0';
         	 
         	 /*CADASTRO SEXO */
         	 printf("digite o sexo: ");
         		scanf("%c",&lista_professor[qtd_professores].sexo);
         	
         	/*CADASTRO DATA DE NASCIMENTO*/
         	printf("digite o dia de nascimento :");
         	scanf("%d",&lista_professor[qtd_professores].data_nascimento.dia);
         	
         	printf("digite o mes de nascimento :");
         	scanf("%d",&lista_professor[qtd_professores].data_nascimento.mes);
         	
         	printf("digite o ano de nascimento :");
         	scanf("%d",&lista_professor[qtd_professores].data_nascimento.ano);
         	getchar();
         	
         	/*CADASTRO CPF*/
         	printf("digite o CPF: ");
         	fgets(lista_professor[qtd_professores].cpf,15,stdin);	
         	  ln = strlen(lista_professor[qtd_professores].cpf); - 1; //size_t = unsigned integer type
        	if (lista_professor[qtd_professores].cpf[ln] == '\n')//remover o \n do final da string
      	 	 lista_professor[qtd_professores].cpf[ln] = '\0';
         	 
    
    	qtd_professores++;
    	
    	printf("\n");
			break;
		}
		case 4:{
			printf("\n### PROFESSORES CADASTRADOS ####\n");
        int i;
        for (i = 0; i < qtd_professores; i++){
          printf("-----\n");
          printf("Matricula: %d\n", lista_professor[i].matricula);
          printf("Nome: %s", lista_professor[i].nome);
          printf("Sexo: %c\n", lista_professor[i].sexo);
          printf("Data Nascimento: %d/%d/%d\n", lista_professor[i].data_nascimento.dia, lista_professor[i].data_nascimento.mes, lista_professor[i].data_nascimento.ano);
          printf("CPF: %s\n",lista_professor[i].cpf);

        }
        printf("-----\n\n");
			break;
		}
		case 5:{
			
				printf("\n###CADASTRO DE DISCIPLINA ###\n");
				
				printf("Digite o codigo da disciplina: ");
				scanf("%d",&lista_disciplina[qtd_disciplinas].codigo);
				getchar();
				
				printf("Digite o nome da disciplina: ");
				fgets(lista_disciplina[qtd_disciplinas].nome,40,stdin);
			 		size_t ln = strlen(lista_disciplina[qtd_disciplinas].nome) - 1; //size_t = unsigned integer type
        			if (lista_disciplina[qtd_disciplinas].nome[ln] == '\n')
         		 		lista_disciplina[qtd_disciplinas].nome[ln] = '\0';
         		 		
         		printf("Digite o semestre da disciplina: ");
         		scanf("%d",&lista_disciplina[qtd_disciplinas].semestre);
         		getchar();
         		
			qtd_disciplinas++;	
				printf("\n");
				break;
		}
		case 6:{
			
		printf("\n### DISCIPLINAS CADASTRADOS ####\n");
      	 int i=0;
	    for (i = 0; i < qtd_disciplinas; i++){
          printf("-----\n");
          printf("CÓDIGO: %d\n", lista_disciplina[i].codigo);
          printf("NOME: %s\n", lista_disciplina[i].nome);
          printf("SEMESTRE: %d\n", lista_disciplina[i].semestre);    
		  printf("PROFESSOR: %s\n",lista_disciplina[i].docente);

        }
        printf("-----\n\n");
			
			break;
		
	}
	
	}
}
	return 1;
}	






















