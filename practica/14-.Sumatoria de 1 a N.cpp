//Sumatoria de N a M
//Hernandez Mendez Adrian Alonso 1CV12

#include <stdio.h>
using namespace std;

int main(){
	
float n,suma=0,i=0,m;
printf("°Programa para sumatoria de N a M°:\n\n");
printf(" Ingresa el valor de N:");
scanf("%f",&n);
printf(" Ingresa el valor de M:");
scanf("%f",&m);
    for(i=n;i<=m;i++){
suma=suma+i;
}
	printf("La sumatoria es:%f\n",suma);
	return 0;
	
}
