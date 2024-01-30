#include<iostream>
#include<stdio.h>

using namespace std;

int main(){
int op,n1,n2,n3,n4,aux=0;	

do{
	
printf("Alumno: Hernandez Mendez Adrian Alonso Secuencia:1CV29\n\n");
printf("Programa que ordena 4 numeros\n\n");
printf("1-.Ingresar Numeros\n");
printf("2-.Ver numeros ordenados\n");
printf("3-.Salir\n\n");

printf("Escoga el numero de la opcion que desee:");
scanf("%d",&op);
switch(op){

case 1:
	printf("\nDigite el primer numero:");
	scanf("%d",&n1);
	printf("\nDigite el segundo numero:");
	scanf("%d",&n2);
	printf("\nDigite el tercer numero:");
	scanf("%d",&n3);
	printf("\nDigite el tercer numero:");
	scanf("%d",&n4);
	break;

printf("Escoga el numero de la opcion que desee:2");

printf("Datos ordenados");
	
	if(n1>n2){
	
	aux=n1;
	n1=n2;
	n2=aux;
}
if(n2>n3){
	aux=n2;
	n2=n3;
	n3=aux;
	}
	if(n3>n4){
	aux=n3;
	n3=n4;
	n4=aux;
}
if(n1>n2){
	aux=n1;
	n1=n2;
	n2=aux;
	}
	if(n2>n3){
		aux=n2;
	n2=n3;
	n2=aux;
	}
	if(n1>n2){
		aux=n1;
	n1=n2;
	n2=aux;
	}
	printf("El orden es:%d,%d,%d,%d",n1,n2,n3,n4);
	
	
}
}while(op!=3);


}




	
