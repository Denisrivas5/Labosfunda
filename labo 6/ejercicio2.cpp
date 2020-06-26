#include <iostream>
using namespace std;

int main(){

    int x, i;
    cout << endl << "INVERSION DE NUMEROS." << endl;
    cout << endl << "Ingresa la longitud del arreglo: ";
    cin >> x;
    int tabla[x];

    for(i = 1; i <= x; i ++){
        int a = 0;
        cout << "Numero: ";
        cin >> a;
        tabla[i] = a;
    }
    //invierte los numeros del arreglo
    cout << endl << "Numeros invertidos: " << endl;
    for(i = x; i >= 1; i --){

        cout << " " << tabla[i];
    }
}