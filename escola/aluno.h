#ifndef ALUNO_H
#define ALUNO_H

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

#endif