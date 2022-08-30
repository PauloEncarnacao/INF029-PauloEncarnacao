/*6. Armazenar nomes e nota 1, 2, de 15 alunos. calcular e armazenar a media.
armazenar tambem a situação do aluno: AP ou RP. imprimir uma listagem
contendo nome, notas, media e a situação de cada aluno.*/
  
#include <stdio.h>
#include <string.h>


struct aluno_situacao{
  char nome[50];
  float nota1;
  float nota2;
  float media;
}alunos[14];

int main()
{

int media;
    for(int i=0; i<15; i++)
      {
printf("digite o nome do aluno ");
fgets(alunos[i].nome,50,stdin);

printf("digite a nota 1  ");
scanf("%f",&alunos[i].nota1);

printf("digite a nota 2  ");
scanf("%f",&alunos[i].nota2);
getchar();

alunos[i].media=(alunos[i].nota1 + alunos[i].nota2)/2;
// media
printf("media do aluno=%.2f  \n",alunos[i].media);

      }
      
   for (int j=0; j<15; j++)
   {
     
     printf("o aluno %s\n",alunos[j].nome);
     printf("obteve a media = %.2f\n",alunos[j].media);
     if(alunos[j].media>=7)
     {
     
     printf("aprovado");     
 }
 
 else
 printf("reprovado");
   }   
      
  return 0;
  
}