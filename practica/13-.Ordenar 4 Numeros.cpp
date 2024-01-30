#include<stdio.h>
#include<conio.h>
#include<math.h>

main()
{
int a,b,c,d,r,op;

printf("Alumno:Hernandez Mendez Adrian Alonso  Secuencia:1CV29\n\n");
printf("Programa para ordenar 4 numeros\n\n");
printf("1-.Ingresar numeros\n");
printf("2-.Ver numeros ordenados\n");
printf("3-.Salir\n\n");
printf("Escriba la opcion que desee:");
scanf("%d",&op);
switch(op){

case 1:
printf("\nIngrese el numero 1:");
scanf("%d",&a);
printf("\nIngrese el numero 2:");
scanf("%d",&b);
printf("\nIngrese el numero 3:");
scanf("%d",&c);
printf("\nIngrese el numero 4:");
scanf("%d",&d);

case 2:
printf("\n\nEscriba la opcion que desee:2\n");
printf("\n\nVer numeros ordenados\n");
if(a>b)
{
	r=a;
	a=b;
	b=r;
}

if(b>c)
{
	r=b;
	b=c;
	c=r;
}

if(c>d)
{
	r=c;
	c=d;
	d=r;
}
if(a>b)
{
	r=a;
	a=b;
	b=r;
}
if(b>c)
{
	r=b;
	b=c;
	c=r;
}
if(a>b)
{
	r=a;
	a=b;
	b=r;
}

printf("\n\nEl orden de los numeros es: %d,%d,%d,%d",a,b,c,d);

case 3:
	return 0;
}
}
