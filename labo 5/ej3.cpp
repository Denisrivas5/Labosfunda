//AÑO BISIESTO CON BOOLEANO

#include <iostream>
using namespace std;

//declaracion funcion booleana
bool b(int x);

int main(){
    
    int n;
    
    cout<<endl<<endl<<" A"<<(char)165<<"OS BISIESTOS."<<endl;//165 ascci de Ñ
    
   cout<<endl<<"Introduce el a"<<(char)164<<"o: "; //164 ascii de ñ
    cin>>n;
    
    //condicion if que evalua true para la funcion  
    if(b(n)){
    cout<<n<<" es bisiesto."<<endl<<endl;
    }
    //else evalua false
    else{
    cout<<n<<" no es bisiesto. "<<endl<<endl;
    }
    return 0;
}
//funcion booleana de bisiesto
bool b(int x){

    //Condición de bisiesto y desicion
    if(x%4==0){
    return true;
    }

    else if(x%400==0){
    return true;
    }

    else {
    return false;
    }
}