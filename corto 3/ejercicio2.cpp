//NUMERO MAGICO
#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

int main(){

    int a,b;
    
    cout<<endl<<"ADIVINA ADIVINADOR."<<endl<<endl;
    
    //para opbtener el numero imaginario de manera aleatoria
    srand((unsigned)time(NULL));
    a=rand()%(100+1);

    cout<<"Debes elegir un numero entre 1 y 100"<<endl;
    int i=0;
    cout<<"Tendras 5 intentos."<<endl<<endl;
    
    //toma de decisiones
    do{
    cout<<"Ingresa tu numero: ";
        cin>>b;
        i++;

        if(b>a){

        cout<<endl<<"Ups numero incorrecto."<<endl;
    cout<<"Te dare una pista: El numero imaginario es menor al que ingresaste."<<endl;
    cout<<endl<<"Numero de intentos: "<<i<<endl<<endl;
    }

    else if(b<a){
        cout<<"Ups numero incorrecto. "<<endl;
        cout<<"Pista: El numero imaginario es mayor al que ingresaste."<<endl;
        cout<<"numero de intentos: "<<i<<endl<<endl;
    }
    else{
        cout<<"¡FELICIDADES! Adivinaste"<<endl;
        cout<<"Numero de intentos: "<<i<<endl<<endl;
    }
    
    }
    //numero de oportunidades y desicion final
    while(i<5 && b!=a);
    cout<<"PERDISTE."<<endl<<endl;
    

}