//Programa para sumatoria de pares
//Hernandez Mendez Adrian Alonso 1CV12

#include <stdio.h>
using namespace std;

main(){

int n,s=0,i,c=0;
printf("°Programa para numeros pares°:\n");
printf("Ingresa el numero: ");
scanf("%d",&n);
   for(i=1;i<=n;i++){
 if (i% 2 == 0 ){ 
   s=s+i;
   c=c+1;
   }
}
	printf("La suma de los numeros es:%d\n",s);
	printf("En el numero dado hay tantos numeros pares:%d\n",c);
	
}
