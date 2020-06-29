
#include <iostream>
using namespace std;
//funcion que intercambia la letra por el numero
void codificador (string frase);

int main (){
    string frase;

    cout<<endl<<"CLAVE DE MURCIELAGO."<<endl;
    //llamado a funcion
    codificador(frase);

    return 0;
}

//funcion que recorre el texto e intercambia la letra por el numero
void codificador(string frase){
    
    char texto[100]={};

    cout << "Ingrese la palabra o frase: ";
    cin.getline(texto,100);

    cout<< "codigo : " ;

    //recorrido de el texto y desicion
    for (int i=0; i<100; i++){

        switch (texto[i]){

        case 'm':
            cout <<0;
            break;
        
        case 'u':
            cout <<1;
            break;

        case 'r':
            cout <<2;
            break;
        
        case 'c':
            cout <<3;
            break;
        
        case 'i':
            cout <<4;
            break;

        case 'e':
            cout <<5;
            break;
        
        case 'l':
            cout <<6;
            break;
        
        case 'a':
            cout <<7;
            break;
        
        case 'g':
            cout <<8;
            break;

        case 'o':
            cout <<9;
            break;
        
        default: ;
        
        }
    }
}