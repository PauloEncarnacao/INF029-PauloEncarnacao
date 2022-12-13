#include <stdio.h>
#include <stdlib.h>


int main(){

int tamanho,*p;
  p=&tamanho;
  printf("digite o tamanho do vetor");
  scanf("%d",&tamanho);
  p=(int*)malloc(sizeof(int)*tamanho);

  if(!p){
    
    printf("falha ao alocar memoria");
    return exit;
  }
printf("%d",*p);
  
  int x=50;

 p = (int *)realloc (p, x*sizeof(int));

  printf("%d",*p);

  
    free(p);
  return 0;
}