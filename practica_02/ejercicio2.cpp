// Materia:Programacion 1, paralelo3
// Autor; Dylan Villa Luna
// Fecha de creacion: 25/02/2025
// Numero de ejercicio: 2
// Problema planteado: Lanzar dado

#include <iostream>
using namespace std;

int main() {
    int lanzamiento;
    cout << "Ingrese el numero de lanzamientos: ";
    cin >> lanzamiento;
    int resultado;
    int pares=0;

    for (int i=0;i < lanzamiento; ++i)
    {
        resultado = rand() % 6+1; 
        if (resultado % 2 == 0) {++pares;} //Incrementan los pares 
    }
    cout << " Las caras pares se repiten: " << pares <<endl;
    return 0;
}