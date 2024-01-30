// Conversion de pesos y dolar
// Hernandez Mendez Adrian Alonso

#include  <stdio.h>
#include <conio.h>
#include <iostream>
int main()
  {
system("color 02");
 float a,p,f,d,cd,cp,s;
 
printf("Programa para convertir pesos y dolar\n\n");
printf("1= Dolar a Peso\n");
printf("2= Peso a dolar\n");
printf("Ingrese el valor:");
scanf("%f",&a);
if (a==1){
printf("Ingrese la cantidad de dolares:");
scanf("%f",&f);
printf("Digite el cambio a pesos:");
scanf("%f",&d);
cd=f*d;
printf("La conversion a pesos es:%f\n",cd);
}
else
{
 if (a==2){
 printf("Ingrese la cantidad de pesos:");
scanf("%f",&p);
 printf("Ingrese el cambio a dolares:");
scanf("%f",&s);
cp=s*p;
printf("La conversion a dolares es:%f\n",cp);
}
else 
(a>=2);
}
}
 

