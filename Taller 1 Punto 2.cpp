/*Un vendedor recibe un sueldo base más un 10% extra por comisión de sus ventas, el vendedor desea saber cuánto dinero obtendrá por concepto de comisiones
por las tres ventas que realiza en el mes y el total que recibirá en el mes tomando en cuenta su sueldo base y comisiones.*/


#include<iostream>
using namespace std;

int main()

{
int ventas;
int comision; 
int salario=1160000;

cout<<"¿Cuantas ventas realizó en el mes?"<<endl;
cin>>ventas;

if  (ventas>0)
    {comision=(salario*10/100);
    cout<<"Con un salario de: "<<salario<<" pesos"<<endl;
    cout<<"el total de ingresos que recibirá éste mes es de "<<comision+salario<<endl;/*solo le programé una comisión por el total de las ventas y no por cada una de ellas*/
    }
    else{
    cout<<"Este mes no recibirá comision"<<endl;
    
    }


system ("pause");
return 0;
}
