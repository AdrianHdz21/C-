// Matriz
// Hernandez Mendez Adrian Alonso

#include <iostream>
#include <stdio.h>
#include <conio.h>
using namespace std;

int main(){
	int numeros[100][100],filas,columnas;

cout<<"Digite el numero de filas:";
cin>>filas;
cout<<"Digite el numero de columnas:";
cin>>columnas;

for(int i=0;i<filas;i++){
	for(int j=0;j<columnas;j++){
		cout<<"Digite un numero ["<<i<<"]["<<j<<"]:";
		cin>>numeros[i][j];
	}
}
	for(int i=0;i<filas;i++){
		for(int j=0;j<columnas;j++){
		cout<<numeros[i][j];
	}
	cout<<"\n";
}
	getch();
	return 0;
}
