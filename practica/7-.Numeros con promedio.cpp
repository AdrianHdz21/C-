//Programa para calcular el promedio
//Hernandez Mendez Adrian Alonso 1CV12

#include <stdio.h>
#include <iomanip>
using namespace std;

int main()
{
system("color 02");
float n,s=0,i,n2,promedio;

printf("°Programa para calcular el promedio°:\n");
printf(" Ingresa el numero de terminos a sumar:");
scanf("%f",&n);
   for(i=1;i<=n;i++){
   	printf("Ingresa los terminos a sumar:");
scanf("%f",&n2);
   s=s+n2;
}
promedio=s/n;
	printf("La suma de los terminos es:%f\n\n",s);
	printf("El promedio de los numeros es:%f",promedio);
	return 0;
}
