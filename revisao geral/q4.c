/*4. 
Chico tem 1.50m e cresce 2 centímetros por ano, enquanto Juca tem 1.10m e
cresce 3 cm por ano. construir um programa que calcule e imprima
quantos anos serão necessários para Juca seja maior que Chico;*/

#include <stdio.h>

int main ()
{
	
float chico=1.50;
float juca=1.10;

int anos=0;
while(chico>juca)
{

chico=chico+0.02;
juca=juca+0.03;
anos++;	
	
printf("Altura do chico em [%d] anos %.2f Altura do juca em [%d] %.2f\n",anos,chico,anos,juca);	
	
}	
	
printf("em %d anos, Juca sera maior que Chico",anos);
	
	return 0;
}
