/*Un alumno desea saber cuál será su calificación final en la materia de Algoritmos. Dicha 
calificación se compone de los siguientes porcentajes:
55% del promedio de sus tres calificaciones parciales.
30% de la calificación del examen final.
15% de la calificación de un trabajo final*/


#include<iostream>
using namespace std;

int main()

{
double nota1, nota2, nota3, promediocalif,promediocaliftot, examen, porcentexamen, trabfin, notafin;
int totalcompra;
int totaldcto;

cout<<"Para conocer la nota final ingrese las respectivas calificaciones en números mayores a cero y menores a 5"<<endl;
cout<<"¿Cuál es la nota de la primera calificación parcial?"<<endl;
cin>>nota1;
cout<<"¿Cuál es la nota de la segunda calificación parcial?"<<endl;
cin>>nota2;
cout<<"¿Cuál es la nota de la tercera calificación parcial?"<<endl;
cin>>nota3;
            promediocalif=(nota1+nota2+nota3)/3;
            promediocaliftot=promediocalif*55/100;
            cout<<"El total la nota por las tres calificaciones parciales es:"<<promediocaliftot<<endl;
            
            
            
                cout<<"¿Cuál es la calificación del examen final?"<<endl<<endl;
                cin>>examen;
                porcentexamen=examen*30/100;
                    cout<<"¿Cuál es la calificación del trabajo final?"<<endl;
                    cin>>trabfin;
                    trabfin=trabfin*15/100;
                    

    notafin=trabfin+promediocaliftot+porcentexamen;
    
    
                                if (promediocalif>5)
                              {
                                cout<<"Alguna de las notas de las calificaciones parciales que ingresó está mal, por favor revisar"<<endl;
                              }
                                  else if (examen>5)
                              {
                                cout<<"la nota del examen que ingresó está mal, por favor revisar"<<endl;
                              }
                                  else if (trabfin>5)
                              {
                                cout<<"la nota del trabajo final que ingresó está mal, por favor revisar"<<endl;
                              }
                              else{
                                  cout<<"La nota final es: "<<notafin;
                              }
system ("pause");
return 0;
}
