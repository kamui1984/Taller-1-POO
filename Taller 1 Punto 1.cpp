/*Suponga que un individuo desea invertir su capital en un banco y desea saber cuánto dinero ganara después de un mes si el banco paga a razón de 2% mensual.*/

#include<iostream>
using namespace std;

int main()

{
double  cant;
double total;    
cout<<"cuánto dinero desea ahorrar"<<endl;
cin>>cant;


total = ((cant*2)/100)+cant; 

 cout<<"el total de rendimiento después de un mes con una tasa del 2% es de "<<total<<endl;

system ("pause");
return 0;
}
