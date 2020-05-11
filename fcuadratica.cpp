#include <iostream>
#include <cmath>

using namespace std;
 
 
int main(int argc, char *argv[])
{
    int a,b,c;
 
    cout <<endl<< "Calculo de ecuaciones cuadraticas."<<endl<<endl;
    //INTRODUCIMOS LOS DATOS
    cout << "Introduzca la variable a: " <<endl;
    cin  >> a;
    cout << "Introduzca la variable b: " << endl;
    cin  >> b;
    cout << "Introduzca la variable c: " << endl;
    cin  >> c;
    // Calculamos el interior de la raiz para comprobar si es negativo despues.
    int interiorRaiz = pow(b,2)-4*(a*c);
 
    int Solucion1,Solucion2;
 
    // Si es negativa no tiene solucion en los numeros reales.

    if(interiorRaiz < 0)
    {
      cout << "Esta ecuacion no tiene solucion en los numeros reales." << endl;
    }
    else
    {
        Solucion1 = (-b+sqrt(interiorRaiz))/(2*a);
        Solucion2 = (-b-sqrt(interiorRaiz))/(2*a);

        if(Solucion1 == Solucion2)
        {
            cout << "La unica solucion es: " << Solucion1<<endl;
        }
        else
        {
            cout << "La primera solucion es: " << Solucion1 << endl;
            cout << "La segunda solucion es: " << Solucion2 << endl;
            cout << endl;
        }
    }
    return 0;
}
