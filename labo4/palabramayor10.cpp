/*Realizar un programa en c++ que verifique si la palabra ingresada es mayor a 
10 caracteres o no y si la longitud es par o impar.*/
#include <iostream>
#include <string>

 using namespace std;
  
  int main()
  {
    string palabra;

    cout<<endl;
    cout<<"verificacion de palabras."<<endl;

    cout<<"ingrese una palabra: ";
    cin>>palabra;

    if(palabra.size()>10)
    {
      cout<<endl<<"la palabra tiene mas de 10 caracteres."<<endl;
    }
     else
      {
      cout<<endl<<"la palabra no tiene mas de 10 caracteres."<<endl;
      }

    if(palabra.size()%2==0)
    {
      cout<<"y tiene un numero de caracteres par."<<endl<<endl;
    }
      else
      {
      cout<<"y no tiene un numero de caracteres par."<<endl<<endl;
      }
    return 0;
  }
   
    
    
