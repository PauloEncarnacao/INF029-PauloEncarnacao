#include <stdio.h>
#include <string.h>
#include "funcoes.h"

	int opcao;
	int sair=0;
	//incializo o menu com o while

int main()
{
	while(!sair){
		printf("\nDigite a opcao: \n ");
		printf("0 - Sair\n");
    	printf("1 - Inserir Aluno\n");
   		printf("2 - Listar Alunos\n");
   		printf("3 - Inserir Professor\n");
   		printf("4 - Listar Professores\n");
   		printf("5 - Inserir Disciplna\n");
   		printf("6 - Listar Disciplinas\n");
    	scanf("%d",&opcao);
    
    switch(opcao)
    {
    	case 1:
    		cadastro_aluno();
			break;
		case 2:
			printa_aluno();
			break;
			
		case 3:
			cadastro_professor();
			break;
		case 4:
			printa_professor();
			break;
		case 5:
			cadastro_disciplina();
			break;
		case 6:
			printa_disciplina();
			break;
	}
}
}


