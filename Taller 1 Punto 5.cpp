/*Un maestro desea saber qué porcentaje de hombres y que porcentaje de mujeres hay en un grupo 
de estudiantes.*/


#include<iostream>
using namespace std;

int main()

{
int  estud, hombres, mujeres, porcmuj, porchom;
    
cout<<"¿cuántos estudiantes hay en el grupo"<<endl;
cin>>estud;
cout<<"cuántos estudiantes son hombres"<<endl;
cin>>hombres;
mujeres=estud-hombres;		

porcmuj=(mujeres*100)/estud; 
porchom=(hombres*100)/estud;

 cout<<"el porcentaje de mujeres es del "<<porcmuj<<" % "<<endl;
  cout<<"el porcentaje de hombres es del "<<porchom<<" % "<<endl;

system ("pause");
return 0;
}