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
 
    char nome[20]; 
    char  nascimento[20]; 
    char cpf[20];
    char sexo[20];
        
 
}cadastro;

cadastro validar_nome(){

  char maximo[20];
  if(cliente.nome>maximo)
  {
    printf("MAIS DE 20 CARACTERES EXCEDIDO");
    return false;
  }
  else 
    true;
}

  return 

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