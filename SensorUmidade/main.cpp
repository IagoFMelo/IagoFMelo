#include "mbed.h"
#include <iostream>
using namespace std;
using namespace ThisThread;
//PA_4 - AnalogIn
//PA_8 - DigitalOut
//Muito Seco - 0.9688716274509805 - Média
//Úmido - 0.11655797826086955 - Média
#define Led PA_8
#define SensU PA_4

int main() {
    DigitalOut myled(Led);
    AnalogIn umidade(SensU);
    while(1){

        if (umidade < 0.265){
            myled = !myled;
            sleep_for(1000);
            cout << "Não precisa de água!\n";
            cout << umidade << endl;
        }
        else{
            myled = !myled;
            sleep_for(200);
            cout << "Necessário enxaguar a planta!\n";
            cout << umidade << endl;
        }
    
    }
    
}