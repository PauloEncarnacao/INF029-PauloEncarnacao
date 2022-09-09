#include <stdio.h>
#define tam 7

int main()
{
  int vet[tam]={3,1,4,7,2,6,8,5};
  int aux[tam];
  for(int i=0; i<tam-1; i++)
    {
    int menor=i;
    for(int j=i+1; j<tam; j++)
      {
      int menor=j;
        aux=vet[i];
        vet[j]=vet[menor];
        vet[menor]=aux;      
      }
      }


  
  return 0;
}