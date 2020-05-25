//Realizar un programa en c++ que verifique si un número es par o impar.
#include <iostream>

using namespace std;

int main()
{
    int x,y;
    cout<<endl;
    cout<<"VERIFICACION DE NUMEROS PARES O IMPARES"<<endl;

    cout<<"introduzca un numero: "<<endl;
    cin>>x;

    if(x%2==0)    
    {
        cout<<" es par. "<<endl;
    }
    else
    {
        cout<<"no es par. "<<endl;
    }
    return 0;
}