//Adrian Alonso Hernandez Mendez 1CV21
//Tienda con programacion estructurada

#include <time.h> 
#include <stdio.h>
#include <iostream>
using namespace std;
int main(){

int opc;
int subt,desc,total,tv,com,celu;
char nom[1000],rpt;
time_t tiempoahora;
	time(&tiempoahora);
	struct tm *mitiempo = localtime(&tiempoahora);
int valtv=800;
int valcom=900;
int valcelu=700;
	do{
		system ("CLS");
printf("\n\nIngrese el nombre del cliente:");
scanf("%s",&nom);
fflush(stdin);
printf("\n\n");
system("CLS");
system ("color 20" );
 printf("|--------------------------------|\n");
 printf("|     Menu de Productos          |\n");	
 printf("|1-.Television Samsung-PRECIO 800|\n");
 printf("|2-.Computadora HP-PRECIO 900    |\n");
 printf("|3-.Celular Xiaomi-PRECIO 700    |\n");
 printf("|--------------------------------|\n");
 
 printf("Por favor escoja una opcion:");
 scanf("%d",&opc);
 
 switch(opc){
 	case 1:
 		system ("CLS");
 		system("color E1");
 		printf("Usted comprara Television Samsung:\n\n");
 		printf("Ingrese la cantidad del producto que desea comprar:");
 		scanf("%d",&tv);
 	if(tv==1){
	 
 	subt=valtv*tv;
 	system ("CLS");
 	system("color 47");
 	printf("El cliente es:%s\n",nom);
 	printf("No hay descuento\n");
 	printf("El costo individual es:%d\n",valtv);
 	printf("La cantidad que compro fue:%d\n",tv);
 	printf("El costo total es:%d\n",subt);
	cout<<"FECHA";;printf("%s", ctime(&tiempoahora));
    printf("FECHA ABREVIADA:");;printf(" %d/%d1/%d \n", mitiempo->tm_mday, mitiempo->tm_mon,mitiempo->tm_year+1900);
 }
 else{
  if(tv==2){
  	system ("CLS");
 	system("color 47");
 	subt=valtv*tv;
 	desc=subt*0.10;
 	total=subt-desc;
 	printf("El cliente es:%s\n",nom);
 	printf("Se aplicara descuento del 10%\n");
 	printf("El costo individual es:%d\n",valtv);
 	printf("La cantidad que compro fue:%d \n",tv);
 	printf("El precio sin descuento es de:%d\n",subt);
 	printf("El  descuento es:%d\n",desc);
 	printf("El nuevo costo es:%d\n",total);
	cout<<"FECHA:";;printf("%s", ctime(&tiempoahora));
    printf("FECHA ABREVIADA:");;printf(" %d/%d1/%d \n", mitiempo->tm_mday, mitiempo->tm_mon,mitiempo->tm_year+1900);
 }
 else
 {
   if(tv<=4&&tv>=3){
  	system ("CLS");
 	system("color 47");
 	subt=valtv*tv;
 	desc=subt*0.20;
 	total=subt-desc;
 	printf("El cliente es:%s\n",nom);
 	printf("Se aplicara descuento del 20%\n");
 	printf("El costo individual es:%d\n",valtv);
 	printf("La cantidad que compro fue:%d\n",tv);
 	printf("El precio sin descuento es de:%d\n",subt);
 	printf("El  descuento es:%d\n",desc);
 	printf("El nuevo costo es:%d\n",total);
	cout<<"FECHA:";;printf("%s", ctime(&tiempoahora));
    printf("FECHA ABREVIADA:");;printf(" %d/%d1/%d \n", mitiempo->tm_mday, mitiempo->tm_mon,mitiempo->tm_year+1900);
}
else(tv>5);
system ("CLS");
 	system("color 47");
	subt=valtv*tv;
 	desc=subt*0.40;
 	total=subt-desc;
 	printf("El cliente es:%s\n",nom);
 	printf("Se aplicara descuento del 40%\n");
 	printf("El costo individual es:%d\n",valtv);
 	printf("La cantidad que compro fue:%d\n",tv);
 	printf("El precio sin descuento es de:%d\n",subt);
 	printf("El  descuento es:%d\n",desc);
 	printf("El nuevo costo es:%d\n",total);
	cout<<"FECHA:";;printf("%s", ctime(&tiempoahora));
    printf("FECHA ABREVIADA:");;printf(" %d/%d1/%d \n", mitiempo->tm_mday, mitiempo->tm_mon,mitiempo->tm_year+1900);
}}
    break;
    
case 2:
	system("CLS");
	system("color E1");
 	printf("\n\nUsted comprara Computadora HP\n\n");
 		printf("Ingrese la cantidad del producto que desea comprar:");
 		scanf("%d",&com);
 	if(com==1){
	 
 	subt=valcom*com;
 	system ("CLS");
 	system("color 47");
 	printf("El cliente es:%s\n",nom);
 	printf("No hay descuento\n");
 	printf("El costo individual es:%d\n",valcom);
 	printf("La cantidad que compro fue:%d\n",com);
  	printf("El costo total es:%d\n",subt);
	cout<<"FECHA:";;printf("%s", ctime(&tiempoahora));
    printf("FECHA ABREVIADA:");;printf(" %d/%d1/%d \n", mitiempo->tm_mday, mitiempo->tm_mon,mitiempo->tm_year+1900);
 }
 else{
  if(com==2){
  	system ("CLS");
 	system("color 47");
 	subt=valcom*com;
 	desc=subt*0.10;
 	total=subt-desc;
 	printf("El cliente es:%s\n",nom);
 	printf("Se aplicara descuento del 10%\n");
 	printf("El costo individual es:%d\n",valcom);
 	printf("La cantidad que compro fue:%d \n",com);
 	printf("El precio sin descuento es de:%d\n",subt);
 	printf("El  descuento es:%d\n",desc);
 	printf("El nuevo costo es:%d\n",total);
	cout<<"FECHA:";;printf("%s", ctime(&tiempoahora));
    printf("FECHA ABREVIADA:");;printf(" %d/%d1/%d \n", mitiempo->tm_mday, mitiempo->tm_mon,mitiempo->tm_year+1900);
 }
 else
 {
 
  if(com>=3&&com<=4){
  	system ("CLS");
 	system("color 47");
 	subt=valcom*com;
 	desc=subt*0.20;
 	total=subt-desc;
 	printf("El cliente es:%s\n",nom);
 	printf("Se aplicara descuento del 20%\n");
 	printf("El costo individual es:%d\n",valcom);
 	printf("La cantidad que compro fue:%d\n",com);
 	printf("El precio sin descuento es de:%d\n",subt);
 	printf("El  descuento es:%d\n",desc);
 	printf("El nuevo costo es:%d\n",total);
	cout<<"FECHA:";;printf("%s", ctime(&tiempoahora));
    printf("FECHA ABREVIADA:");;printf(" %d/%d1/%d \n", mitiempo->tm_mday, mitiempo->tm_mon,mitiempo->tm_year+1900);
}
else(com>=5);
system ("CLS");
 	system("color 47");
	subt=valcom*com;
 	desc=subt*0.40;
 	total=subt-desc;
 	printf("El cliente es:%s\n",nom);
 	printf("Se aplicara descuento del 40%\n");
 	printf("El costo individual es:%d\n",valcom);
 	printf("La cantidad que compro fue:%d\n",com);
 	printf("El precio sin descuento es de:%d\n",subt);
 	printf("El  descuento es:%d\n",desc);
 	printf("El nuevo costo es:%d\n",total);
	cout<<"FECHA:";;printf("%s", ctime(&tiempoahora));
    printf("FECHA ABREVIADA:");;printf(" %d/%d1/%d \n", mitiempo->tm_mday, mitiempo->tm_mon,mitiempo->tm_year+1900);
}}
 		break;
 		
 		case 3:
 			system("CLS");
	system("color E1");
 			printf("\n\nUsted comprara Celular Xiaomi\n\n");
 		printf("Ingrese la cantidad del producto que desea comprar:");
 		scanf("%d",&celu);
 		
 	if(celu==1){
 	subt=valcelu*celu;
 	system ("CLS");
 	system("color 47");
 	printf("El cliente es:%s\n",nom);
 	printf("No hay descuento\n");
 	printf("El costo individual es:%d\n",valcelu);
 	printf("La cantidad que compro fue:%d\n",celu);
  	printf("El costo total es:%d\n",subt);
	cout<<"FECHA:";;printf("%s", ctime(&tiempoahora));
    printf("FECHA ABREVIADA:");;printf(" %d/%d1/%d \n", mitiempo->tm_mday, mitiempo->tm_mon,mitiempo->tm_year+1900);
 }
 else{
  if(celu==2){
  	system ("CLS");
 	system("color 47");
 	subt=valcelu*celu;
 	desc=subt*0.10;
 	total=subt-desc;
 	printf("El cliente es:%s\n",nom);
 	printf("Se aplicara descuento del 10%\n");
 	printf("El costo individual es:%d\n",valcelu);
 	printf("La cantidad que compro fue:%d \n",celu);
 	printf("El precio sin descuento es de:%d\n",subt);
 	printf("El  descuento es:%d\n",desc);
 	printf("El nuevo costo es:%d\n",total);
	cout<<"FECHA:";;printf("%s", ctime(&tiempoahora));
    printf("FECHA ABREVIADA:");;printf(" %d/%d1/%d \n", mitiempo->tm_mday, mitiempo->tm_mon,mitiempo->tm_year+1900);
 }
 else
 {
 
  if(celu>=3&&celu<=5){
  	system ("CLS");
 	system("color 47");
 	subt=valcelu*celu;
 	desc=subt*0.20;
 	total=subt-desc;
 	printf("El cliente es:%s\n",nom);
 	printf("Se aplicara descuento del 20%\n");
 	printf("El costo individual es:%d\n",valcelu);
 	printf("La cantidad que compro fue:%d\n",celu);
 	printf("El precio sin descuento es de:%d\n",subt);
 	printf("El  descuento es:%d\n",desc);
 	printf("El nuevo costo es:%d\n",total);
	cout<<"FECHA:";;printf("%s", ctime(&tiempoahora));
    printf("FECHA ABREVIADA:");;printf(" %d/%d1/%d \n", mitiempo->tm_mday, mitiempo->tm_mon,mitiempo->tm_year+1900);
}
else(celu>=6);
system ("CLS");
 	system("color 47");
	subt=valcelu*celu;
 	desc=subt*0.40;
 	total=subt-desc;
 	printf("El cliente es:%s\n",nom);
 	printf("Se aplicara descuento del 40%\n");
 	printf("El costo individual es:%d\n",valcelu);
 	printf("La cantidad que compro fue:%d\n",celu);
 	printf("El precio sin descuento es de:%d\n",subt);
 	printf("El  descuento es:%d\n",desc);
 	printf("El nuevo costo es:%d\n",total);
	cout<<"FECHA:";;printf("%s", ctime(&tiempoahora));
    printf("FECHA ABREVIADA:");;printf(" %d/%d1/%d \n", mitiempo->tm_mday, mitiempo->tm_mon,mitiempo->tm_year+1900);
}}
break;
}

printf(" \n\nDesea empezar una nueva compra(S/N):");
scanf("%s",&rpt);
system ("CLS");
}while((rpt=='S'|rpt=='s'));
printf("\t같같같Gracias por comprar en esta tienda같같같");
printf("\t같같같VUELVA PRONTO같같같");
}
