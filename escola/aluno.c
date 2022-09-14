#include <stdio.h>
#define CADASTRADO_SUCESSO 1
#define ERRO_CADASTRO_MATRICULA 2
#define ERRO_CADASTRO_SEXO 3
#define ERRO_DATA_DE_NASCIMENTO 4

#define TAM 3


Aluno aluno; 
Aluno lista_aluno[TAM];
Aluno qtd_alunos=0;

// função de incluir aluno!!!
int incluir_aluno (Aluno lista_aluno[], int qtd_alunos) {

    //matricula do aluno
    printf("Digite a matricula do aluno");
    scanf("%d",lista_aluno[qtd_alunos].mastricula);
    if(lista_alunos[qtd_alunos].matricula<0)
    {
      return ERRO_CADASTRO_MATRICULA; 
    }
  
    //Nome do aluno
    printf("Digite o nome do aluno: ");
    fflush(stdin);
    fgets(lista_aluno[qtd_alunos].nome,stdin,40);
      size_t ln = strlen(lista_aluno[qtd_alunos].nome) - 1; //size_t = unsigned integer type
      if (lista_aluno[qtd_alunos].nome[ln] == '\n')
      lista_aluno[qtd_alunos].nome[ln] = '\0';
      
    printf("Digite o sexo do aluno");
    fflush(stdin);
    getchar(lista_aluno[qtd_alunos].sexo);

  if(lista_aluno[qtd_alunos].sexo!='M'|| lista_aluno[qtd_alunos].sexo!='m'||                                        lista_aluno[qtd_alunos].sexo!='F'|| lista_aluno[qtd_alunos].sexo!='f'||                                     lista_aluno[qtd_alunos].sexo!='O'
      || lista_aluno[qtd_alunos].sexo!='o'||)
    {
      return ERRO_CADASTRO_SEXO;
    }

  printf("\n");

  return CADASTRO_SUCESSO;
  
}
  

