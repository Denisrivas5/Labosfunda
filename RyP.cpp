
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    float r,a,p,pi=3.14;
    cout<<endl<<"RADIO Y PERIMETRO"<<endl;
    
    cout<<endl<<"introduzca el radio"<<endl;
    cin>>r;

    a = pow(r,2)*pi;
    p = 2*pi*r;

    cout<<"El area es: "<<a<<endl;
    cout<<"el perimetro es: "<<p<<endl;


}