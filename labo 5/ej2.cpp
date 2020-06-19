//LA HORA UN SEGUNDO DESPUES
#include <iostream>
using namespace std;

int main(){

    int hora, min,seg;

    cout<<endl<<"LA HORA UN SEGUNDO DESPUES."<<endl;
    cout<<endl<<"Ingresa la hora: ";
    cin>>hora;
    cout<<endl<<"Ingresa los minutos: ";
    cin>>min;
    cout<<endl<<"Ingresa los segundos: ";
    cin>>seg;
    
    //determina los limites horarios
    if(hora>=0 && hora<=23 && min>=0 && min<=59 && seg>=0 && seg<=59){

        seg++;
        if(seg==60){
            seg=0;

            min++;
            if(min==60){
                min=0;
                
                hora++;
                if(hora==24){
                    hora=0;
                }
            }
        }
        cout<<endl<<"La hora un segundo despues es "<<hora<<":"<<min<<":"<<seg<<endl<<endl;
    }

    else{
            cout<<endl<<"La hora ingresada es incorrecta, vuelve a intentar"<<endl<<endl;
        }

    return 0;
}