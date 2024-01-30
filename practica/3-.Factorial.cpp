//Programa para calcular el factorial de un numero
// Hernandez Mendez Adrian Alonso 1CV12

#include <stdio.h>
using namespace std;

void factorial();
int main(){
	factorial();
}
void factorial(){
int numero,i,factorial=1;
printf("Programa para calcular el factorial de un numero-Examen: \n\n");
printf("Ingresa un numero entero:");
scanf("%d",&numero);
for (i = 1;i <= numero; i++){
factorial = factorial*i;
} 
   printf("El resultado es: %d\n",factorial);
    
 }

