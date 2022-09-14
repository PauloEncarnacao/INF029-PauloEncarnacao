#include <stdio.h>
#include <string.h>

#define CADASTRADO_SUCESSO 1
#define ERRO_CADASTRO_MATRICULA 2
#define ERRO_CADASTRO_SEXO 3
#define ERRO_DATA_DE_NASCIMENTO 4

#define TAM 3
#include "aluno.h"
#include "menus.h"

int main(){

  
int sair_menu=0;
int opcao;

while(!sair_menu)
  {
   opcao=MenuPrincipal();
    scanf("%d"opcao);
    switch(opcao)
    
    case 1:{//incluir aluno
      int resultado;
      resultado=incluir_aluno (Aluno lista_aluno[], int qtd_alunos);

        if(resultado==CADASTRO_SUCESSO);//cadastro sucesso incremente o contador aluno
        {
          qtd_alunos++;
        }

        else if{  //se não for vamos explorar as possibilidades de erro
    
        switch(resultado){
            case ERRO_CADASTRO_MATRICULA:{
                printf("matricula invalida");
                break;
              }

            case ERRO_CADASTRO_SEXO: {
                printf("sexo invalido");
                break;
              }
          }
        
        
      }
  
    
    
  }

  return 0;
}