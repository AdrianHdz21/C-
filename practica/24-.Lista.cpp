//Hernandez Mendez Adrian Alonso 
//Lista
#include<iostream>
#include<conio.h>
#include<stdlib.h>
#include<stdio.h>
using namespace std;
struct Nodo{
	int dato;
	Nodo*siguiente;
};

void Agregarlista(Nodo*&,int);
void mostrarlista(Nodo*);
void busquedalista(Nodo*,int);
void eliminarNodo(Nodo*&,int);

	
Nodo*lista=NULL;

int main(){
	int opc,dato,cont;
	char rpt;
	
	
	do{
		
		system("color 04");
	system("CLS");
	cout<<"\t|---------------------.|\n";
	cout<<"\t|         MENU         |\n";
	cout<<"\t|----------------------|\n";
	cout<<"\t| 1-.Agregar elementos |\n";
	cout<<"\t| 2-.Mostrar elementos |\n";
	cout<<"\t| 3-.Buscar elementos  |\n";
	cout<<"\t| 4-.Eliminar elemento |\n";
	cout<<"\t|        5-.Salir      |\n";
	cout<<"\t|----------------------|\n\n";
	
	cout<<"Por favor ingrese una opcion:";
	cin>>opc;
	switch(opc){
		case 1:
			do{
				system("color 20");
				system("CLS");
				cout<<"Ingrese el dato:";
				cin>>dato;
				Agregarlista(lista,dato);
				cout<<"\nDesea agregar otro dato(S/N):";
				cin>>rpt;
				}while((rpt=='S')|(rpt=='s'));
				cout<<"\n\nDatos agregados correctamente\n\n";
				system("pause");
				system("CLS");
				break;
		case 2:
			system("CLS");
			system("color 07");
			cout<<"Los datos en la lista son:";
		mostrarlista(lista);
		cout<<"\n\n";
		
			system("color 60");
			system("pause");
			break;	
		case 3:
			do{
			system("CLS");
			system("color 02");
			cout<<"Ingrese el numero a buscar:";
			cin>>dato;
			cout<<("\n");
		busquedalista(lista,dato);
		cout<<"Desea buscar otro numero(S/N):";
		cin>>rpt;
		}while((rpt=='S')|(rpt=='s'));
			system("pause");
			break;
		case 4:
			do{
			system("CLS");
			system("color 5E");
			cout<<"\nIngrese el dato que desea eliminar:";
			
			cin>>dato;
			eliminarNodo(lista,dato);
			cout<<"\n\nDesea eliminar otro numero(S/N):";
		cin>>rpt;
		}while((rpt=='S')|(rpt=='s'));
			cout<<"\n";
			system("pause");
			break;
			
	}
}while(opc!=5);
exit(1);

getch();
return 0;
}

void mostrarlista(Nodo *lista){
	Nodo*actual=new Nodo();
	actual=lista;
	
	while(actual!=NULL){
	cout<<actual->dato<<"->";
	actual=actual->siguiente;
	}
	
}

void Agregarlista(Nodo*&lista,int n){
Nodo*nuevo_nodo=new Nodo();
nuevo_nodo->dato=n;

Nodo*aux=lista;
Nodo*aux1;
while((aux!=NULL)&&(aux->dato<n)){
aux1=aux;
aux=aux->siguiente;
}
if(lista==aux){
lista=nuevo_nodo;
}
else{
aux1->siguiente=nuevo_nodo;
}
nuevo_nodo->siguiente=aux;


}	

void busquedalista(Nodo *lista,int n){
	bool band=false;
	Nodo *actual=new Nodo();
	actual=lista;
	while((actual!=NULL)&&(actual->dato<=n)){
		if(actual->dato==n){
			band=true;
		}
		actual=actual->siguiente;
	}
	if(band==true){
		cout<<"\n\nEl numero "<<n<<" si fue encontrado en la lista\n\n";
	}
	else{
		cout<<"\n\nEl numero "<<n<<" no ha sido encontrado en la lista\n\n";
}}

void eliminarNodo(Nodo*&lista,int n){
	if(lista!=NULL){
	Nodo*aux_borrar;
	Nodo*anterior=NULL;
    aux_borrar=lista;
    
while((aux_borrar!=NULL)&&(aux_borrar->dato!=n)){
	anterior=aux_borrar;
	aux_borrar=aux_borrar->siguiente;
	
	
}
if(aux_borrar==NULL){
	cout<<"\nElemento no encontrado";
}

else if(anterior==NULL){
	lista=lista->siguiente;
	delete aux_borrar;
	cout<<"\nElemento eliminado correctamente";
}
else{
	anterior->siguiente=aux_borrar->siguiente;
	delete aux_borrar;
	cout<<"\nElemento eliminado correctamente";
}
}
}




