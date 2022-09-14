typedef struct dma {
    int dia;
    int mes;
    int ano;
}  Data;
// struct dados dos alunos
typedef struct dados_aluno {
    int matricula;
    char nome[100];
    char sexo;
    struct dma data_nascimento;
    char cpf[12];
} Aluno;


int incluir_aluno (Aluno lista_aluno[], int qtd_alunos);