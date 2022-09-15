#include <stdio.h>
int MenuPrincipal(){
    
    printf("\n");
    printf("---------------------------------\n");
    printf("------ MENU PRINCIPAL -----------\n");
    printf(" 0 - Sair\n");
    printf(" 1 - Aluno\n");
    printf(" 2 - Professor\n");
    printf(" 3 - Disciplinas\n");
    printf(" 4 - Relatórios\n");
    printf("---------------------------------\n");
    printf("Digite opcao desejada: ");
    int opcao;
    scanf("%d",&opcao);
    
    return opcao;
    
}

void MenuSecundario(){

    printf("\n");
    printf("---------------------------------\n");
    printf(" 0 - Sair\n");
    printf(" 1 - Incluir\n");
    printf(" 2 - Atualizar\n");
    printf(" 3 - Deletar\n");
    printf("---------------------------------\n");
    printf("Digite opcao desejada: ");
    
    
}