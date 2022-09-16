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



Aluno aluno;
int qtd_alunos=0;
Aluno lista_aluno[TAM];


int main(){//abertura main

int resultado=adicionar_aluno (lista_aluno,qtd_alunos);
  return 0;  
}

