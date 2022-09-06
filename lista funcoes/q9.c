/*9) Evolua o programa que tem a função cadastrarCliente, para fazer as validações dos dados. Cada
validação deve ser feita em uma função diferente, conforme lista abaixo. A função cadastrarCliente
deve chamar cada uma dessas funções. A função main deve imprimir se o cadastro foi realizado
com sucesso ou se houve erro, informando onde foi o erro:
• função validarNome: recebe o nome digitado, e valida se nome tem até 20 caracteres;

• função validarSexo: recebe o sexo digitado, e valida é um sexo válido (opções: m e M para
masculino; f e F para feminino, o e O para outro).
• função validarCPF: recebe o cpf digitado, e valida é um cpf válido;
• função validarNacimento: recebe o data digitada, e valida é uma data válida.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


typedef struct{
  int dia,mes,ano;
}data_de_nascimento;

typedef struct{
  char nome[40];
  char cpf[15];
  char sexo;
  data_de_nascimento nascimento;
}cliente;


cliente cadastro_cliente();//protótipo da função
int validar_nome(char nome_inserido[]);//protótipo função

int main(){

  cliente saida=cadastro_cliente();

    printf("\nNOME = %s\n",saida.nome);
    printf(" CPF = %s\n",saida.cpf);
    printf("SEXO = %c\n",saida.sexo);
    printf("data de nascimento %d/%d/%d\n",saida.nascimento.dia,saida.nascimento.mes,saida.nascimento.ano);

  
}

cliente cadastro_cliente(){
  
  cliente cadastro;//declaro a variavel cadastro do tipo cliente

    printf("DIGITE O NOME DO CLIENTE");
    fflush(stdin);
    fgets(cadastro.nome,40,stdin);

    //inserir nome e validar:aceitar até 20 caracteres 
    
    while(validar_nome(cadastro.nome)==0)//se o retorno for 1, continuar com o cpf
    {
    printf("DIGITE O NOME DO CLIENTE NOVAMENTE COM ATE 20 CARACTERES");
    fflush(stdin);
    fgets(cadastro.nome,40,stdin);
    }
    if(validar_nome(cadastro.nome)==1)
    {
    printf("DIGITE O CPF do cliente");
    fflush(stdin);
    fgets(cadastro.cpf,40,stdin);
    }
    
   
    //inserir cpf e validar:aceitar até 11 caracteres
    /*
    printf("DIGITE O SEXO DO CLIENTE");
    cadastro.sexo=getchar();
    */
    //inserir sexo e validar: aceitar apenas M,m,F,f
    /*
    printf("DIGITE DE NASCIMENTO NO FORMATO: ddmmaaaa");
    printf("\nDIA:");
    scanf("%d",&cadastro.nascimento.dia);
    printf("\nMES: ");
    scanf("%d",&cadastro.nascimento.mes);
    printf("\nANO: ");
    scanf("%d",&cadastro.nascimento.ano);
    */
    //inserir data e validar se é uma data válida: dias meses e anos
  
  return cadastro;//recebo variavel cadastro do tipo cliente
}

int validar_nome(char nome_inserido[]){

  int i=0;
  int cont=0;

  while(nome_inserido[i]!='\0')
    {
     
     cont++;  
      if(cont<22)
      {
     
        return 1;
        
      }
      else
          return 0;
     
   
    }
 
}
