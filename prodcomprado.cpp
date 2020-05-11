#include <iostream>

using namespace std;

int main()
{

    string nombre;
    float precio,cantidad;
    

    cout<<endl<<"COMPRAS"<<endl<<endl;

    cout<<"Especifique su producto comprado: "<<endl;
    cout<<"nombre: "<<endl;
    cin>>nombre;
    cout<<"precio:$ "<<endl;
    cin>>precio;
    cout<<"Cantidad de unidades: "<<endl;
    cin>>cantidad;

    float total;
    total = precio*cantidad;

    cout<<"su gasto total es:$ "<<endl<<total<<endl;

return 0;
}