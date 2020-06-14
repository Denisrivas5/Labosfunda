
#include <iostream>

using namespace std;

int main()
{
    int x;

    cout<<"DINERO POR COLOR."<<endl;
    cout<<"elija un color: "<<endl;
    cout<<"1) negro."<<endl;
    cout<<"2) amarillo."<<endl;
    cout<<"3) rojo."<<  endl;
    cout<<"4) anaranjado."<<endl;
    cout<<"5) verde."<<endl;
    cin>>x;
    
    switch(x)
    {
        case 1:
        cout<<"Felicidades! has ganado $20"<<endl;
        break;

        case 2:
        cout<<"Felicidades! has ganado $200"<<endl;
        break;

        case 3:
        cout<<"Ups! has ganado $0"<<endl;
        break;

        case 4:
        cout<<"Felicidades! has ganado $2"<<endl;
        break;

        case 5:
        cout<<"Felicidades! has ganado $1001"<<endl;
        break;

        default:
        cout<<"Color no valido"<<endl;
        break;
    }

    return 0;
}