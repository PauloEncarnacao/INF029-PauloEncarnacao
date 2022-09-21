#ifndef STRUCTS_H_
#define STRUCTS_H_

typedef struct data
{
    int dia;
    int mes;
    int ano;
} datanasc;

typedef struct pessoas{
    char nome[40];
    char sexo[2];
    char cpf[15];
    datanasc data;
    int matricula;
}cadastro_pessoa;

typedef struct disciplina{
    char nomeDis[30];
    char codDis[10];
    char profDis[40];   
} cadastro_disciplina;

#endif