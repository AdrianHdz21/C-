// Hernandez Mendez Adrian Alonso 1CV21
// Candidatos

#include<stdio.h>
#include<iostream>
using namespace std;

int main(){
float A,B,C,D;
int rpt;
float A1=194,A2=180,A3=221,A4=820,B1=48,B2=20,B3=90,B4=61,C1=206,C2=320,C3=140,C4=946,D1=45,D2=16,D3=20,D4=18,sumaA=0,sumaB=0,sumaC=0,sumaD=0,sumaTo=0;
float POA,POB,POC,POD;
system ("color 02");
system ("color 34");
system ("color E9");
system ("color 02");
cout<<"\t|--------|-----------------------|\n";
cout<<"\t|        |      CANDIDATO        |\n";
cout<<"\t|--------|-----|-----|-----|-----|\n";
cout<<"\t|DISTRITO|  A  |  B  |  C  |  D  |\n";
cout<<"\t|--------|-----|-----|-----|-----|\n";
cout<<"\t|   01   | 194 | 048 | 206 | 045 |\n";
cout<<"\t|--------|-----|-----|-----|-----|\n";
cout<<"\t|   02   | 180 | 020 | 320 | 016 |\n";
cout<<"\t|--------|-----|-----|-----|-----|\n";
cout<<"\t|   03   | 221 | 090 | 140 | 020 |\n";
cout<<"\t|--------|-----|-----|-----|-----|\n";
cout<<"\t|   04   | 820 | 061 | 946 | 018 |\n";
cout<<"\t|--------|-----|-----|-----|-----|\n";

cout<<"\n\n풡esea saber el numero de votos y el promedio por cada uno de los candidato?(S/N)---"; cout<<"Si=1/NO=0:";
scanf("%i",&rpt);
if(rpt==1)
{
sumaA=sumaA+A1+A2+A3+A4;
sumaB=sumaB+B1+B2+B3+B4;
sumaC=sumaC+C1+C2+C3+C4;
sumaD=sumaD+D1+D2+D3+D4;
sumaTo=sumaTo+sumaA+sumaB+sumaC+sumaD;
    POA=sumaA/sumaTo;
    POB=sumaB/sumaTo;
    POC=sumaC/sumaTo;
    POD=sumaD/sumaTo;
printf("\n\nLa suma del candidato A es:%f\n",sumaA);
printf("El promedio del candidato A es:%f\n\n",POA);
printf("La suma total del candidato B es:%f\n",sumaB);
printf("El promedio del candidato B es:%f\n\n",POB);
printf("La suma total del candidato C es:%f\n",sumaC);
printf("El promedio del candidato C es:%f\n\n",POC);
printf("La suma total del candidato D es:%f\n",sumaD);
printf("El promedio del candidato D es:%f\n\n",POD);
printf("La suma total de votos es:%f\n\n",sumaTo);
}
else{exit(1);}

if(POA>0.50){
system ("color A9");
system ("color BE");
system ("color EC");
cout<<"El candidato A gano,|||같FELICIDADES같|||";
system ("color BE");
system ("color EC");
system ("color BE");
system ("color F0");
}
else{
	if(POB>0.50){
cout<<"El candidato B gano,|||같FELICIDADES같|||";
system ("color A9");
system ("color BE");
system ("color EC");
system ("color BE");
system ("color EC");
system ("color BE");
system ("color F0");
}
else{
	if(POC>0.50){
cout<<"El candidato C gano,|||같FELICIDADES같|||";
system ("color A9");
system ("color BE");
system ("color EC");
system ("color BE");
system ("color EC");
system ("color BE");
system ("color F0");
}
else{
	if(POD>0.50){
	cout<<"El candidato D gano,|||같FELICIDADES같|||";
system ("color A9");
system ("color BE");
system ("color EC");
system ("color BE");
system ("color EC");
system ("color BE");
system ("color F0");
}
else{
cout<<"|||같캮ingun candidato logro obtener mas del 50% de los votos같�|||\n\n";
cout<<"El orden de candidatos por votos quedo de la siguiente manera\n\n";
printf("1-.Candidato C obtuvo:%f\n",POC);
system ("color A9");
system ("color BE");
system ("color EC");
system ("color BE");
system ("color EC");
system ("color BE");
system ("color F0");
printf("2-.Candidato A obtuvo:%f\n",POA);
printf("3-.Candidato B obtuvo:%f\n",POB);
printf("4-.Candidato D obtuvo:%f\n",POD);
system ("color A9");
system ("color BE");
system ("color EC");
system ("color BE");
system ("color EC");
system ("color BE");
system ("color 40");
}
}}}
}


