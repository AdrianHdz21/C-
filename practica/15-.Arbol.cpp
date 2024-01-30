// Programa para saber cuantos nodos existen
// Hernandez Mendez Adrian Alonso 1CV21

#include<iostream>
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
using namespace std;

struct Nodo{
		int dato;
		Nodo*derecha;
		Nodo*izquierda;
};
//Funciones a usar	

	Nodo *crearNodo(int);
	void AgregarNodo(Nodo*&,int);
	void MostarArbol(Nodo*,int);
	Nodo *arbol=NULL;
	
int main(){
	
char rpt;
int x,dato,contador=0;
system("color E0");
	do{
		system("color E0");
	system("CLS");
    cout<<"\n\t|--------°°°ARBOL°°°---------|";
    cout<<"\n\t|        1.AGREGAR NODO      |";
    cout<<"\n\t|    2.MOSTRAR NUMERO NODOS  |";
    cout<<"\n\t|           3.SALIR          |";
    cout<<"\n\t|----------------------------|";
    cout<<"\n\n POR FAVOR ESCOJA UNA OPCION PARA CONTINUAR: ";
    cin>>x;
    switch(x){
    	case 1:
    		system ("CLS");
            system("color E1"); 
system("color E"); 
system("color 30"); 
			system("color E"); 
    do{
    system ("CLS");
	cout<< "\n POR FAVOR INGRESE EL NODO:"; 
	cin>>dato;
	AgregarNodo(arbol,dato);                    
	cout<<"\n¿DESEA AGREGAR OTRO NODO:?(S/N):";	
	cin>>rpt;
	}while((rpt=='S')|(rpt=='s'));
                    cout<<"\n\nNODOS AGREGADOS CORRECTAMENTE\n\n";
                    system ("pause");
                    break;
                    
    	case 2:
    		system ("CLS");
    		system("color CF"); 
    		cout<<"\n\n\tSE MUESTRA EL ARBOL COMPLETO\n\n";
    		MostarArbol(arbol,contador);		
			cout<<"\n";
   		system("pause");
   		system("CLS");
   		break;
}
	}while(x!=3);
}
//Creacion de Funciones
Nodo*crearNodo(int n){
	Nodo*nuevo_nodo=new Nodo();
	nuevo_nodo->dato=n;
	nuevo_nodo->derecha=NULL;
	nuevo_nodo->izquierda=NULL;
	
	return nuevo_nodo;
}

//Funcion Agregar Nodo
void AgregarNodo(Nodo*&arbol,int n){
	if(arbol==NULL){
		Nodo*nuevo_nodo=crearNodo(n);
		arbol=nuevo_nodo;
		}
		else{
			int valorderaiz=arbol->dato;
			if(n<valorderaiz){
				AgregarNodo(arbol->izquierda,n);
			}
			else{
			  AgregarNodo(arbol->derecha,n);
  }
 }
}

//Funcion Mostar Arbol
void MostarArbol(Nodo*arbol,int contador){
	if(arbol==NULL){
				return;
	}
	else{
		MostarArbol(arbol->derecha,contador+1);
		for(int i=0;i<contador;i++){
		cout<<"  ";
	}
	cout<<arbol->dato<<endl;
	MostarArbol(arbol->izquierda,contador+1);
}
}




