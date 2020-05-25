//Realizar un programa en c++ que verifique si un número es divisible entre otro.
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int num1,num2;

    cout<<endl<<"NUMEROS DIVISIBLES"<<endl;
    cout<<"digite un numero: "<<endl;
    cin>>num1;
    cout<<"digite un segundo numero: "<<endl;
    cin>>num2;
    int op;
    op=num1/num2;

    if(op!=0)
    {
        cout<<" el numero "<<num1<<" es divisible entre "<<num2<<endl;
    }
    else
    {
        cout<<"el numero "<<num1<<" no es divisible entre "<<num2<< " :("<<endl;
    }
    return 0;
}