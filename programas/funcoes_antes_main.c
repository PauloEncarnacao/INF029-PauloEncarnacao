#include <stdio.h>

/*ESTRUTURA DAS FUNÇÕES
Tipo de retorno
nome
parametros de entrada(opcional)
retorno
implementação
*/

//as funções declaradas antes da main, só precisam ser chamadas na main pelo nome e passando parâmetros (se tiver)
/* int funcao_exemplo(){	//declaração!!!!
	
	printf("exemplo");
}

int main(){

	funcao_exemplo(); //chamanda na função main

}
*/


void imprima_mensagem(){ //declaro função sem retorno do tipo void(vazio) 	
	
	printf("SOMANDO DOIS NUMEROS\n");
	
	//funções do tipo void servem apenas para executar uma instrução
}

int soma(int num1, int num2)
{
	
	return num1+num2;

		
}

char proxima_letra(char letra){
	
	printf("%c",letra+1);
}
int main(){
	
	imprima_mensagem();//chamando função sem retorno
int a,b;
	printf("digite o primeiro numero\n");
	scanf("%d", &a);
	
	printf("digite o segundo numero\n");
	scanf("%d", &b);
	
	int resposta=soma(a,b);//chamando função e atribuindo o retorno a uma variavel
	printf("Reposta = %d",resposta);
	
	char letra2='B';//declaro a variavel
	
	proxima_letra(letra2);//passo como parâmetro
	
	proxima_letra('X');//chamo a função passo o parâmetro o parametro diretamente
		
		//obs: ambas assumem o valor de letra

return 0;
}