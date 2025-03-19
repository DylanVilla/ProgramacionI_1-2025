// Materia:Programacion 1, paralelo3
// Autor; Dylan Villa Luna
// Fecha de creacion: 25/02/2025
// Numero de ejercicio: 5
// Problema planteado: 
#include <iostream>
using namespace std;
int main(){
    int numero=rand()%10+1;
    cout << "Numero aleatoria generado: ";
    int fact=1; //iniciamos factorial en uno
    for (int i = 1; i<=numero; ++i) { 
        fact *=i;//multiplicamos factorial por cada valor de i
    }
    cout<< "El factorial de " << numero << " es " << fact << endl;
    return 0;
}