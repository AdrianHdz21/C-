//Programa para sumatoria de numeros enteros
//Hernandez Mendez Adrian Alonso 1CV12

#include <stdio.h>
#include <iomanip>
using namespace std;

int main(){
system ("color 02");
int n,s=0,i;
printf("°Programa para los numeros enteros°:\n");
printf(" Ingresa el numero: ");
scanf("%d",&n);
   for(i=1;i<=n;i++){
   s=s+i;
}
	printf("La suma de los numeros es:%d\n",s);

}
