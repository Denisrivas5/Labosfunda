//AÑO BISIESTO
#include <iostream>
using namespace std;

int main(){
    
    int a,anio;
    
    cout<<endl<<endl<<" A"<<(char)165<<"OS BISIESTOS."<<endl;//165 ascci de Ñ

   cout<<endl<<"Introduce el a"<<(char)164<<"o: "; //164 ascii de ñ
    cin>>anio;
    
    //Condición de bisiesto y desicion
    if(a%4==0 && a%400==0){

    cout<<endl<<"El año es bisiesto."<<endl<<endl;
    }

    else{
    cout<<"No es bisiesto."<<endl<<endl;
    }

    return 0; 
}

