
#include <iostream>
using namespace std;
//Función que da el Promedio
float promedio(float nota1,float nota2, float nota3,float nota4,float nota5);

int main(){

    cout<< endl<<"NOTA FINAL."<<endl<<endl;

    float nota1, nota2, nota3,nota4,nota5 ,i, n, notafinal;
    cout<<"Ingrese la cantidad de alumnos:";
    cin>>n;
    //Bucle para ingreso de las 5 Notas
    for (i=1;i<=n;i++){
    
    cout<<"Ingrese la nota 1: ";
	cin>>nota1;
	cout<<"Ingrese la nota 2: ";
	cin>>nota2;
	cout<<"Ingrese la nota 3:";
	cin>>nota3;
    cout<<"Ingrese la nota 4:";
	cin>>nota4;
    cout<<"Ingrese la nota 5:";
	cin>>nota5;
    
    //lamado a la funcion que determina el promedio
	notafinal = promedio(nota1,nota2,nota3,nota4,nota5);

	//Condicion si el alumno supera el 6 (Nota mínima)
	if (notafinal >= 6){

        cout<<"con una nota final de "<<notafinal<<" El alumno ha aprobado la materia."<<endl;
        
	}
	else
		cout<<"con "<<notafinal<<" El alumno ha desaprobado la materia."<<endl;

	}

}

//funcion promedio
float promedio(float nota1,float nota2, float nota3,float nota4,float nota5){
    
    float Promedio;	Promedio = (nota1+nota2+nota3+nota4+nota5)/5;
	return (Promedio);

}