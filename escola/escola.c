#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "menu.h"
#include "aluno.h"


#define TAM 3
#define CADASTRO_SUCESSO 1
#define ATUALIZADO_SUCESSO 7
#define ERRO_CADASTRO_MATRICULA 2
#define ERRO_CADASTRO_SEXO 3
#define ERRO_CADASTRO_DATA 4

Aluno aluno;
int qtd_alunos=0;
Aluno lista_aluno[TAM];
int matricula;

int main(){
   int sair_menu = 0;
    int opcao;

    while (!sair_menu){
        opcao=MenuPrincipal();
        scanf("%d", &opcao);

        switch (opcao){
            case 0 :{
                printf("Finalizando...\n");
                sair_menu = 1;
                break;
            }

            case 1: {
                int sair_aluno = 0;
                int opcao_aluno;

                printf("----> ALUNO <---- \n");

                while (!sair_aluno){
                  
                    MenuSecundario();
                    scanf("%d", &opcao_aluno);

                    switch (opcao_aluno){
                        case 0: {
                            printf("Finalizando Aluno...\n");
                            sair_aluno = 1;
                            break;
                        }

                        case 1: {
                            int resultado;
                            printf(" Incluir...\n");

                            resultado = adicionar_aluno(lista_aluno, qtd_alunos);

                                if(resultado == CADASTRO_SUCESSO){
                                    printf("Cadastrado com sucesso!\n");
                                    qtd_alunos++;
                                } else {
                                    switch(resultado) {
                                        case ERRO_CADASTRO_MATRICULA:{
                                            printf("Matrícula Inválida");
                                            break;
                                        }
                                        case ERRO_CADASTRO_SEXO:{
                                            printf("Sexo Inválido");
                                            break;
                                        }

                                        case ERRO_CADASTRO_DATA: {
                                            printf("Data de nascimento inválida");
                                            break;
                                        }

                                        default:{
                                            printf("Erro desconhecido!");
                                        }
                                    }

                                printf("Não foi possível fazer o cadastro\n"); 

                                }

                            printf("\n");

                            break;
                        }

                        case 2: {
                            printf("Atualizar...\n");
                            int atualizar=atualizar_aluno(matricula,qtd_alunos,lista_aluno);
                            break;
                        }

                        case 3: {
                            printf("Deletar...\n");
                            break;
                        }

                        default:{
                            break;
                        }
                    }
                }

                break;
            }

            case 2: {
                int sair_professor = 0;
                int opcao_prof;

                printf("----> PROFESSOR <----\n");

                while (!sair_professor){
                    MenuSecundario();
                    scanf("%d", &opcao_prof);

                    switch (opcao_prof){
                        case 0: {
                            printf("Finalizando Professor...\n");
                            sair_professor = 1;
                            break;
                        }

                        case 1: {
                            int resultado;

                            printf(" Incluir...\n");

                            //resultado = incluirProfessor(lista_prof, qtd_prof);

                            if(resultado == CADASTRO_SUCESSO){
                                    printf("Cadastrado com sucesso!\n");
                                   // qtd_prof++;
                                } else {
                                    switch(resultado) {
                                        case ERRO_CADASTRO_MATRICULA:{
                                            printf("Matrícula Inválida");
                                            break;
                                        }

                                        case ERRO_CADASTRO_SEXO:{
                                            printf("Sexo Inválido");
                                            break;
                                        }

                                        case ERRO_CADASTRO_DATA: {
                                            printf("Data de nascimento inválida");
                                            break;
                                        }

                                        default:{
                                            printf("Erro desconhecido!");
                                        }
                                    }

                                printf("Não foi possível fazer o cadastro\n"); 

                                }

                            printf("\n");

                            break;
                        }

                        case 2: {
                            printf("Atualizar...\n");
                            break;
                        }

                        case 3: {
                            printf("Deletar...\n");
                            break;
                        }

                        default:{
                            printf("Opcao incorreta, tente novamente...\n");
                            break;
                        }
                    }
                }

                break;
            }

            case 3: {

                int sair_disciplina = 0;
                int opcao_disci;

                printf("----> DISCIPLINA <----\n");

                while (!sair_disciplina){
                    MenuSecundario();
                    scanf("%d", &opcao_disci);

                    switch (opcao_disci){
                        case 0: {
                            printf("Finalizando Disciplina...\n");
                            sair_disciplina = 1;
                            break;
                        }

                        case 1: {
                            int resultado; 
                            printf(" Incluir...\n");
                            //ncluirDisciplina(lista_disci, qtd_disciplina);

                            if (resultado == CADASTRO_SUCESSO){
                                printf("Disciplina cadastrada com sucesso!\n");
                               // qtd_disciplina++;
                            }
                            break;
                        }

                        case 2: {
                            printf("Atualizar...\n");
                            break;
                        }

                        case 3: {
                            printf("Deletar...\n");
                            break;
                        }

                        default:{
                            printf("Opcao incorreta, tente novamente...\n");
                            break;
                        }
                    }
                }

                break;
            }

            case 4: {
                int sair_relatorio = 0;
                int opcao_relatorio;

                printf("----> RELATÓRIOS <----\n");

                while (!sair_relatorio){
                   // MenuRelatorio();
                   // scanf("%d", &opcao_relatorio);

                    switch (opcao_relatorio){
                        case 0: {
                            printf("Saindo Relatorios...\n");
                            sair_relatorio = 1; 
                            break;
                        }

                        case 1: {
                            printf("Listando Alunos...\n");
                           // listarAlunos(lista_aluno, qtd_alunos);
                            break;
                        }

                        case 2: {
                            printf("Listando Professores...\n");
                           // listarProfessor(lista_prof, qtd_prof);
                            break;
                        }

                        case 3: {
                            printf("Listando Disciplinas...\n");
                          //  listarDisciplina(lista_disci, qtd_disciplina);
                            break;
                        }

                        case 4: {
                            printf("Listar Alunos por sexo\n");
                            printf("Página em construção\n");
                            break;
                        }

                        case 5: {
                            printf("Listar Alunos ordenados por nome\n");
                            printf("Página em construção\n");
                            break;
                        }

                        case 6: {
                            printf("Listar Alunos ordenados por data de nascimento\n");
                            printf("Página em construção\n");
                            break;
                        }

                        case 7: {
                            printf("Listar Professores por sexo\n");
                            printf("Página em construção\n");
                            break;
                        }

                        case 8: {
                            printf("Listar Professores ordenados por nome\n");
                            printf("Página em construção\n");
                            break;
                        }

                        case 9: {
                            printf("Listar Professores ordenados por data de nascimento\n");
                            printf("Página em construção\n");
                            break;
                        }

                        default:{
                            printf("Opcao incorreta, tente novamente...\n");
                            break;
                        }

                    }
                }

                break;
            }

            default: {
                printf("Opcao incorreta, tente novamente!\n");
                break;
            }
        }
    }
  
  return 0;  
}

  