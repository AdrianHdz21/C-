// Conversion a grados Celsius y Fahrenheit
// Hernandez Mendez Adrian Alonso

#include <stdio.h>
#include <iostream>
#include <iomanip>
int main()
  {
system("color 02");
 float a,c,f,cc;
 
printf("Programa para convertir grados\n\n");
printf("1= Farentheit a Celcius\n");
printf("2= Celcius a Farenheit\n");
printf("Ingrese el valor:");
scanf("%f",&a);
if (a==1){
printf("Ingrese los grados Farenheit:");
scanf("%f",&f);
c= f-32;
cc=c/1.8;
printf("Temperatura de F a C:%f\n",cc);
}
else
{
 if (a==2){
 printf("Ingrese los grados Celsius:");
scanf("%f",&c);
f=1.8*c+32;
printf("Temperatura de C a F:%f\n",f);
}
else 
(a>=2);
 printf("Por favor ingresa la opcion 1 o 2");
 } 
}
