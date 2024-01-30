// Matriz
// Hernandez Mendez Adrian Alonso

#include <iostream>
#include <stdio.h>
#include <conio.h>
using namespace std;

int main(){
	int numeros[3][5];

for(int i=0;i<3;i++){
	for(int j=0;j<5;j++){
		cout<<"Digite un numero ["<<i<<"]["<<j<<"]:";
		cin>>numeros[i][j];
	}
}
	cout<<"Matriz Original 5x3\n"; cout<<"\n";
		for(int i=0;i<3;i++){
		for(int j=0;j<5;j++){
		cout<<numeros[i][j];
	}
	cout<<"\n";
}
cout<<"\n";cout<<"\n";
    cout<<"\nMatriz Invertida 3x5\n";cout<<"\n";
  
	for(int i=0;i<5;i++){
		for(int j=0;j<3;j++){
		cout<<numeros[j][i];
}    
cout<<"\n";
 }
	getch();
	return 0;
}
