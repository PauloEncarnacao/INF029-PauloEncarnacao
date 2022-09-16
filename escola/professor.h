#ifndef ALUNO_H
#define ALUNO_H

 typedef struct dma{
  int dia;
  int mes;
  int ano;
}Data;

typedef struct dados_professor{
int matricula;
char nome[40];
char cpf[15];
char sexo;
Data data_nascimento;
}Professor;

//struct definido no aluno.h
//cabeçalho da função no aluno.h
int adicionar_professor (Aluno lista_professor[], int qtd_professores);
int Valida_data_professor(int dia, int mes, int ano);
int atualizar_professor(int matricula, int qtd_professores, Aluno lista_professor[]);
#endif