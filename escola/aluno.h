#define TAM 3
#define CADASTRO_SUCESSO 1
#define ERRO_CADASTRO_MATRICULA 2
#define ERRO_CADASTRO_SEXO 3
#define ERRO_CADASTRO_DATA 4

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

int adicionar_aluno (Aluno lista_aluno[], int qtd_alunos);
int ValidaData(int dia, int mes, int ano);