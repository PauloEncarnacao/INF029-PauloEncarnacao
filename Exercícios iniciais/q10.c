#include <stdio.h>


struct tp_endereco{  // crio uma struct "estrutura" que endereço

char rua[40];
int numero;
char bairro[40];
char cidade[40];
char estado[20];
int cep;
};

struct tp_data_nascimento{ //crio uma struct data de nascimento
  int dia;
  int mes;
  int ano;

};

struct cadastro_cliente{//crio a scruct que será  responsável pelo cadastro dos clientes

  char nome_cliente[40];
  int telefone;

  struct tp_endereco endereco; //declaro a struct e uma variavel
  /*
char rua[40];
int numero;
char bairro[40];
char cidade[40];
char estado[20];
int cep;
*/
  struct tp_data_nascimento data_nascimento; //declaro a struct e uma variavel
  /*
  int dia;
  int mes;
  int ano;
  */
}cad_cliente[2];


int main ()
{


for (int i=0;i<3;i++) //entrada de dados
  {

printf("\n=====Entrada de Dados====");
printf("\nDADOS DO CLIENTE");

printf("\nNome do cliente.................");
fflush(stdin);//limpar buff do teclar o "enter"
gets(cad_cliente[i].nome_cliente);


printf("\nDigite o telefone do cliente");
scanf("%d",&cad_cliente[i].telefone);

printf("\nDia do nascimento.........");
scanf("%d",&cad_cliente[i].data_nascimento.dia);

printf("\nMes do nascimento.........");
scanf("%d",&cad_cliente[i].data_nascimento.mes);

printf("\nAno do nascimento.........");
scanf("%d",&cad_cliente[i].data_nascimento.ano);


printf("\nENDERECO DO CLIENTE");

printf("\nDigite a rua.........");
fflush(stdin);//limpar buff do teclado
gets(cad_cliente[i].endereco.rua);


printf("\nDigite o numero......");
scanf("%d",&cad_cliente[i].endereco.numero);

printf("\nDigite o bairro......");
fflush(stdin);
gets(cad_cliente[i].endereco.bairro);

printf("\nDigite a cidade.......");
fflush(stdin);
gets(cad_cliente[i].endereco.cidade);

printf("\nDigite o estado....");
fflush(stdin);
gets(cad_cliente[i].endereco.estado);

printf("\nDigite o cep.....");
scanf("%d",&cad_cliente[i].endereco.cep);

  }

for(int i=1; i<=3; i++ )//saida de dados

{
printf("\nNOME DO CLIENTE %d = %s\n",i,cad_cliente[i].nome_cliente);	
printf("TELEFONE DO CLIENTE\n",cad_cliente[i].telefone);
printf("data de nascimento: %d/%d/%d\n",cad_cliente[i].data_nascimento.dia, cad_cliente[i].data_nascimento.mes,cad_cliente[i].data_nascimento.ano);


printf("ENDERECO DO CLIENTE\n");

printf("Rua........%s\n",cad_cliente[i].endereco.rua);
printf("Numero........%d\n",cad_cliente[i].endereco.numero);
printf("Bairro........%s\n",cad_cliente[i].endereco.bairro);
printf("Cidade........%s\n",cad_cliente[i].endereco.cidade);
printf("Estado.........%s\n",cad_cliente[i].endereco.estado);
}

  return 0;
}