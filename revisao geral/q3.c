
/*3-Dado um pais A, com 5.000.000 de habitantes e uma taxa de natalidade de
3% ao ano, e um pais B com 7.000.000 de habitantes e uma taxa de
natalidade de 2% ao ano. calcular e imprimir o tempo necessário para que
a população do pais A ultrapasse a população do pais B*/
#include <stdio.h>

int main ()
{
	
int a=5000000;
int b=7000000;
int anos=0;

while(a<b) 
{


a = a + (0.03*a);
b = b+ (0.02*b);

anos++;
	
}


printf("em %d anos, a poupulacao A sera maior que a populacao B=",anos);

	return 0;
}
