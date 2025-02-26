
// Materia:Programacion 1, paralelo3
// Autor; Dylan Villa Luna
// Fecha de creacion: 25/02/2025
// Numero de ejercicio: 1
// Problema planteado: Secuencia con fibonacci
#include <iostream>
using namespace std;
int main() {
    int numero = 0;
    int numSucesion = 4; 
    int numSuma = 2; 
    int x = 1; 
    int y = 1; 
    int z = 0; 
    int suma = 0;

    cout << "Ingrese cuántos términos desea imprimir de la serie: ";
    cin >> numero;

    for (int i = 0; i < numero; i++) {
        suma += numSucesion;
        numSucesion += numSuma;
        numSuma += x;
        z = x + y;
        x = y;
        y = z;
    }

    cout << "La suma de la serie es: " << suma << endl;

    return 0;
}

