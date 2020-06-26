#include <iostream>
using namespace std;
//para invertir
void inversor(int a[]);

int main(){
        
        cout << endl;
        int c = 1;
        int arr[100];

        for(int i = 0; i < 100; i ++){
                arr[i] = c;
                c = c + 2;
        }

        inversor(arr);
}

void inversor(int a[]){

        for(int i = 99; i >= 0; i --){
        cout << " " << a[i];
        }
}