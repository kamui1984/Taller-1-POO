/*Una tienda ofrece un descuento del 15% sobre el total de la compra y un cliente desea saber 
cuánto deberá pagar finalmente por su compra.*/


#include<iostream>
using namespace std;

int main()

{
int descuento;
int totalcompra; 
int totaldcto;

cout<<"¿Cuál es el valor de la compra?"<<endl;
cin>>totalcompra;

    descuento=(totalcompra*15)/100;
    totaldcto=totalcompra-descuento;
    cout<<"el total del descuento aplicado es de: "<<descuento<<" pesos"<<endl;
    cout<<"el total de la compra con el 15% de descuento es "<<totaldcto<<" pesos"<<endl;
    
    
system ("pause");
return 0;
}
