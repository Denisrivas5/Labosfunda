/*Realizar un programa en c++ que verifique si la palabra ingresada inicia y
finaliza con la misma letra.*/
#include <iostream>
#include <string>

using namespace std;

int main()
{
    string texto;
    cout<<endl;
    cout<<"inicio y fin de palabra con misma letra"<<endl;

    cout<<"ingrese una palabra: ";
    cin>>texto;

    if(texto.front()==texto.back())
    {
        cout<<endl<<"la palabra inicia y finaliza con la misma letra."<<endl<<endl;
    }
    else
    {
        cout<<endl<<"la palabra no inicia ni finaliza con la misma letra."<<endl<<endl;
    }
    return O;
}