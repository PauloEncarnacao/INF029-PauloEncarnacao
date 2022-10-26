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

//  Copyright © 2016 Renato Novais. All rights reserved.
// Última atualização: 07/05/2021 - 19/08/2016

// #################################################


// gcc corretor.c PauloEncarnacao20212160035.c PauloEncarnacao20212160035.h -o exe.c

#include <stdio.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <stdio_ext.h>
#include "PauloEncarnacao20212160035.h" // Substitua pelo seu arquivo de header renomeado
#include <stdlib.h>
/*
## função utilizada para testes  ##
 somar = somar dois valores
@objetivo
    Somar dois valores x e y e retonar o resultado da soma
@entrada
    dois inteiros x e y
@saida
    resultado da soma (x + y)
 */
int somar(int x, int y)
{
    int soma;
    soma = x + y;
    return soma;
}

/*
## função utilizada para testes  ##
 fatorial = fatorial de um número
@objetivo
    calcular o fatorial de um número
@entrada
    um inteiro x
@saida
    fatorial de x -> x!
 */
int fatorial(int x)
{ //função utilizada para testes
  int i, fat = 1;
    
  for (i = x; i > 1; i--)
    fat = fat * i;
    
  return fat;
}

int teste(int a)
{
    int val;
    if (a == 2)
        val = 3;
    else
        val = 4;

    return val;
}


DataQuebrada quebraData(char data[]){
  
  DataQuebrada dq;
  char sDia[3];
	char sMes[3];
	char sAno[5];
	int i;

  
  int fev=28;//mês fevereiro

  dq.valido=0;
  
	for (i = 0; data[i] != '/'; i++){
		sDia[i] = data[i];	
	}
	if(i == 1 || i == 2){ // testa se tem 1 ou dois digitos
		sDia[i] = '\0';  // coloca o barra zero no final
	}else {
		dq.valido = 0;
    
  }  


	int j = i + 1; //anda 1 cada para pular a barra
	i = 0;

	for (; data[j] != '/'; j++){
		sMes[i] = data[j];
		i++;
	}

	if(i == 1 || i == 2){ // testa se tem 1 ou dois digitos
		sMes[i] = '\0';  // coloca o barra zero no final
	}else {
		dq.valido = 0;
  }
	

	j = j + 1; //anda 1 cada para pular a barra
	i = 0;
	
	for(; data[j] != '\0'; j++){
	 	sAno[i] = data[j];
	 	i++;
	}

	if(i == 2 || i == 4){ // testa se tem 2 ou 4 digitos
		sAno[i] = '\0';  // coloca o barra zero no final
	}else {
		dq.valido = 0;
   
  }
  dq.iDia = atoi(sDia);//converte string em numero
  dq.iMes = atoi(sMes);//converte string em numero
  dq.iAno = atoi(sAno);//converte string em numero

	dq.valido = 1;
    
  if(dq.iAno % 4 == 0 && (dq.iAno % 400 == 0 || dq.iAno % 100 != 0))
  {
    fev = 29;
  };

  if(dq.iMes > 0 && dq.iMes < 12)
  {
    if(dq.iMes == 1||3||5||7||8||10||12)
    {
      if(dq.iDia <= 31 && dq.iDia > 0){
        dq.valido = 1;
      };
    }
    else if(dq.iMes == 4||6||9||11)
    {
      if(dq.iDia <= 30 && dq.iDia > 0){
        dq.valido = 1;
      };
    }
    else if(dq.iMes == 2)
    {
      if(dq.iDia <= fev && dq.iDia > 0){
        dq.valido = 1;
      }
      else{
        dq.valido = 0;
      };
    }
    else
    {
        dq.valido = 0;
    }
  }

  return dq;
}
/*
 Q1 = validar data
@objetivo
    Validar uma data
@entrada
    uma string data. Formatos que devem ser aceitos: dd/mm/aaaa, onde dd = dia, mm = mês, e aaaa, igual ao ano. dd em mm podem ter apenas um digito, e aaaa podem ter apenas dois digitos.
@saida
    0 -> se data inválida
    1 -> se data válida
 @restrições
    Não utilizar funções próprias de string (ex: strtok)   
    pode utilizar strlen para pegar o tamanho da string
 */
int q1(char data[])
{

  DataQuebrada dataQuebrada = quebraData(data);

  return dataQuebrada.valido;
}

  //quebrar a string data em strings sDia, sMes, sAno

  //DataQuebrada dataQuebrada = quebraData(data);
  //if (dataQuebrada.valido == 0) return 0;

  //printf("%s\n", data);



/*
 Q2 = diferença entre duas datas
 @objetivo
    Calcular a diferença em anos, meses e dias entre duas datas
 @entrada
    uma string datainicial, uma string datafinal. 
 @saida
    Retorna um tipo DiasMesesAnos. No atributo retorno, deve ter os possíveis valores abaixo
    1 -> cálculo de diferença realizado com sucesso
    2 -> datainicial inválida
    3 -> datafinal inválida
    4 -> datainicial > datafinal
    Caso o cálculo esteja correto, os atributos qtdDias, qtdMeses e qtdAnos devem ser preenchidos com os valores correspondentes.
 */


















/*
 Q3 = encontrar caracter em texto
 @objetivo
    Pesquisar quantas vezes um determinado caracter ocorre em um texto
 @entrada
    uma string texto, um caracter c e um inteiro que informa se é uma pesquisa Case Sensitive ou não. Se isCaseSensitive = 1, a pesquisa deve considerar diferenças entre maiúsculos e minúsculos.
        Se isCaseSensitive != 1, a pesquisa não deve  considerar diferenças entre maiúsculos e minúsculos.
 @saida
    Um número n >= 0.
 */
int q3(char texto[], char c, int cs)
{

  //Ignorar acentos.

  int i, j, tam, qtdOcorrencias = 0;
  
  tam = strlen(texto);

  if(cs != 1){
      for(i=0;i<tam;i++){
        if(texto[i] == toupper(c) || texto[i] == tolower(c)){
          qtdOcorrencias++;
        }
      }
    }
  else if(cs == 1){
    for(i=0;i<tam;i++){
      if(texto[i] == c){
        qtdOcorrencias++;
      }
    }
  }

  return qtdOcorrencias;
}
/*
 Q4 = encontrar palavra em texto
 @objetivo
    Pesquisar todas as ocorrências de uma palavra em um texto
 @entrada
    uma string texto base (strTexto), uma string strBusca e um vetor de inteiros (posicoes) que irá guardar as posições de início e fim de cada ocorrência da palavra (strBusca) no texto base (texto).
 @saida
    Um número n >= 0 correspondente a quantidade de ocorrências encontradas.
    O vetor posicoes deve ser preenchido com cada entrada e saída correspondente. Por exemplo, se tiver uma única ocorrência, a posição 0 do vetor deve ser preenchido com o índice de início do texto, e na posição 1, deve ser preenchido com o índice de fim da ocorrencias. Se tiver duas ocorrências, a segunda ocorrência será amazenado nas posições 2 e 3, e assim consecutivamente. Suponha a string "Instituto Federal da Bahia", e palavra de busca "dera". Como há uma ocorrência da palavra de busca no texto, deve-se armazenar no vetor, da seguinte forma:
        posicoes[0] = 13;
        posicoes[1] = 16;
        Observe que o índice da posição no texto deve começar ser contado a partir de 1.
        O retorno da função, n, nesse caso seria 1;
 */
int q4(char strTexto[], char strBusca[], int posicoes[30])
{
  int qtd = 0;
  
  int tam = strlen(strTexto);
  int tam2 = strlen(strBusca);

  char scop[tam2];
  int k;
  for(k=0;k<tam2;k++){
    scop[k] = 'k';
  }

  scop[0] = '\0';
  
  //printf("%s - %d\n", scop, tam2);
  
  int i, f=0, f2=0, p=0;
  
  int ini = 1, fim = tam2;

  while(tam>=tam2){
    //printf("%d - %d \n",tam, tam2); 
    for(i=0;i<tam2;i++){
      scop[i] = strTexto[f];
      f++;
    }
    //printf("- %s\n", scop);
    int a = strlen(scop);
    
    //printf("- %d - %d\n", a, tam2);
    //printf("%s - %s\n",scop, strBusca);
    
  int teste = strcmp(scop, strBusca);
    if(teste==0){
      qtd++;
      posicoes[p] = ini;
      p++;
      posicoes[p] = fim;
      p++;

      //testre 
      //printf("%d - %d - %d - %d\n", ini, fim, p, qtd);
    };
    
    ini++;
    fim++;
    
    //printf("%s\n", strTexto);   
    scop[0] = '0';
    tam--;
    f2++;
    f = f2;
  }

  return qtd;
}
/*
 Q5 = inverte número
 @objetivo
    Inverter número inteiro
 @entrada
    uma int num.
 @saida
    Número invertido
 */

int q5(int num)
{
  int cont = 1, val = num; 
  
  while(val>9){
    val = val/10;
    cont++;
  }

  char sNum[cont], invert[cont];

  printf(sNum, "%d", num);
  int i, j=cont-1;
  for(i=0;i<cont;i++){
    invert[i] = sNum[j];
    j--;
  }

  num = atoi(invert);

  return num;
}
/*
 Q6 = ocorrência de um número em outro
 @objetivo
    Verificar quantidade de vezes da ocorrência de um número em outro
 @entrada
    Um número base (numerobase) e um número de busca (numerobusca).
 @saida
    Quantidade de vezes que número de busca ocorre em número base
 */

int q6(int numerobase, int numerobusca)
{
  int qtdOcorrencias = 0, tam = 1, tam2 = 1;

  int val = numerobase;
  while(val>9){
    val = val/10;
    tam++;
  }  
  val = numerobusca;
  while(val>9){
    val = val/10;
    tam2++;
  }   

  char sbas [tam], sbus[tam2];
  sprintf(sbas, "%d", numerobase);
  sprintf(sbus, "%d", numerobusca);
  //printf("%s - %d\n", sbus, tam2);

  char scop[tam2];
  strcpy(scop, "1");
  int i, f=0;
  
  while(tam>=tam2){
    for(i=0;i<tam2;i++){
      scop[i] = sbas[f];
      f++;
    }

    //printf("%s - %s\n",scop, sbus);

    int teste = strcmp(scop, sbus);
    if(teste==0){
      qtdOcorrencias++;
    };
    scop[0] = '0';
    tam--;
  }
  
  return qtdOcorrencias;
}