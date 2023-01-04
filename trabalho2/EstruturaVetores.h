#ifndef TRABALHO2_ESTRUTURAVETORES_H
#define TRABALHO2_ESTRUTURAVETORES_H

// enumeracoes (enum) ajudam a deixar o codigo mais legivel, possibilitando que voce de significado
// as suas constantes, para mais informacoes https://en.cppreference.com/w/c/language/enum
// as constantes do enum em sua inicialização vao representar o numero resultante da soma do valor da
// constante anterior mais 1, caso nao haja valor algum na primeira constante ela vai ser inicializada com 0
enum { TODAS_ESTRUTURAS_AUXILIARES_VAZIAS = -11, NOVO_TAMANHO_INVALIDO, NUMERO_INEXISTENTE,
       ESTRUTURA_AUXILIAR_VAZIA, TAMANHO_INVALIDO, SEM_ESPACO_DE_MEMORIA, POSICAO_INVALIDA,
       JA_TEM_ESTRUTURA_AUXILIAR, SEM_ESTRUTURA_AUXILIAR, SEM_ESPACO, SUCESSO };

// Estrutura Principal
typedef struct principal{
	int *aux; // VAI APONTAR PARA A ESTRUTURA AUXILIAR
	int tamAux; // TAMANHO DA ESTRUTURA AUXILIAR
	int qtd; // ELE VAI CONTAR A QUANTIDADE DE ELEMENTOS no VETOR
}Principal;

typedef struct reg {
    int conteudo;
    struct reg *prox;
} No;


struct tam
{
  int limite;
  int ocupado;
};
typedef struct tam tams;

int criarEstruturaAuxiliar(int pos, int tam);
int inserirNumeroEmEstrutura(int pos, int valor);
int excluirNumeroDoFinaldaEstrutura(int pos);
int excluirNumeroEspecificoDeEstrutura(int pos, int valor);
int getDadosEstruturaAuxiliar(int pos, int vetorAux[]);
int getDadosOrdenadosEstruturaAuxiliar(int pos, int vetorAux[]);
int getDadosDeTodasEstruturasAuxiliares(int vetorAux[]);
int getDadosOrdenadosDeTodasEstruturasAuxiliares(int vetorAux[]);
int modificarTamanhoEstruturaAuxiliar(int pos, int novoTamanho);
int getQuantidadeElementosEstruturaAuxiliar(int pos);
No *montarListaEncadeadaComCabecote();
void getDadosListaEncadeadaComCabecote(No *inicio, int vetorAux[]);
void destruirListaEncadeadaComCabecote(No **inicio);

void inicializar();
void finalizar();
void dobrar(int *x);

#endif  // TRABALHO2_ESTRUTURAVETORES_H