/*1.
Na usina de Angra dos Reis, os técnicos analisam a perda de massa de um
material radioativo. Sabendo-se que este perde 25% de sua massa a cada
30 segundos, criar um programa que imprima o tempo necessário para que a
massa deste material se torne menor que 0,10 gramas. O programa pode
calcular o tempo para varias massas.*/

#include <stdio.h>

int main()

{
	
	float massa;
	float tempo=0;
	
	printf("Informe a massa do material:");
	scanf("%f",&massa);


	for(massa; massa>0.10; massa=massa-50)
	
	{
	printf("%.2f\n",massa);
	tempo= tempo+30;
	}
	
	printf("%2.f segundos",tempo);

return 0;
}
