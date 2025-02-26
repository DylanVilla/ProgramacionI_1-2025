// Materia:Programacion 1, paralelo3
// Autor; Dylan Villa Luna
// Fecha de creacion: 25/02/2025
// Numero de ejercicio: 6
// Problema planteado: Adivinar el numero del 0 al 50
#include <iostream>
using namespace std;
int main(){
    int numero;
    int intento;
    int adivinado = 0;
    int intentos = 5;
    numero = rand()%51;
    cout << "Pienso en un numeor entre 0 y 50" << endl; 
    for(int i=1; i <=intentos; ++i) { 
        cout << "Intento " << i << endl;
        cin >> intento; // se lee lo que el usuario ingresa
        if (intento == numero) { 
            cout << "Adivinaste el numero" << endl;
            adivinado=1; 
            break; 
        } 
        else if (intento < numero) { // idetifica si el numero que ingresamos es menor que 50 
            cout << "El numero esta entre " << intento << " y 50 " << endl;
        }
        else { 
            cout << " El numero esta entre 0 y " << intento << endl;
        }
    }
    if (!adivinado) {
        cout << "No lo lograste, el numero era " << numero << endl;
    }
    return 0;
}