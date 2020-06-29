
#include<iostream>
using namespace std;

int recorrido(float estaturas[]);
float promedio(float estaura[]);

int main(){

    float estatura[25];

    cout<<endl<<"PROMEDIO DE 25 ESTATURAS."<<endl;
    
    for(int i =0; i<25; i ++){

        cout << "ingrese las estaturas: " <<endl;
        cin>>estatura[i];
    }   
    //imprime lo que procesa la funcion promedio
        cout<<"El promedio es: "<<promedio(estatura)<<endl;
        //funcion de de mayor y menor
        recorrido(estatura);

        return 0;
}
//funcion que determina el promedio
float promedio(float estatura[]){

    float p, s=0;
    for(int i=0; i<25; i++){
    s += estatura[i];
    }
    p= s/25;

    return p;
}
//funcion que determina las estaturas mayores y menores al promedio
int recorrido(float estatura[]){
    
    float m = promedio(estatura);

    int cont1=0;
    int cont2=0; 
    //desicion de para recorrido
    for (int i=0; i < 25; i++){
        
        if(estatura[i] > m){

            cont1++;
        }

        else if(estatura[i] < m){
        
            cont2++;
        }
    }
    cout<<"las estaturas arriba del promedio son: "<< cont1 <<endl;
    cout<<"las estaturas por debajo del promedio son: "<< cont2 <<endl;
}