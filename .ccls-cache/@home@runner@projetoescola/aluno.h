typedef struct data
{
    int dia;
    int mes;
    int ano;
} datanasc;

typedef struct pessoas{
    char nome[40];
    char sexo[2];
    char cpf[15];
    datanasc data;
    int matricula;
}Aluno;
int main_aluno(Aluno listaAluno[], int qtdAluno);