#include<iostream>
#include<stdio.h>
#include<conio.h>
#include<cstdlib>
using namespace std;


struct nodo{ int nro;
             struct nodo*sgte;
           };
struct cola{
             struct nodo*adelante;
             struct nodo*atras;
             };
void iniciar(struct cola&);
void insertar(cola &cola1, cola &cola2, int n);
void insert(struct cola&, int n);
int remove(struct cola&); 
void empty(struct cola);
int main(void)
{int n,i,opc;

 struct cola q;
 struct cola r;
 char rpt,alumno[200]; 
 iniciar(q);
 iniciar(r);
 
 	menu:
 	system("CLS");	
	system("color E1"); 
system("color E2"); 
system("color 10"); 
  system("color 0A");
   cout<<"\n\n";
   cout<<"\t|-------------------------|"<<endl;
   cout<<"\t|       Computadoras      |"<<endl;
   cout<<"\t|-------------------------|"<<endl;
   cout<<"\t|  1.Agregar computadora  |"<<endl;
   cout<<"\t|  2.Retirar computadora  |"<<endl;
   cout<<"\t|    3.Ver computadoras   |"<< endl;
   cout<<"\t|         4.Salir         |" <<endl;
   cout<<"\t|-------------------------|"<<endl;
   cout<<"\n\nIngrese opcion:";
   cin>>opc;
   
   switch(opc){
   	
     do{
    case 1 : 
    system("CLS");
	system("color E1"); 
system("color E"); 
system("color 30"); 
         	 cout<<"\n\nPor favor ingrese su nombre y la hora de entrada :";
             cin>>n;
             insert(q,n);
               cout<<"\n\n¿Desea agregar otra computadora(S/N)?:";
              scanf("%s",&rpt);
           }while((rpt=='S')|(rpt=='s'));
             cout<<"\n\nElementos agregados correctamente"<<endl<<endl;
             system("pause");
              system("CLS");
             goto menu;
                  
    case 2: 
    system("CLS");
	system("color E1"); 
system("color E2"); 
system("color 10"); 
			system("color 20");
	if(q.adelante!=NULL){
	               {n=remove(q);
            cout<<"\n\nComputadora liberada"<<endl;}
            system("pause");
            goto menu;
        }
            else
            cout<<"\nNinguna computadora esta siendo usada"<<endl;
            system("pause");
            goto menu;
    case 3: 
	system("CLS");
	system("color E1"); 
system("color E6"); 
system("color 30"); 
if(q.adelante==0&&q.atras==0){
	cout<<"Computadoras disponibles\n\n"<<endl;
	system("pause");
	goto menu;
	}
	else(q.adelante!=0&&q.atras!=0);
	 		 
			system("color 70");
			cout<<"\t|-----------------------------|"<<endl;
			cout<<"\t|°°° Computadoras ocupadas °°°|"<<endl;
			cout<<"\t|-----------------------------|"<<endl;
            empty(q);
            system("pause");
         goto menu;
     
           
    
    system("CLS");
 }while(opc!=4);
}



void iniciar(struct cola&q)
{q.adelante=NULL;
 q.atras=NULL;
}
void insertar(cola &cola1,cola &cola2, int n)
{
 nodo *aux;
   bool conf=false;
 aux=cola1.adelante;
 while(aux!=NULL)
   {
    if(aux->nro==n)
      {
       conf=true;
         break;
      }
    aux=aux->sgte;
 }
   if(conf==false)
   {
    insert(cola1,n);
   }
   else
   {
    insert(cola2,n);
   }
}

void insert(struct cola &q, int n)
{
struct nodo *p;
p=new (struct nodo);
p->nro=n;
p->sgte=NULL;
if(q.adelante==NULL)
 q.adelante=p; 
else
 (q.atras)->sgte=p;
q.atras=p;
}

int remove(struct cola &q)
{
struct nodo *p;
p=q.adelante;
int n=p->nro;
q.adelante=(q.adelante)->sgte;
delete(p);
return n;
}

void empty(struct cola q)
{
 struct nodo *p;
   p=q.adelante;
 while(p!=NULL)
   {
  cout<<p->nro<<endl;
  p=p->sgte;
 }
}
