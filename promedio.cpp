#include <iostream>

using namespace std;

int main()
{
     cout<<endl<<"promedios"<<endl;

    int a,b,c;

    cout<<"introduzca un numero entero"<<endl;
    cin >> a;

    cout<<"introduzca un segundo numero entero"<<endl;
    cin >> b;

    cout<<"introduzca un tercer numero entero"<<endl;
    cin >> c;

    int sum;
    sum=a+b+c;

    int div;
    div=sum/3;
    cout<<"su promedio es: "<<div<<endl;

    return 0;
}