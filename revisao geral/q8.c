

/*8.
Criar programa que leia dados de 20 elementos inteiros. imprimir o maior
e o menor, sem ordenar, o percentual de números pares e a media dos
elementos do vetor.*/

#include <stdio.h>
#include <string.h>

#define TAM 4	
int main (){


int vet[TAM];
int i;
int maior,menor;
 int contador=0;
  int cont2=0;
  
for(i=0; i<TAM; i++)
{
    scanf("%d",&vet[i]);
     cont2=cont2+i;
  
  if(i%2==0)//encontrar quantidade numeros pares
	{
	contador=contador+1; 
	}
}
int porcentagem=(contador*100)/TAM;
int media= cont2/TAM;
printf("================================================\n");
printf(" porcentagem de numero pares= %d\n",porcentagem);
printf("================================================\n");
printf("a media do elementos = %d\n",media);
//encontra o maior valor
maior= vet[0];
for(i=1; i<TAM; i++)
{
	if(vet[i]>maior)
	{
		maior= vet[i];
	}
}

//encontra o menor valor 
menor=vet[0];
for(i=1; i<TAM; i++)
{
	if(vet[i]<menor)
	{
		menor=vet[i];
	}
}
printf("================================================\n");
printf("vetor\n:");
printf("================================================\n");
for(i=0; i<TAM; i++)
{
	printf("%d\n",vet[i]);
}

printf("================================================\n");
printf("\nMaior valor : %d",maior);
printf("================================================\n");
printf("\nMenor valor : %d",menor);

  return 0;
}
  
