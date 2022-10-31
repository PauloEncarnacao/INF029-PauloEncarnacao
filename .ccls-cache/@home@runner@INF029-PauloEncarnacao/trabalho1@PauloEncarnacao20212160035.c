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


Data quebraData(char *data){
    char dia[3];
	char mes[3];
	char ano[5];
	int barra=0, k=0, i=0;

	Data datainteira;

	while(data[i]!='\0'){
        if(data[i]=='/'){
            barra++;
            k=0;
        }
        if(barra==0){
            dia[k]=data[i];
            dia[k+1]='\0';
            k++;
        }
        else if(barra == 1){
            if(data[i]=='/'){
                i++;
            }
            mes[k]=data[i];
            mes[k+1]='\0';
            k++;
        }
        else if(barra == 2){
            if(data[i]=='/'){
                i++;
            }
            ano[k]=data[i];
            ano[k+1]='\0';
            k++;
        }
        i++;
    }

	datainteira.dia=atoi(dia);
	datainteira.mes=atoi(mes);
	datainteira.ano=atoi(ano);

    if (datainteira.ano>=0 && datainteira.ano<=18){
        datainteira.ano += 2000;
    }
    else if (datainteira.ano>=19 && datainteira.ano<=99){
        datainteira.ano += 1900;
    }

    return datainteira;
}

int ValidaData(int dia, int mes, int ano){
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
int q1(char *data){
    int data_valida = 1;

    Data data_quebrada = quebraData(data);
    data_valida = ValidaData(data_quebrada.dia,data_quebrada.mes,data_quebrada.ano);

    return (data_valida);
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
/*
 Q3 = encontrar caracter em texto
 @objetivo
    Pesquisar quantas vezes um determinado caracter ocorre em um texto
 @entrada
    uma string texto, um caracter c e um inteiro que informa se é uma pesquisa Case Sensitive ou não. Se isCaseSensitive = 1, a pesquisa deve considerar diferências entre maiúsculos e minúsculos.
        Se isCaseSensitive != 1, a pesquisa não deve  considerar diferências entre maiúsculos e minúsculos.
 @saida
    Um número n >= 0.
 */
int q3 (char *texto, char c, int isCaseSensitive){
    int cont = 0; //contador
    int tam = 0; //tamanho
	int qtdOcorrencias = 0;

	tam = strlen(texto); // variavel tam recebe tamnho do string "texto"

	if (isCaseSensitive == 1){  
		cont = 0;

		while(cont <= tam){
			if(c == texto[cont]){
				qtdOcorrencias++; // incremento ocorrencias 
			}
		cont++; //incremento no contador
 		}
	}
	else if (isCaseSensitive != 1){
				cont = 0; // atribuo 0 ao cont
		while(cont <= tam){
			if(texto[cont] == toupper(c) || texto[cont] == tolower(c)){ 
				qtdOcorrencias++;
			}
		    	cont++;
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
int q4(char *strTexto, char *strBusca, int posicoes[30]){
  
    int iCont, jCont, kCont, xCont, yCont, Cont01, Cont02, Cont3;
    int qtdOcorrencias; 
    
    xCont = yCont = jCont = kCont = Cont01 = Cont02 = qtdOcorrencias = 0; //todos recebem 0

    if(strlen(strBusca) == 1){
        for(iCont = 0; strTexto[iCont]!='\0'; iCont++){
            if(strTexto[iCont] == strBusca[0])
                Cont01++;
        }
        return Cont01;
    }

    for(iCont = 0; strTexto[iCont]!='\0'; iCont++){
        Cont01 = 0;
    if(strTexto[iCont] == -95 || strTexto[iCont] == -87 || strTexto[iCont] == -83 || strTexto[iCont] == -77 || strTexto[iCont] == -70 || strTexto[iCont] == -93 || strTexto[iCont] == -89)
       Cont3++;
        if(strTexto[iCont] == strBusca[jCont]){
            for(xCont = iCont + 1, kCont = jCont + 1; strBusca[kCont] == strTexto[xCont]; xCont++ ,kCont++)
                Cont01++;
        }
        if(Cont01 == strlen(strBusca)-1){
            posicoes[yCont++] = (iCont + 1)- Cont3;
            posicoes[yCont++] = xCont - Cont3;
            qtdOcorrencias++;
        }
    }
    return qtdOcorrencias;
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
  
int numinvert=0;int i=1;

  do{

    numinvert= numinvert*10;
    numinvert = numinvert + (num % (i * 10 ) - num % i)/ i;

    i = i*10;
  
    
    }while(i<= num);


    return numinvert;
  
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

int q6(int numerobase, int numerobusca){

  
  int contadorBase,Cont1,Cont2,control,contadorBusca;
    int qtdOcorrencias = 0;
    int Base[300];
    int Busca[300];
    contadorBase = Cont1 = Cont2 = control = contadorBusca = 0;

	while(numerobase >= 0){
        //preenchendo vetor de int numerobase
		if(numerobase < 10 && numerobase >= 0 ){
			Base[contadorBase] = numerobase;
			break;
		}
		else{
			Base[contadorBase] = numerobase % 10;
			numerobase = numerobase / 10;
			contadorBase++;
		}
	}
	while(numerobusca >= 0){
        //preenchendo vetor numerobusca
		if(numerobusca < 10 && numerobase >= 0){
			Busca[contadorBusca] = numerobusca;
			break;
		}
		else{
			Busca[contadorBusca] = numerobusca % 10;
			numerobusca = numerobusca / 10;
			contadorBusca++;
		}
	}
	//buscando ocorrencias 
	for (Cont1 = 0; Cont1 <= contadorBase; ++Cont1){
		if(contadorBusca == 0){
			if (Busca[0] == Base[Cont1]){
				qtdOcorrencias++;
			}
		}
		else{
			if(Busca[Cont2] == Base[Cont2]){
				control = 1;
				Cont2++;
			}
			else if (Busca[Cont2] != Base[Cont1]){
				control = 0;
				Cont2 = 0;
			}
			if(control == 1 && Cont2 == contadorBusca){
				control = 0;
				Cont2 = 0;
				qtdOcorrencias++;
			}
		}
	}
    return qtdOcorrencias;
}