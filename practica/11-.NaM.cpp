//Sumatoria de N a M
//Hernandez Mendez Adrian Alonso 1CV12
#include<stdio.h>
int main(){

    int numero,min,max, suma=0;
 printf("°Programa para sumatoria de M a N°:\n\n");
    printf("Introduzca el valor de M:");
    scanf("%d",&min);
    printf("Introduzca el valor de N:");
    scanf("%d",&max);
    for(numero=min;numero<=max;numero++){
	suma=numero+max;
}
    printf("\nLa suma de los  numeros es:%d\n",suma);
    return 0;
}

