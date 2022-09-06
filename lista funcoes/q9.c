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
int validar_cpf(char cpf_inserido[]);//protótipo função
int validar_sexo(char sexo_inserido);//protótipo função
int validar_data(int dia_inserido, int mes_inserido, int ano_inserido);//protótipo função
int main(){

  cliente saida=cadastro_cliente();

    printf("\nNOME = %s\n",saida.nome);
    printf(" CPF = %s\n",saida.cpf);
    printf("SEXO = %c\n",saida.sexo);
    printf("data de nascimento %d/%d/%d\n",saida.nascimento.dia,saida.nascimento.mes,saida.nascimento.ano);

  
}

cliente cadastro_cliente(){
  
  cliente cadastro;//declaro a variavel cadastro do tipo cliente

    printf("DIGITE O NOME DO CLIENTE\n");
    fflush(stdin);
	fgets(cadastro.nome,40,stdin);
	
    if(validar_nome(cadastro.nome)==1)//recebendo 1 o nome digitado terá menos de 20 caracterers
    {
      printf("certo\n");
    }

    else //recebendo 0 terá mais de 20 caracteres
    {
      printf("errado\n");
    }
   
  //inseri nome e validar:aceitar até 20 caracteres 
    
    printf("DIGITE O CPF do cliente\n");
    fflush(stdin);
    fgets(cadastro.cpf,40,stdin);

  if(validar_cpf(cadastro.cpf)==1)//recebendo 1 o cpf digitado possui menos de 13 digitos
     {
      printf("certo\n");
    }
  else // recebendo 0 excede 
  {
      printf("errado\n");
  }
   
    //inseri o cpf e validar:aceitar até 13 caracteres
    
    printf("DIGITE O SEXO DO CLIENTE");
    cadastro.sexo=getchar();
  if(validar_sexo(cadastro.sexo)==1)//quando recebe 1, o char foi M,m,F,F
  {
     printf("certo\n");
  }
  else //caso não
  {
    printf("errado\n");
  }

    //inserir sexo e validar: aceitar apenas M,m,F,f
    
    printf("DIGITE DE NASCIMENTO NO FORMATO: ddmmaaaa");
    printf("\nDIA:");
    scanf("%d",&cadastro.nascimento.dia);
    printf("\nMES: ");
    scanf("%d",&cadastro.nascimento.mes);
    printf("\nANO: ");
    scanf("%d",&cadastro.nascimento.ano);

    if(validar_data(cadastro.nascimento.dia,cadastro.nascimento.mes,cadastro.nascimento.ano)==1)
    {
      printf("certo\n");
    }
  else
    {
      printf("errado\n");
    }
    
    //inserir data e validar se é uma data válida: dias meses e anos
  
  return cadastro;//recebo variavel cadastro do tipo cliente
}

int validar_nome(char nome_inserido[]){

      
      if(strlen(nome_inserido)<21)
      {
     
        return 1;
        
      }
      else
      {
          return 0;
 	}
   
    
 //função que valida o nome, ou pelo menos deveria rs kkkkk
}

int validar_cpf(char cpf_inserido[]){


 if (strlen(cpf_inserido)<13)
 {
   return 1;
 }

  else
   return 0;
}

int validar_sexo(char sexo_inserido){

  if(sexo_inserido=='M' || sexo_inserido=='m' || sexo_inserido=='F' || sexo_inserido=='f')
  {
    return 1;
  }

  else
    return 0;
}

int validar_data(int dia_inserido, int mes_inserido, int ano_inserido){

  if(dia_inserido>0 && dia_inserido<32 && mes_inserido>0 && mes_inserido<13 && ano_inserido>1900 && ano_inserido<2022)
  {
    return 1;
  }
  else
    return 0;
}