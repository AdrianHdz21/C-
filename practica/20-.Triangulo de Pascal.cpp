//Hernandez Mendez Adrian Alonso
//Triangulo de Pascal

#include<iostream>
using namespace std;
int factorial(int n){
	
	int resultado=1;
	for(int i=1;i<=n;i++)
	resultado*=i;
	return resultado;
		
}

int combinacion(int n,int k){
return(factorial(n))/(factorial(k)*factorial(n-k));
}

int main(){
	
	cout<<"ESTE PROGRAMA HARA UN TRIANGULO DE PASCAL DE 6 FILAS\n\n\n";
	int n=6;

	for(int i=0;i<=n;i++){
				for(int j=0;j<=i;j++){
			cout<< combinacion(i,j) << "  ";
	}
	cout << endl;
	}
	}
	
