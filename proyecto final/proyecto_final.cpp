#include <iostream> 
#include <string>
#include <string.h>
using namespace std;

const int longCad = 20;

struct costoPorArticul{
char nombreArticulo[longCad + 1];
int cantidad;
float precio;
float costoPorArticulo;
};

//prototipos de las funciones
void datos(costoPorArticul lista[], int n);
void costo(costoPorArticul lista[], int n);
void mostrarContenido(costoPorArticul lista[], int n);
float total(costoPorArticul lista[], int n);

int main(){
    
    int n;
    cout << endl << "COSTO POR COMPRA DE ARTICULOS." << endl;
    cout << " Ingrese la cantidad de artuculos: ";
    cin >> n;
    cin.ignore(100, '\n');
    //array estructura
    costoPorArticul listado[n];
    
    //llamado a funciones 
    datos(listado, n); 
    mostrarContenido(listado, n);  
    costo(listado, n);
    total(listado, n); 
    cout << endl;

    return 0;
}

//llena datos sobre  nombre, la cantidad y el precio unitario de cada artículo
void datos(costoPorArticul lista[], int n){

    int i;
    string cadena;

    cout << "Digite el nombre, cantidad y precio para cada producto." << endl;
    for(i = 0; i < n; i++){
    cout << endl << "Nombre: ";
    getline(cin, cadena, '\n');
    strncpy(lista[i].nombreArticulo, cadena.c_str(), longCad);
    lista[i].nombreArticulo[longCad] = '\n';

    cout << "Cantidad:  ";
    cin >> lista[i].cantidad;
    cout << "Precio por unidad: $ ";
    cin >> lista[i].precio;
    cin.ignore(100, '\n');
    }
}

//calcula el costo por artículo
void costo(costoPorArticul lista[], int n){
    int i;
    for(i = 0; i < n; i++){
        lista[i].costoPorArticulo = lista[i].cantidad * lista[i].precio; //multiplica el precio por la cantidad de cada producto
        cout << endl << "Costo total por articulo: " << lista[i].costoPorArticulo <<endl;
    }
}


// función que despliega el contenido del arreglo
void mostrarContenido(costoPorArticul lista[], int n){
    int i;
    
    cout << endl << "DETALLES DE LA COMPRA: " <<endl;
    for(i = 0; i < n; i++){
    cout << "Producto: " << lista[i].nombreArticulo << endl;
    cout << "Cantidad: " << lista[i].cantidad << endl;
    cout << "Precio: $ " << lista[i].precio << endl;
    } 
    cout << endl;
}


//calcula el costo total de la compra
float total(costoPorArticul lista[], int n){
    int i;
    float total = 0 ;
    
    for(i = 0; i < n; i++){
    total = total + lista[i].costoPorArticulo; //suma de precios
    }
    cout << endl << "Costo total de la compra: $ " << total << endl;
    return total;
}