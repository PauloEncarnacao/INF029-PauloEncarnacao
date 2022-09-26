/*2. 
Entrar com a idade de varias pessoas ate o usuário informar que deseja
parar. e imprimir o total de pessoas com menos de 21 e total de pessoas
maiores que 50*/


#include <stdio.h>

int main ()

{
int idade;
int cont1=0;
int cont2=0;

printf("Entre com a idade ");
scanf("%d",&idade);

while(idade>=1)
{	
	printf("Entre com a idade ou tecle 0 para sair ");
	scanf("%d",&idade);	
	
		
	if(idade<21)
	{
		cont1=cont1+1;
	}
	
	
	else if(idade>50)
	{
		cont2++;
	}
}

printf("o total de pessoas com menos de 21 aos =%d\n",cont1);

printf("o total de pessoas com mais de 50 anos= %d",cont2);





	return 0;
}
