//CALCULO DE SALARIOS

#include <iostream>
#include <string>
using namespace std;

//declaracion de funciones
int salario_real(int n);
int salario(int x,int y);

int main(){
    
    int n,n1,n2,f;
    cout<<endl;
    cout<<endl<<"CALCULO DE SALARIO MENSUAL."<<endl;
    cout<<endl<<"El salario total sera calculado con un pago de $1.75 la hora normal y $2.50 la hora extra."<<endl;
    cout<<"Ingrese el numero de empleados: ";
    cin>>n;
    cout<<"ingrese el numero de horas sin incluir las extras: ";
    cin>>n1;
    cout<<endl<<"ingrese el numero de horas extras: ";
    cin>>n2;

    for(int i=1;i<=n;i++){
        cout<<endl<<"empleados "<<i<<endl;

        if(i=n){
        
        //llamado a funcion 
    f=salario(n1,n2);
    cout<<"SALARIO MENSUAL TOTAL: $ "<<f<<endl;
    //llamado a funcion
    salario_real(f);
    cout<<"SALARIO MENSUAL REAL: $ "<<salario_real(f)<<endl;
        }
    }
    return 0;
}

//funcion que hace la suma del pago total de las horas
int salario(int x, int y){

    int suma;

    x=x*1.75;
    y=y*2.50;
    suma=(x+y);

    return suma;
}
//funcion que calcula el salario real
int salario_real(int n){

    int R,descuentos;
    if(R<500){

    R=R-10.25;
    }
    else{
        R=R-20.25;
    }
    return R;
}

