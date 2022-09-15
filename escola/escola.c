#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "menu.h"
#include "aluno.h"

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

Aluno aluno;
int qtd_alunos=0;
Aluno lista_aluno[TAM];


int main(){//abertura main

int resultado=adicionar_aluno (lista_aluno,qtd_alunos);
  return 0;  
}

