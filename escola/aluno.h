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

//struct definido no aluno.h
//cabeçalho da função no aluno.h
int adicionar_aluno (Aluno lista_aluno[], int qtd_alunos);
int Valida_data_aluno(int dia, int mes, int ano);
int atualizar_aluno(Aluno new_aluno[], int qtd_alunos, Aluno lista_aluno[]);
#endif