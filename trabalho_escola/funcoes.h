#include <stdio.h>
#include <stdlib.h> 
#include <string.h>
#include <ctype.h>
#include <stddef.h>

#define CADASTRADO_SUCESSO 1
#define ATUALIZADO_SUCESSO 4
#define ERRO_CADASTRO_MATRICULA 2
#define ERRO_CADASTRO_SEXO 3
#define DATA_NASCIMENTO_INVALIDA 0

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
    printf(" 1 - Aluno\n");
    printf(" 2 - Professor\n");
    printf(" 3 - Disciplinas\n");
    printf(" 4 - Relatórios\n");
    printf("---------------------------------\n");
    printf("Digite opcao desejada: ");
    
}


void MenuSecundario(){

    printf("\n");
    printf("---------------------------------\n");
    printf(" 0 - Sair\n");
    printf(" 1 - Incluir\n");
    printf(" 2 - Atualizar\n");
    printf(" 3 - Deletar\n");
    printf("---------------------------------\n");
    printf("Digite opcao desejada: ");
    
}


void MenuRelatorio(){
    
    printf("\n");
    printf("----------------------------------\n");
    printf("---------- RELATORIOS ------------\n");
    printf(" 0 - Sair\n");
    printf(" 1 - Listar Alunos\n");
    printf(" 2 - Listar Professores\n");
    printf(" 3 - Listar Disciplinas\n");
    printf(" 4 - Listar Alunos por sexo\n");
    printf(" 5 - Listar Alunos ordenados por nome\n");
    printf(" 6 - Listar Alunos ordenados por data de nascimento\n");
    printf(" 7 - Listar Professores por sexo\n");
    printf(" 8 - Listar Professores ordenados por nome\n");
    printf(" 9 - Listar Professores ordenados por data de nascimento\n");
    printf("----------------------------------\n");
    printf("Digite opcao desejada: ");
    
}

int incluirAluno (Aluno vetor[], int qtd) {

int testar_matricula=1;
  
  while(testar_matricula>0){
     printf("Digite o número de Matrícula: ");
      scanf("%d", &vetor[qtd].matricula);
      getchar();

  testar_matricula=0;
    for(int i=0;i<qtd;i++){
        if(vetor[qtd].matricula==vetor[i].matricula){
          testar_matricula++;
        }
     }
  }
   printf("Digite o nome completo: ");
    fgets(vetor[qtd].nome, 40, stdin);
    size_t ln = strlen(vetor[qtd].nome) - 1;
    if (vetor[qtd].nome[ln] == '\n')
        vetor[qtd].nome[ln] = '\0';

  int testar_sexo=1;
  
  while(testar_sexo != 0){
      printf("Digite o sexo (M/F): ");
      fgets(vetor[qtd].sexo, 2, stdin);
      ln = strlen(vetor[qtd].sexo) -1;
      if (vetor[qtd].sexo[ln] == '\n')
          vetor[qtd].sexo[ln] = '\0';
      
     testar_sexo = strcmp(vetor[qtd].sexo,"M");
        if(testar_sexo != 0){
         testar_sexo  = strcmp(vetor[qtd].sexo,"F");
        }
      if(testar_sexo != 0){
        printf("Sexo Inválido.\n");
      }
    }
 printf("Digite a data de nascimento:\n");
    printf("Ano: ");
    scanf("%d", &vetor[qtd].data.ano);
  
    while(vetor[qtd].data.ano < 1910){
      printf("Inválido.\nAno: ");
      scanf("%d", &vetor[qtd].data.ano);
    }

    printf("Mês: ");
    scanf("%d",&vetor[qtd].data.mes);
    while(vetor[qtd].data.mes>12){
      printf("Inválido.\nMês: ");
      scanf("%d",&vetor[qtd].data.mes);
    } 

    printf("Dia: ");
    scanf("%d",&vetor[qtd].data.dia);

    if(vetor[qtd].data.mes==4||6||9||11)
    {
      while(vetor[qtd].data.dia>30){
        printf("Inválido.\nDia: ");
        scanf("%d",&vetor[qtd].data.dia);
      } 
    }
    if(vetor[qtd].data.mes==1||3||5||7||8||10||12)
    {
      while(vetor[qtd].data.dia>31){
        printf("Inválido.\nDia: ");
        scanf("%d",&vetor[qtd].data.dia);
      }
    }
    else{
      while(vetor[qtd].data.dia>29){
        printf("Inválido.\nDia: ");
        scanf("%d",&vetor[qtd].data.dia);
      }
    }
    getchar();

int testar_cpf=1;
int tam;
int tcpf=0;
  
  while(testar_cpf > 0){
      while(tam != 11){
      printf("Digite o CPF: ");
      fgets(vetor[qtd].cpf, 15, stdin);
      ln = strlen(vetor[qtd].cpf) - 1;
      if (vetor[qtd].cpf[ln] == '\n')
          vetor[qtd].cpf[ln] = '\0';
        
      tam = strlen(vetor[qtd].cpf);
        
     testar_cpf = 0;
      for(int i=0;i<qtd;i++){
        tcpf = strcmp(vetor[qtd].cpf, vetor[i].cpf);
        if(tcpf == 0){
        testar_cpf++;
        }
      }
      }
    }
  __fpurge(stdin);  
    return SUCESSO;
}



int listar_aluno(cadastro_pessoa vetor[], int qtd)
{
   printf("\n========ALUNOS CADASTRADOS========");
    for (int i = 0; i <qtd; i++)
    {
        printf("\n----------\n");
        printf("Nome: %s\n", vetor[i].nome);
        printf("Matricula: %d\n", vetor[i].matricula);
        printf("CPF: %s\n", vetor[i].cpf);
        printf("Sexo: %s\n", vetor[i].sexo);
        printf("Data: %d-%d-%d \n", vetor[i].data.dia,vetor[i].data.mes,vetor[i].data.ano);
    }
    printf("\n====================");

  __fpurge(stdin);
}
}

int atualizarAluno(Aluno lista_aluno[], int qtd_aluno, int matricula){

    return ATUALIZADO_SUCESSO;
}

void excluirAluno(Aluno lista_aluno[], int qtd_aluno, int matricula){

}

void listarAlunos(Aluno lista_aluno[], int qtd_alunos){

    int a_contador;

    for(a_contador = 0; a_contador < qtd_alunos; a_contador++) {
        printf("------\n");
        printf("Matricula: %d\n", lista_aluno[a_contador].matricula);
        printf("Nome: %s\n", lista_aluno[a_contador].nome);
        printf("Sexo: %c\n", lista_aluno[a_contador].sexo);
        printf("Data Nascimento: %d/%d/%d\n", lista_aluno[a_contador].data_nascimento.dia, lista_aluno[a_contador].data_nascimento.mes, lista_aluno[a_contador].data_nascimento.ano);
        printf("CPF: %s\n", lista_aluno[a_contador].cpf);
    }

    printf("-----\n");
}


int incluirProfessor( Professor lista_prof[], int qtd_prof) {

        printf("Matricula: ");
        scanf("%d", &lista_prof[qtd_prof].matricula);
        getchar();

        if(lista_prof[qtd_prof].matricula <= 0){
            return ERRO_CADASTRO_MATRICULA;
        }

        printf("Nome: ");
        fgets(lista_prof[qtd_prof].nome, 100, stdin);
        size_t ln = strlen(lista_prof[qtd_prof].nome) -1;
        if(lista_prof[qtd_prof].nome[ln] == '\n')
            lista_prof[qtd_prof].nome[ln] = '\0';

        printf("Sexo: ");
        printf("Utilize as letras 'M' para masculino, 'F' para feminino e 'O' para outros");
        scanf("%c", &lista_prof[qtd_prof].sexo);

        lista_prof[qtd_prof].sexo = toupper(lista_prof[qtd_prof].sexo);
        if(lista_prof[qtd_prof].sexo != 'M' & lista_prof[qtd_prof].sexo != 'F'){
            return ERRO_CADASTRO_SEXO;
        }

        printf("Data de nascimento\n");
        printf("Dia: ");
        scanf("%d", &lista_prof[qtd_prof].data_nascimento.dia);

        printf("Mes: ");
        scanf("%d", &lista_prof[qtd_prof].data_nascimento.mes);

        printf("Ano: ");
        scanf("%d", &lista_prof[qtd_prof].data_nascimento.ano);
        getchar();

        if(ValidaData(lista_prof[qtd_prof].data_nascimento.dia, lista_prof[qtd_prof].data_nascimento.mes, lista_prof[qtd_prof].data_nascimento.ano) == 0){
            
            printf("Digite o CPF: ");
            fgets(lista_prof[qtd_prof].cpf, 12, stdin); 
            ln = strlen(lista_prof[qtd_prof].cpf) - 1; 
            if (lista_prof[qtd_prof].cpf[ln] == '\n')
            lista_prof[qtd_prof].cpf[ln] = '\0';
        } else {
            return DATA_NASCIMENTO_INVALIDA;
        }

    return CADASTRADO_SUCESSO;
}

int atualizarProfessor (Professor lista_prof[], int qtd_prof, int matricula){

    
    return ATUALIZADO_SUCESSO;
}

void exlcuirProfessor(Professor lista_prof[], int qtd_prof, int matricula){


}

void listarProfessor(Professor lista_prof[], int qtd_prof){

    int p_contador;

    for(p_contador = 0; p_contador < qtd_prof; p_contador++) {
        printf("------\n");
        printf("Matricula: %d\n", lista_prof[p_contador].matricula);
        printf("Nome: %s\n", lista_prof[p_contador].nome);
        printf("Sexo: %c\n", lista_prof[p_contador].sexo);
        printf("Data Nascimento: %d/%d/%d\n", lista_prof[p_contador].data_nascimento.dia, lista_prof[p_contador].data_nascimento.mes, lista_prof[p_contador].data_nascimento.ano);
        printf("CPF: %s\n", lista_prof[p_contador].cpf);
    }
    printf("-------\n");
}

int incluirDisciplina(Disciplina lista_disci[], int qtd_disciplina){

    printf("Nome: ");
    scanf("%s", &lista_disci[qtd_disciplina].nome);
    fflush(stdin);

    printf("Codigo: \n");
    printf("Letra: ");
    scanf("%s", &lista_disci[qtd_disciplina].cod.letra);
    fflush(stdin);

    printf("Numero: ");
    scanf("%s", &lista_disci[qtd_disciplina].cod.numero);
    fflush(stdin);

    return CADASTRADO_SUCESSO;
}

void listarDisciplina(Disciplina lista_disci[], int qtd_disciplina){
    int d_contador;
    for(d_contador = 0; d_contador < qtd_disciplina; d_contador++){
        printf("--------\n");
        printf("Codigo: %s%s \n", lista_disci[d_contador].cod.letra, lista_disci[d_contador].cod.numero);
        printf("Nome: %s\n", lista_disci[d_contador].nome);
    }

    printf("-------\n");
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