//Recorrido linea del metro
//Hernandez Mendez Adrian Alonso 1CV21

#include<iostream>
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include <bits/stdc++.h>
#include <windows.h>
#include <cstdlib>

using namespace std;

struct nodo     
{
   char dato;     
   struct nodo *liga_vertice;        
   struct nodo *liga_arista; 
};


typedef struct nodo *registro;
registro sig_ver, ant_ver, cab_ver,sig_ari, ant_ari,dir1,dir2;   //apuntadores 


registro nuevo_vertice(char dat)   //añade un nuevo vertice
{
     registro reg_ver = new(struct nodo);  
     reg_ver->dato = dat;
     reg_ver->liga_vertice=NULL;
     reg_ver->liga_arista= NULL;
     return reg_ver;
}


void insertarVertice(char dat)    //funcion para insertar un nuevo vertice
{
 char sw;
 sw=0;
    ant_ver=cab_ver;
 sig_ver=cab_ver;
 while (sig_ver != NULL && sw==0)  
 {        
   if (sig_ver->dato==dat)   
   {
       sw=1;
   }
   else
   {
       ant_ver=sig_ver;  
       sig_ver=sig_ver->liga_vertice;
   }
 }
 if (sw==1)
 {
  cout << "\nVertice ya existe no se adiciona\n";
 }
 else
 {
  if (cab_ver==NULL)
  {
   cab_ver=nuevo_vertice(dat); //El primer vertice queda como cabeza
  }
  else
  {
   ant_ver->liga_vertice=nuevo_vertice(dat); //se adiciona despues del ultimo vertice
  }
  cout << "\nVertice adicionado";
 } 
}


registro recorrer_vertice(char dat)
{
 registro dir;
 dir=NULL;
 sig_ver=cab_ver;
 while (sig_ver != NULL)  //recorre el grafo buscando uno en especial
 {     
   if (sig_ver->dato==dat)   
   {
       dir=sig_ver;
   } 
   sig_ver=sig_ver->liga_vertice;
 }
 return dir;
} 


registro nueva_arista(char pes)   //añade una nueva arista al vertice
{
     registro reg_ari = new(struct nodo);  //instruccion para pedir memoria con la estructura de las aristas
     reg_ari->dato = pes;
     reg_ari->liga_arista=NULL;
     reg_ari->liga_vertice=dir2;
     return reg_ari;
}

 
void insertarArista(char dato_destino)   //funcion para insertar una nueva arista
{
 char sw2,pes;
 sw2=0;
    ant_ari=dir1;
 sig_ari=dir1;
 while (sig_ari != NULL && sw2==0)  //recorre la sublista de aristas de ese vertice
 {
   if (sig_ari->dato==dato_destino)   
   {
       sw2=1;
   }
   else
   {
       ant_ari=sig_ari;  
       sig_ari=sig_ari->liga_arista;
   }
 }
 if (sw2==1)    
 {
   cout<<"Arista ya existe no se adiciona \n\n ";
 }
 else
 {
  cout<< "Digite el peso de la arista: ";
  cin >> (pes);
  ant_ari->liga_arista=nueva_arista(pes);
 }
}


void verlista()
{
 cout<< "\nVER LISTA DE VERTICES Y SUS ARISTAS";
 sig_ver=cab_ver;
 while (sig_ver != NULL)   
 {
  cout << "\n El nodo  ";
     cout<< (sig_ver->dato );
     cout << " Tiene la siguiente aristas  ";
     sig_ari=sig_ver->liga_arista; 
     while (sig_ari != NULL)   
  { 
      cout << " ";
      dir1=sig_ari->liga_vertice;
      cout<< dir1->dato;
      sig_ari=sig_ari->liga_arista; 
     }
     sig_ver=sig_ver->liga_vertice;
 }
}

int main(){
	 cab_ver = NULL;   
char dato_origen,dato_destino; 
    char sw;
	int opc;
    char Resp,Resp1;
    char rpt;
	
	metro:
	system("color A"); 
Beep (207,100);Sleep(125);
Beep (262,100);Sleep(100);
Beep (311,100);Sleep(100);
Beep (415,100);Sleep(100);system("color C0"); 
Beep (523,100);Sleep(100);
Beep (622,100);Sleep(100);system("color A0"); 
Beep (830,100);Sleep(100);
Beep (622,100);Sleep(100);
Beep (233,100);Sleep(100);
Beep (294,100);Sleep(100);system("color C0"); 
Beep (349,100);Sleep(100);
Beep (466,100);Sleep(100);system("color A0"); 
Beep (587,100);Sleep(100);
Beep (698,100);Sleep(100);
Beep (932,100);Sleep(100);system("color C0"); 
Beep (932,100);Sleep(100);
Beep (932,100);Sleep(100);system("color A0"); 
Beep (932,100);Sleep(100);system("color 02"); 
Beep (1046,675);
                          
	cout<<"\n\t      _____________________________________________________________________________";
	cout<<"\n\t     /      |                                                                      |";
	cout<<"\n\t    /       |                                                                      |";
    cout<<"\n\t   /        |                    _________                     ____ ____           |";
	cout<<"\n\t  /_________|-------------------|    |    |-------------------|    |    |----------|";
	cout<<"\n\t /          |  RECORRIDO DE LAS |    |    | LINEAS DEL METRO  |    |    |          |";
	cout<<"\n\t|        °  |-------------------|    |    |-------------------|    |    |----------|";
	printf("\n\t %c          |                   |    |    |                   |    |    |          |",92);
    printf("\n\t  %c_________|___________________|____|____|___________________|____|____|__________|\n\n\n",92);
system("pause");    
                                                                          
	uso:
		system("color 0B");
		system ("CLS");
		cout<<"\nHola,mi nombre es Raul\n\n";
		system("pause"); 
		system ("CLS");
		cout<<"\nEl dia de hoy voy a reunirme con unos amigos en la estacion °Balderas° y mi idea era usar la Linea 1\n\n";
		system("pause"); 
		system ("CLS");
		cout<<"\nCuando iba en camino me entere que en la estacion °Merced° hubo un accidente y el metro solo llegaba a °Candelaria°\n\n";
		system("pause"); 
		system ("CLS");
		cout<<"\nAsi que tendre que usar transbordes para llegar a mi destino\n\n";
		system("pause"); 
		system ("CLS");
		cout<<"\nMe ayudaras a llegar a tiempo(S/N)?:";
		cin>>rpt;
		if(rpt=='S'|rpt=='s'){
		system ("CLS");
		cout<<"Muchas gracias por ayudarme, a continuacion se mostrara un menu que me ayudara a llegar a mi destino\n\n";
	     system("pause"); 
		 system ("CLS");
	     system("color 4F");
		
	 do{
	 	system ("CLS");
	 	system ("color 4F");
	 cout<< "\n |---------------------------|"; 
	 cout<< "\n | GRAFO RECORRIDO DEL METRO |";
	 cout<< "\n |---------------------------|"; 
     cout<< "\n |      1.CREAR VERTICE      |";
     cout<< "\n |      2.CREAR ARISTA       |";
     cout<< "\n |         3.MOSTRAR         |";
     cout<< "\n |          4.SALIR          |";
     cout<< "\n |---------------------------|"; 
     cout << "\n\nSELECCIONE OPCION: ";
     cin>>(opc);
     switch (opc){
     	case 1: 
     	system("CLS");
     	system("color 0A");
     	cout<<"A CONTINUACION SE MOSTRARAN LAS LINEAS, EL NOMBRE, LA ABREVIATURA Y EL ORDEN EN QUE SE DEBE RECORRER\n\n";
	   	system("pause");
		cout<<"\n\tPARA AYUDARME DEBERAS INGRESAR EL NUMERO QUE LE CORRESPONDE A LAS ESTACIONES\n\n";
		 system("pause");
        do{
	       	
		                                      cout<<"\t\t\t|---------------------------------------|\n";
		                                      cout<<"\t\t\t|                Linea 1                |\n";
		                                      cout<<"\t\t\t|---------------------------------------|\n";
		                                      cout<<"\t\t\t| ORDEN ||      NOMBRE     ||ABREVIATURA|\n";
		                                      cout<<"\t\t\t|   1   ||     Zaragoza    ||     Z     |\n";
		                                      cout<<"\t\t\t|   2   ||   Gomez Farias  ||     G     |\n";
		                                      cout<<"\t\t\t|   3   ||    Aeropuerto   ||     A     |\n";
		                                      cout<<"\t\t\t|   4   ||     Balbuena    ||     B     |\n";
		                                      cout<<"\t\t\t|   5   ||     Moctezuma   ||     M     |\n";
		                                      cout<<"\t\t\t|   6   ||    San Lazaro   ||     S     |\n";
		                                      cout<<"\t\t\t|   7   ||   Canderlaria   ||     C     |\n";
	                                          cout<<"\t\t\t|---------------------------------------|\n";
		                                      cout<<"\t\t\t|                Linea 4                |\n";
		                                      cout<<"\t\t\t|---------------------------------------|\n";
		                                      cout<<"\t\t\t| ORDEN ||      NOMBRE     ||ABREVIATURA|\n";
		                                      cout<<"\t\t\t|   8   ||  Fray Servando  ||     F     |\n";
                                              cout<<"\t\t\t|   9   ||      Jamaica    ||     J     |\n";
                                              cout<<"\t\t\t|---------------------------------------|\n";
                                              cout<<"\t\t\t|                Linea 9                |\n";
                                              cout<<"\t\t\t|---------------------------------------|\n";
                                              cout<<"\t\t\t| ORDEN ||      NOMBRE     ||ABREVIATURA|\n";
                                              cout<<"\t\t\t|   10  ||     Chabacano   ||     P     |\n";     
		                                      cout<<"\t\t\t|   11  || Lazaro Cardenas ||     L     |\n";
		                                      cout<<"\t\t\t|   12  ||  Centro Medico  ||     T     |\n";
		                                      cout<<"\t\t\t|---------------------------------------|\n";
		                                      cout<<"\t\t\t|                Linea 9                |\n";
		                                      cout<<"\t\t\t|---------------------------------------|\n";
		                                      cout<<"\t\t\t| ORDEN ||      NOMBRE     ||ABREVIATURA|\n";
		                                      cout<<"\t\t\t|   13  || Hospital General||     H     |\n";
		                                      cout<<"\t\t\t|   14  ||   Niños Heroes  ||     N     |\n";
		                                      cout<<"\t\t\t|   15  ||     Balderas    ||     R     |\n";
		                                      cout<<"\t\t\t|---------------------------------------|\n";
		  
                 
      
       cout << "Digite dato para vertice:";  
         cin >> dato_origen;
         insertarVertice(dato_origen);   
            cout <<"\n\nDesea continuar insertando vertices(S/N)?:";
            cin >>Resp;
             }while (Resp =='s'|Resp=='S');
             cout<<"\n\nDatos agregados correctamente\n\n";
             system ("pause");
        
         break;                                            
       	case 2: 		
       		system("CLS");
       		system("color C0");
       		cout<<"PARA SEGUIR AYUDANDOME UNE LOS VERTICES CON EL ORDEN YA DADO";
            do{
            	                              cout<<"\t\t\t|---------------------------------------|\n";
		                                      cout<<"\t\t\t|                Linea 1                |\n";
		                                      cout<<"\t\t\t|---------------------------------------|\n";
		                                      cout<<"\t\t\t| ORDEN ||      NOMBRE     ||ABREVIATURA|\n";
		                                      cout<<"\t\t\t|   1   ||     Zaragoza    ||     Z     |\n";
		                                      cout<<"\t\t\t|   2   ||   Gomez Farias  ||     G     |\n";
		                                      cout<<"\t\t\t|   3   ||    Aeropuerto   ||     A     |\n";
		                                      cout<<"\t\t\t|   4   ||     Balbuena    ||     B     |\n";
		                                      cout<<"\t\t\t|   5   ||     Moctezuma   ||     M     |\n";
		                                      cout<<"\t\t\t|   6   ||    San Lazaro   ||     S     |\n";
		                                      cout<<"\t\t\t|   7   ||   Canderlaria   ||     C     |\n";
	                                          cout<<"\t\t\t|---------------------------------------|\n";
		                                      cout<<"\t\t\t|                Linea 4                |\n";
		                                      cout<<"\t\t\t|---------------------------------------|\n";
		                                      cout<<"\t\t\t| ORDEN ||      NOMBRE     ||ABREVIATURA|\n";
		                                      cout<<"\t\t\t|   8   ||  Fray Servando  ||     F     |\n";
                                              cout<<"\t\t\t|   9   ||      Jamaica    ||     J     |\n";
                                              cout<<"\t\t\t|---------------------------------------|\n";
                                              cout<<"\t\t\t|                Linea 9                |\n";
                                              cout<<"\t\t\t|---------------------------------------|\n";
                                              cout<<"\t\t\t| ORDEN ||      NOMBRE     ||ABREVIATURA|\n";
                                              cout<<"\t\t\t|   10  ||     Chabacano   ||     P     |\n";     
		                                      cout<<"\t\t\t|   11  || Lazaro Cardenas ||     L     |\n";
		                                      cout<<"\t\t\t|   12  ||  Centro Medico  ||     T     |\n";
		                                      cout<<"\t\t\t|---------------------------------------|\n";
		                                      cout<<"\t\t\t|                Linea 9                |\n";
		                                      cout<<"\t\t\t|---------------------------------------|\n";
		                                      cout<<"\t\t\t| ORDEN ||      NOMBRE     ||ABREVIATURA|\n";
		                                      cout<<"\t\t\t|   13  || Hospital General||     H     |\n";
		                                      cout<<"\t\t\t|   14  ||   Niños Heroes  ||     N     |\n";
		                                      cout<<"\t\t\t|   15  ||     Balderas    ||     R     |\n";
		                                      cout<<"\t\t\t|---------------------------------------|\n";
			
	     cout << "Digite dato nodo origen:";
         cin >> dato_origen;
         cout << "Digite dato nodo destino:";
         cin >> dato_destino;
         dir1=recorrer_vertice(dato_origen);
         dir2=recorrer_vertice(dato_destino);
         if (dir1==NULL || dir2==NULL)
         {
           cout <<"\nNodo origen o destino no existe";
         }
         else
         {
          insertarArista(dato_destino);   
         } 
         cout <<"\nDesea continuar insertando uniones(S/N)?: ";
            cin >>Resp1;
        }while (Resp1=='s'|Resp1=='S');
        system("pause"); 
        break;
        case 3:
       	system("CLS");
       	system("color 0A");
        verlista();
        cout << "\n" << endl;
      system("pause"); 
         break;
        
}
   		}while(opc!=4);
		}
		else{
			system ("color 40");
			system ("CLS");
			printf("\nQue mal espero que despues puedas acompa%carme\n\n",164);
			cout<<"Nos vemos despues\n\n";
			exit;
		}
}



