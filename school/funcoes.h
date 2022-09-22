#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//declaração e escopo das funcoes e structs

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

	Aluno aluno;
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
int cadastro_aluno(){
	
	printf("\n###CADASTRO DE ALUNO ###\n");

int testar_matricula=1;
		
			/*CADASTRO NOME*/
  while(testar_matricula!=0)
  {
    		printf("digite a matricula do aluno: ");
    		scanf("%d",&lista_aluno[qtd_alunos].matricula);
    		getchar();
	}
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
		
}

void printa_aluno(){


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
}


Professor cadastro_professor(){

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
}

void printa_professor(){
	
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
}

Disciplina cadastro_disciplina(){
	
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
}

void printa_disciplina(){
	
			
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
}