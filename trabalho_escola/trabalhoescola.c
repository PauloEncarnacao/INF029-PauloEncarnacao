#include <stdio.h>
#include <stdlib.h> 
#include <string.h>
#include <ctype.h>
#include <stddef.h>
#include "funcoes.h"

#define TAMANHO 3

void MenuPrincipal();
void MenuSecundario();
void MenuRelatorio();
int incluirAluno (Aluno lista_aluno[], int qtd_alunos);
int atualizarAluno(Aluno lista_aluno[], int qtd_aluno, int matricula);
void excluirAluno(Aluno lista_aluno[], int qtd_aluno, int matricula);
void listarAlunos(Aluno lista_aluno[], int qtd_alunos);
int incluirProfessor(Professor lista_prof[], int qtd_prof);
int atualizarProfessor(Professor lista_prof[], int qtd_prof, int matricula);
void excluirProfessor(Professor lista_prof[], int qtd_prof, int matricula);
void listarProfessor(Professor lista_prof[], int qtd_prof);
int incluirDisciplina(Disciplina lista_disci[], int qtd_disciplina);
void listarDisciplina(Disciplina lista_disci[], int qtd_disciplina);
int ValidaData(int dia, int mes, int ano);

int main(){

    
    Aluno lista_aluno[TAMANHO];
    int qtd_alunos = 0;
    
    
    Professor lista_prof[TAMANHO];
    int qtd_prof = 0;
    
    
    Disciplina lista_disci[TAMANHO];
    int qtd_disciplina = 0;

    int sair_menu = 0;
    int opcao;

    while (!sair_menu){
        MenuPrincipal();
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
                            
                            resultado = incluirAluno(lista_aluno, qtd_alunos);

                                if(resultado == CADASTRADO_SUCESSO){
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

                                        case DATA_NASCIMENTO_INVALIDA: {
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

                            resultado = incluirProfessor(lista_prof, qtd_prof);

                            if(resultado == CADASTRADO_SUCESSO){
                                    printf("Cadastrado com sucesso!\n");
                                    qtd_prof++;
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

                                        case DATA_NASCIMENTO_INVALIDA: {
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
                            incluirDisciplina(lista_disci, qtd_disciplina);

                            if (resultado == CADASTRADO_SUCESSO){
                                printf("Disciplina cadastrada com sucesso!\n");
                                qtd_disciplina++;
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
                    MenuRelatorio();
                    scanf("%d", &opcao_relatorio);

                    switch (opcao_relatorio){
                        case 0: {
                            printf("Saindo Relatorios...\n");
                            sair_relatorio = 1; 
                            break;
                        }

                        case 1: {
                            printf("Listando Alunos...\n");
                            listarAlunos(lista_aluno, qtd_alunos);
                            break;
                        }

                        case 2: {
                            printf("Listando Professores...\n");
                            listarProfessor(lista_prof, qtd_prof);
                            break;
                        }

                        case 3: {
                            printf("Listando Disciplinas...\n");
                            listarDisciplina(lista_disci, qtd_disciplina);
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