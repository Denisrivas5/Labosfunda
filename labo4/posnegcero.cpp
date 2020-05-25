//Realizar un programa en c++ que verifique si un número es positivo, negativo o cero.
#include <iostream>

using namespace std;

int main()
{
    int num;
    cout<<endl;
    cout<<"numeros positivos, negativos o cero."<<endl;

    cout<<"ingrese un numero: "<<endl;
    cin>>num;
     
      if(num==0)
    {
        cout<<"cero :| "<<endl;
    }
    
      else if(num>0)
    {
     cout<<"es positivo "<<endl;
    }

     else
    {
     cout<<"es negativo"<<endl; 
    }
    
    return 0;
}
