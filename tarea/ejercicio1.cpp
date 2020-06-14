//Hacer un flujograma para calcular la media aritmética de 5 números.
#include <iostream>

using namespace std;

int main()
{
    float a,b,c,d,e;

    cout<<endl<<"CARCULAR LA MEDIA ARITMETICA DE 5 NUMEROS"<<endl;

    cout<<"ingrese 5 numeros"<<endl;

    cout<<"a: "<<endl;
     cin>>a;
    cout<<"b: ";
     cin>>b;
    cout<<"c: ";
     cin>>c;
    cout<<"d: ";
     cin>>d;
    cout<<"e: ";
     cin>>e;

    float operacion;
    operacion=(a+b+c+d+e)/5;

    cout<<"La media de los 5 numeros es: "<<operacion<<endl<<endl;

    return 0;
}