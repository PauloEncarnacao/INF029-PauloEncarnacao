#include <stdio.h>
/*
/Protótipo de funções

///Assinatura das funções

tipo de retorno
ome
parâmetros

de grosso modo, só copiar a função sem a estrutura e colar antes da main
função:
int soma(int num1, int num2){
  return num1+num2;  
}
protótipo :
int soma(int num1, int num2);

chamada:

soma(a,b);
*/
int soma(int num1, int num2);
int main(){

    int a,b;
	printf("digite o primeiro numero\n");
	scanf("%d", &a);
	
	printf("digite o segundo numero\n");
	scanf("%d", &b);
	
	int resposta=soma(a,b);
  printf("%d",resposta);
  return 0;
}

int soma(int num1, int num2){
  return num1+num2;  
}

