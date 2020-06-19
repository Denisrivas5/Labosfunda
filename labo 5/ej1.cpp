/*Elabore una función que retorne el mcd de dos números que se le
proporcionen como argumento. Utilice el método de Euclides, que ya se
presentó en un ejemplo del documento donde se explican las instrucciones
iterativas. Su función deberá retornar el mcd de los dos enteros recibidos y
deberá ser desplegado en pantalla.*/
#include "iostream"
using namespace std;
//funcion
int mcd(int x,int y);

int main(void)
{
    int n1, n2, funcion;
    cout <<endl<< "MCD DE DOS NUMEROS"<<endl<<endl;
    cout << "Digite el numero mayor: ";
    cin >> n1;
    cout <<endl<<"Digite el numero menor: ";
    cin >> n2;

    funcion=mcd(n1,n2);
    cout <<endl<< "El MCD es: " <<n2<<endl;
    cout << endl;
    
    return 0;

}
//cuerpo de la funcion que calcula el mcd
int mcd(int x,int y){
    
    int a,b,res;
    do {
    res=b;
    b=a%b;
    a=res;
    }
    while(b!=0);

    return res;
    
}