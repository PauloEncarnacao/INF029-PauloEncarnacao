
#include <stdio.h>
#include <string.h>
#include "aluno.h"


#define TAM 3
#define CADASTRO_SUCESSO 1
#define ATUALIZADO_SUCESSO 7
#define ERRO_CADASTRO_MATRICULA 2
#define ERRO_CADASTRO_SEXO 3
#define ERRO_CADASTRO_DATA 4

//os define utilizados nas funcoes
//os include
//as funcoes

int adicionar_aluno (Aluno lista_aluno[], int qtd_alunos) {
  
        printf("Matricula: ");
        scanf("%d", &lista_aluno[qtd_alunos].matricula);
        getchar();

        if(lista_aluno[qtd_alunos].matricula <= 0){
            return ERRO_CADASTRO_MATRICULA;
        }

        printf("Nome: ");
        fgets(lista_aluno[qtd_alunos].nome, 100, stdin);
        size_t ln = strlen(lista_aluno[qtd_alunos].nome) -1;
        if(lista_aluno[qtd_alunos].nome[ln] == '\n')
            lista_aluno[qtd_alunos].nome[ln] = '\0';

        printf("Sexo: ");
        printf("Utilize as letras 'M' para masculino, 'F' para feminino e 'O' para outros");
        scanf("%c", &lista_aluno[qtd_alunos].sexo);

        lista_aluno[qtd_alunos].sexo = toupper(lista_aluno[qtd_alunos].sexo);
        if(lista_aluno[qtd_alunos].sexo != 'M' & lista_aluno[qtd_alunos].sexo != 'F'){
            return ERRO_CADASTRO_SEXO;
        }

        printf("Data de nascimento\n ");
        printf("Dia: ");
        scanf("%d", &lista_aluno[qtd_alunos].data_nascimento.dia);

        printf("Mes: ");
        scanf("%d", &lista_aluno[qtd_alunos].data_nascimento.mes);

        printf("Ano: ");
        scanf("%d", &lista_aluno[qtd_alunos].data_nascimento.ano);
        getchar();

        if (Valida_data_aluno(lista_aluno[qtd_alunos].data_nascimento.dia,   lista_aluno[qtd_alunos].data_nascimento.mes, lista_aluno[qtd_alunos].data_nascimento.ano) != 0){
            printf("Digite o CPF: ");
            fgets(lista_aluno[qtd_alunos].cpf, 12, stdin); 
            ln = strlen(lista_aluno[qtd_alunos].cpf) - 1; 
            if (lista_aluno[qtd_alunos].cpf[ln] == '\n')
            lista_aluno[qtd_alunos].cpf[ln] = '\0';
            
        } else {
            return ERRO_CADASTRO_DATA;
        }

        printf("\n");

    return CADASTRO_SUCESSO;
}

int Valida_data_aluno(int dia, int mes, int ano){
/* data inválida quando a variável 'validade' retorna 0*/
    int validade;

	if (mes > 12 || mes < 1 || dia < 1 || dia > 31){
		validade = 0;
	}
	else if ((dia < 1 && dia > 31) && (mes == 1||mes == 3||mes == 5||mes == 7||mes == 8||mes == 10||mes == 12)) {
		validade = 0;
	}
	else if ((dia < 1 && dia > 30) && (mes == 4|| mes == 6 || mes == 9 || mes == 11)){
        	validade = 0;
    	}
	else if (ano % 400 == 0 || (ano % 4 == 0 && ano % 100 != 0)) {
		if (mes == 2 && dia > 29) {
			validade = 0;
		}
	}
	else if (mes == 2 && dia > 28) {
		validade = 0;
	}
	return validade;
}

int atualizar_aluno(int matricula, int qtd_alunos, Aluno lista_aluno[]){
  
  Aluno nova_lista_aluno[];
  
  printf("DIGITE O NUMERO DE MATRICULA DO ALUNO QUE DESEJA ALTERAR");
  scanf("%d",&matricula);  

   
  for(int i=0; i<qtd_alunos; i++){
    if (matricula == lista_aluno[i].matricula){
      
       printf("Digite a nova matricula: ");
        scanf("%d",&nova_lista_aluno[i].matricula);
        getchar();
  
      

        if(lista_aluno[qtd_alunos].matricula <= 0){
            return ERRO_CADASTRO_MATRICULA;
        }
      return CADASTRO_SUCESSO;
    }
  }
}
  
  
     
       
 
