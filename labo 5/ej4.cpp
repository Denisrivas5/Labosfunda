//LA FECHA UN DIA DESPUES 

#include <iostream>
using namespace std;

int dmes(int);

int main(){

    int a,m,d;

    cout<<endl<<"LA HORA UN DIA DESPUES."<<endl;
    cout<<endl<<"Ingresa el dia: ";
    cin>>d;
    cout<<endl<<"Ingresa el mes: ";
    cin>>m;
    cout<<endl<<"Ingresa el anio: ";
    cin>>a;

    d++;
    if (d > dmes(m))
    d=1;
    m++;

    if(m>12){
    m=1;
    a++;
    }

    cout<<endl<<"la fecha un dia despues es "<<d<<" / "<<m<<" / "<<a<<endl;
}

//funcion para los meses que tengan 30 y 28 dias
int dmes(int m){

    int dias=31;

    if(m==4||m==6||m==9||m==11){
    dias=30;
    }
    else if(m==2){
    dias=28;
    }   
    return dias;
}
