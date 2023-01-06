#ifndef TRABALHO2_ESTRUTURAVETORES_H
#define TRABALHO2_ESTRUTURAVETORES_H

// enumeracoes (enum) ajudam a deixar o codigo mais legivel, possibilitando que voce de significado
// as suas constantes, para mais informacoes https://en.cppreference.com/w/c/language/enum
// as constantes do enum em sua inicialização vao representar o numero resultante da soma do valor da
// constante anterior mais 1, caso nao haja valor algum na primeira constante ela vai ser inicializada com 0
enum { TODAS_ESTRUTURAS_AUXILIARES_VAZIAS = -11, NOVO_TAMANHO_INVALIDO, NUMERO_INEXISTENTE,
       ESTRUTURA_AUXILIAR_VAZIA, TAMANHO_INVALIDO, SEM_ESPACO_DE_MEMORIA, POSICAO_INVALIDA,
       JA_TEM_ESTRUTURA_AUXILIAR, SEM_ESTRUTURA_AUXILIAR, SEM_ESPACO, SUCESSO };

#define TAMANHO 10

typedef struct vetorPrincipal {
    int *auxiliar; //ponteiro para estrutura auxliliar
    int  tamanho; // tamanho para alocar a estrutura auxiliar
    int quantidade; //contador de elementos no vetor
}PRINCIPAL;

int criarEstruturaAuxiliar(PRINCIPAL *vetor_principal, int tamanho, int posicao); //
int inserirNumeroEmEstrutura(PRINCIPAL *vetor_principal, int valor, int posicao); //
int excluirNumeroDoFinaldaEstrutura(int posicao);
int excluirNumeroEspecificoDeEstrutura(int valor, int posicao);
int getDadosEstruturaAuxiliar(PRINCIPAL *vetor_principal, int posicao);
int getDadosOrdenadosEstruturaAuxiliar(int posicao, int auxiliar[]);
int getDadosDeTodasEstruturasAuxiliares(PRINCIPAL *vetor_principal, int vetorAux[]);
int getDadosOrdenadosDeTodasEstruturasAuxiliares(int auxiliar[]);
int modificarTamanhoEstruturaAuxiliar(PRINCIPAL *vetor_principal, int posicao, int novoTamanho);
int getQuantidadeElementosEstruturaAuxiliar(PRINCIPAL *vetor_principal, int posicao);
int ehPosicaoValida(int posicao);
void inicializar(PRINCIPAL *vetor_principal);
void finalizar(PRINCIPAL *vetor_principal);
int verificaEstrutura(PRINCIPAL *vetor_principal, int posicao);
int menu();

/*
criarEstruturaAuxiliar {vetor[posicao].auxiliar = malloc (tamanho);}
*/