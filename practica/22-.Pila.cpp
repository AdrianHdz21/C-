//Hernandez Mendez Adrian Alonso 1CV21
#include<iostream>
#include<cstdlib>
using namespace std;

struct nodo{
    char let;
    struct nodo *sgte;
};

typedef struct nodo *Puntero;

class Pila{
    public:
        Pila(void);
        void Apilar(int );
        int Desapilar(void );
        void tope(void);
        bool PilaVacia(void);
        void MostrarPila(void);
        void DestruirPila(void);

    private:
        Puntero Tope;

};
Pila::Pila(void){
    Tope=NULL;
}

bool Pila::PilaVacia(void){
    if(Tope==NULL)
        return true;
    else
        return false;
}

void Pila::Apilar(int x){

    Puntero p_aux;
    p_aux=new(struct nodo);
    p_aux->let=x;
    p_aux->sgte=Tope;
    Tope=p_aux;

}


int Pila::Desapilar(void){
    int x;
    Puntero p_aux;
    if(Tope==NULL)
        cout<<"\n\n\tLa Pila esta Vacia.";
    else{
        p_aux=Tope;
        x=p_aux->let;
        Tope=Tope->sgte;
        delete(p_aux);
    }
    return x;
}

void Pila::MostrarPila(void){
    Puntero p_aux;
    p_aux=Tope;

    while(p_aux!=NULL){
        cout<<"\t\t\t "<<p_aux->let<<endl;
        p_aux=p_aux->sgte;
    }
}

void menu(void)
{
 
 system("color C0");
    cout<<"\n\t|---------°°°PILA°°°---------|\n\n";
    cout<<" \n1.AGREGAR A LA PILA "<<endl;
    cout<<" \n2.ELIMINAR DE LA PILA "<<endl;
    cout<<" \n3.MOSTRAR PILA    "<<endl;
    cout<<" \n4.SALIR        "<<endl;
    cout<<"\n POR FAVOR ESCOJA UNA OPCION PARA CONTINUAR: ";
   
}

int main(void ){
system("color E1"); 
system("color E"); 
system("color 30"); 
     Pila pila;
    char x,rpt;
    int op;

    do
    {
        menu();  cin>> op;

        switch(op)
        {
            case 1: 
             system ("CLS");
            system("color E1"); 
system("color E"); 
system("color 30"); 
			system("color E"); 
	

do{
	cout<< "\n POR FAVOR INGRESE NUMERO PARA LA PILA: "; cin>> x;
                    pila.Apilar(x);
      
	cout<<"\nDesea agregar otro numero a pila(S/N):";	
	cin>>rpt;
	}while((rpt=='S')|(rpt=='s'));
                    cout<<"\n\nNumeros agregados correctamente en la pila.\n\n";
                    break;

            case 2:
            	 system ("CLS");
            	system("color D1"); 
system("color E"); 
system("color 30");
system("color 60");
                    if(pila.PilaVacia()==true)
                        cout<<"\n\n\tLa Pila esta Vacia.";
                    else{
                        x = pila.Desapilar( );
                        cout<<"\n\n\tNumero ( "<<x<<" ) eliminado de la PILA\n";
                        }
                    break;


            case 3:
            	 system ("CLS");
                    cout << "\n\n\t\t MOSTRANDO LA PILA\n\n";
                    if(pila.PilaVacia()!=true)
                        pila.MostrarPila(  );
                    else
                        cout<<"\n\n\tLa Pila esta Vacia."<<endl;
                    break;


                     }

        cout<<endl<<endl;
        system("pause");
        system("cls");

    }while(op!=4);

return 0;
}
