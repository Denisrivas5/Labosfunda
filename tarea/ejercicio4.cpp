
#include <iostream>

using namespace std;

int main()
{
float a,b,c,d;
int x,y;

cout<<endl<<"CALCULO DE IVA SEGUN PAIS."<<endl;

cout<<"Seleccione su pais: "<<endl;
cout<<"1) El Salvador."<<endl;
cout<<"2) Guatemala."<<endl;
cout<<"3) Honduras."<<endl;
cout<<"4) España."<<endl;
cin>>x;
cout<<"ingrese la cantidad de dinero"<<endl;
cin>>y;

switch(x)
{
    case 1:
    a= y*0.13;
    cout<<"Su costo de iva es: $"<<a<<endl;
    cout<<"TOTAL: $"<<y+a<<endl;
    break;

    case 2:
    b=y*0.09;
    cout<<"Su costo de iva es: Q"<<b<<endl;
    cout<<"TOTAL: Q"<<y+b<<endl;
    break;

    case 3:
    c=y*0.15;
    cout<<"Su costo de iva es: L"<<c<<endl;
    cout<<"TOTAL: L"<<y+c<<endl;
    break;

    case 4:
    d=y*0.2;
    cout<<"Su costo de iva es: E"<<d<<endl;
    cout<<"TOTAL: $"<<y+d<<endl;
    break;

    default:
        cout<<"Ingrese otro pais."<<endl;
        break;
}

return 0;

}