//Programa para obtener los numeros primos
//Hernandez Mendez Adrian Alonso 1CV12

#include <stdio.h>
#include <iomanip>
#include<conio.h>
using namespace std;

int main()
{
system("color 02");
int a=0,i,N;
printf("~~|°°Programa para obtener si un numero es primo o no°°|~~\n\n");
printf("Ingrese un numero:");
scanf("%d",&N);
for(i=N; i>0; i--){
if (N%i==0){
a=a+1;
}}
if(a==2){
system("color 07");
printf("El numero es primo\n\n");
}
else
system("color 04");
printf("El numero no es primo\n\n");

system("pause");
return 0;
}


