/*
Questão 8: 
    Crie um programa que tenha uma função cadastrarCliente. Essa função deve ler os dados do
cliente (nome, dataNascimento, cpf, sexo) e retornar os dados do cliente. A função main deve
imprimir os dados do cliente.
*/
#include <stdlib.h>
#include <stdio.h>


typedef struct c{
 
    char nome[20]; 
   char  nascimento[20]; 
    char cpf[20];
    char sexo[20];
        
 
}cadastro;

 
cadastro cadastro_cliente(){

    cadastro cliente;

    printf("\n-----> CADASTRO DE CLIENTE <-----\n");
    printf("Digite o nome do cliente:\n");
    fflush(stdin);
    fgets(cliente.nome, 20, stdin);
    printf("Digite o CPF do cliente:\n");
    fflush(stdin);
    fgets(cliente.cpf,20, stdin);
    printf("Digite a data de nascimento do cliente:\n");
    fflush(stdin);
    fgets(cliente.nascimento, 20, stdin);
    printf("Digite o sexo do cliente:\n");
    fflush(stdin);
    fgets(cliente.sexo, 20, stdin);    
    
    return cliente;
}

 int main(){

  cadastro result = cadastro_cliente();

  printf("nome do cliente...%s",result.nome);
  printf("CPF do cliente...%s",result.cpf);
  printf("Data de nascimendo do cliente...%s",result.nascimento);
  printf("Digite o sexo do cliente...%s",result.sexo);

  
   return 0;
 }
