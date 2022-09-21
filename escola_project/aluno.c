#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "structs.h"
#include "aluno.h"

#define TAM 50
#define SUCESSO 1

int cadastro_aluno(cadastro_pessoa vetor[], int qtd)
{
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