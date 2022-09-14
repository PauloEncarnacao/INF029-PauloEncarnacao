#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <stddef.h>

#define CADASTRADO_SUCESSO 1
#define ATUALIZADO_SUCESSO 4

#define ERRO_CADASTRO_MATRICULA 2
#define ERRO_CADASTRO_SEXO 3
#define ERRO_DATA_DE_NASCIMENTO 0

#define TAM 3

struct dma {
    int dia;
    int mes;
    int ano;
} Data;

// struct dados dos alunos
typedef struct dados_aluno {
    int matricula;
    char nome[100];
    char sexo;
    struct dma data_nascimento;
    char cpf[12];
} Aluno;

// struct dados dos professores
typedef struct dados_professor {
    int matricula;
    char nome[100];
    char sexo;
    struct dma data_nascimento;
    char cpf[12];
} Professor;

// struct dos dados das disciplinas, separados por letra e numero
typedef struct codigo {
    char letra[5];
    char numero[5];
} Codigo;

// struct dos dados da disciplina
typedef struct dados_disciplinas {
    char nome[53];
    struct codigo cod;
} Disciplina;

Aluno aluno; 
Professor professor;
Disciplina disciplina;


void MenuPrincipal(){

    printf("\n");
    printf("---------------------------------\n");
    printf("------ MENU PRINCIPAL -----------\n");
    printf(" 0 - Sair\n");
    printf(" 1 - GERENCIAR ALUNO \n");
    printf(" 2 - GERENCIAR PROFESSOR \n");
    printf(" 3 - GERENCIAR DISCIPLINA \n");
    printf(" 4 - GERAR RELATORIO \n");
    printf("---------------------------------\n");
    printf("DIGITE UMA DAS OPCOES: ");

}


void MenuSecundario(){

    printf("\n");
    printf("---------------------------------\n");
    printf(" 0 - SAIR\n");
    printf(" 1 - INCLUIR\n");
    printf(" 2 - ATUALIZAR\n");
    printf(" 3 - EXCLUIR \n");
    printf("---------------------------------\n");
    printf("Digite opcao desejada: ");

}
// função de incluir aluno!!!
int incluir_aluno (Aluno lista_aluno[], int qtd_alunos) {


        printf("Insira a matricula: ");
        scanf("%d", &lista_aluno[qtd_alunos].matricula);
        getchar();

        if(lista_aluno[qtd_alunos].matricula <= 0){
            return ERRO_CADASTRO_MATRICULA;
        }

        printf("Insira o nome: ");
        fgets(lista_aluno[qtd_alunos].nome, 100, stdin);
        size_t ln = strlen(lista_aluno[qtd_alunos].nome) -1;
        if(lista_aluno[qtd_alunos].nome[ln] == '\n')
            lista_aluno[qtd_alunos].nome[ln] = '\0';

        printf("Insira o Sexo: ");
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

	//validação da data
        //if(ValidaData(lista_aluno[qtd_alunos].data_nascimento.dia, lista_aluno[qtd_alunos].data_nascimento.mes, lista_aluno[qtd_alunos].data_nascimento.ano) != 0){
            
			printf("Digite o CPF: ");
            fgets(lista_aluno[qtd_alunos].cpf, 12, stdin); 
            ln = strlen(lista_aluno[qtd_alunos].cpf) - 1; 
            if (lista_aluno[qtd_alunos].cpf[ln] == '\n')
            lista_aluno[qtd_alunos].cpf[ln] = '\0';

         else {
            return ERRO_DATA_DE_NASCIMENTO;
        }

        printf("\n");

    return CADASTRADO_SUCESSO;
}




int atualizar_aluno(Aluno lista_aluno[],int qtd_alunos)	{
	
	
	return ATUALIZADO_SUCESSO;
}

int ValidaData(int dia, int mes, int ano){
/* data inválida quando a variável 'validade' retorna 0*/
    int validade;

	if (mes > 12 || mes < 1 || dia < 1 || dia > 31){
		validade = 0;
	}
	else if ((dia < 1 && dia > 31) && (mes == 1||mes == 3||mes == 5||mes == 7||mes == 8||mes == 10||mes == 12)) {
		validade = 0;
	}
	else if ((dia < 1 && dia > 30) && (mes == 4|| mes == 6 || mes == 9 || mes == 11)){
        	validade = 0;
    	}
	else if (ano % 400 == 0 || (ano % 4 == 0 && ano % 100 != 0)) {
		if (mes == 2 && dia > 29) {
			validade = 0;
		}
	}
	else if (mes == 2 && dia > 28) {
		validade = 0;
	}
	return validade;
}