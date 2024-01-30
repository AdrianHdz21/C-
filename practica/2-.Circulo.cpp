//Area de un circulo
// Hernandez Mendez Adrian Alonso


#include <stdio.h>
#include <iostream>
using namespace std;

int main()

{
float radio,pi,area;
pi=3.1415;
	
	printf("°Programa para area del circulo°: \n");
	printf("Ingresa el radio:");
    scanf("%f",&radio);

	area=pi*radio*radio;
	
	printf("El resultado es: %f\n\n",area);
	
	system ("PAUSE");
	return 0;
	
}
