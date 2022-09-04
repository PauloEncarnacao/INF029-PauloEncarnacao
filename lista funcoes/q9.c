/*9) Evolua o programa que tem a função cadastrarCliente, para fazer as validações dos dados. Cada
validação deve ser feita em uma função diferente, conforme lista abaixo. A função cadastrarCliente
deve chamar cada uma dessas funções. A função main deve imprimir se o cadastro foi realizado
com sucesso ou se houve erro, informando onde foi o erro:
• função validarNome: recebe o nome digitado, e valida se nome tem até 20 caracteres;

• função validarSexo: recebe o sexo digitado, e valida é um sexo válido (opções: m e M para
masculino; f e F para feminino, o e O para outro).
• função validarCPF: recebe o cpf digitado, e valida é um cpf válido;
• função validarNacimento: recebe o data digitada, e valida é uma data válida.*/

#include <stdlib.h>
#include <stdio.h>


typedef struct{

    data_nascimento nascimento;
    char nome[20]; 
    char cpf[20];
    char sexo[20];
    data_nascimento dia;
    
    
 
}cadastro;


typedef struct{

  int dia;
  int mes;
  int ano;
}data_nascimento;

int validar_nome(char nome_inserido[]){


  int i=0;
   int cont_caracters;

  while(nome_inserido[i]!='\0')
    {
      cont_caracters++;
    }
  cont_caracters=cont_caracters-1;

  if(cont_caracters>20)
  {
    printf("o numero maximo de caracters eh igual a 20");

    return 1;
  }
  else{
    return 0;
  }
  
  }
int validar_cpf(char cpf_inserido[]){

  int i=0;
  int cont_caracters;

  while(cpf_inserido[i]!='\0')
    {
      cont_caracters++;
    }
  cont_caracters=cont_caracters-1;

  if(cont_caracters>11)
  {
    printf("o numero maximo de caracters eh igual a 11");

    return 1;
  }
  else{
    return 0;
  }
  
  }
int validar_sexo(char sexo_inserido[]){
    
    if(sexo_inserido=='M'|| sexo_inserido=='m'|| sexo_inserido=='F'|| sexo_inserido=='M' )
    {
        return 1;
    }
    
    else
    printf("!!!sexo invalido!!!");
    return 0;
}   
  
  
  
cadastro cadastro_cliente(){

    cadastro cliente;

    printf("\n-----> CADASTRO DE CLIENTE <-----\n");
    printf("Digite o nome do cliente:\n");
    fflush(stdin);
    fgets(cliente.nome, 20, stdin);
    validar_nome(cliente.nome);
    //chamando função que valida nome
  printf("Digite o CPF do cliente:\n");
    fflush(stdin);
    fgets(cliente.cpf,20, stdin);
    validar_cpf(cliente.cpf);
   //chamando função que valida cpf
  printf("Digite a data de nascimento do cliente:ddmmaaaa\n"); scanf("%d%d%d",&cliente.nascimento.dia,&cliente.nascimento.mes,&cliente.nascimento.ano);
    
  printf("Digite o sexo do cliente:\n");
    fflush(stdin);
    fgets(cliente.sexo, 20, stdin);    
    validar_sexo(cliente.sexo);//chamando funcao que valida sexo
    
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