// #################################################
//  Instituto Federal da Bahia
//  Salvador - BA
//  Curso de Análise e Desenvolvimento de Sistemas http://ads.ifba.edu.br
//  Disciplina: INF029 - Laboratório de Programação
//  Professor: Renato Novais - renato@ifba.edu.br

//  ----- Orientações gerais -----
//  Descrição: esse arquivo deve conter as questões do trabalho do aluno.
//  Cada aluno deve renomear esse arquivo para Aluno<MATRICULA>.c
//  O aluno deve preencher seus dados abaixo, e implementar as questões do trabalho

//  ----- Dados do Aluno -----
//  Nome: Paulo Henrique dos Santos da Encarnação  
//  email: phdsde2@gmail.com  
//  Matrícula: 20212160035  
//  Semestre: 2º

// #################################################
#ifndef TRABALHO1_PAULOENCARNACAO20212160035_H
#define TRABALHO1_PAULOENCARNACAO20212160035_H

typedef struct 
{
    int dia; 
    int mes;
    int ano;
     

} Data;

typedef struct DQ
{
    int iDia; 
    int iMes;
    int iAno;
    int valido; // 0 se inválido, e 1 se válido 

} DataQuebrada;

typedef struct Qtd
{
    int qtdDias;
    int qtdMeses;
    int qtdAnos;
    int retorno;

} DiasMesesAnos;

int somar(int x, int y); //função utilizada para testes
int fatorial(int x); //função utilizada para testes
//Data quebraData(char *data);
DataQuebrada quebraData(char data[])
int ValidaData(int dia, int mes, int ano);
int q1(char *data);
DiasMesesAnos q2(char datainicial[], char datafinal[]);
int q3(char *texto, char c, int isCaseSensitive);
int q4(char *strTexto, char *strBusca, int posicoes[30]);
int q5(int num);
int q6(int numerobase, int numerobusca);


#endif  //PAULOENCARNACAO20212160035