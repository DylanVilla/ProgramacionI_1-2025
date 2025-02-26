// Materia:Programacion 1, paralelo3
// Autor; Dylan Villa Luna
// Fecha de creacion: 25/02/2025
// Numero de ejercicio: 8
// Problema planteado: Secuencia de menos a mas
#include <iostream>
using namespace std;
int main(){
   int numero;
   cout << " Ingrese un numero: "; cin >> numero;
   for (int i = 1 ; i <= numero ; ++i) //controla el numero de lineas
   {
    for (int j = 1 ; j <= i; ++j) // imprime numeros de 1 hasta i
    {
        cout << j;
    }
    for (int j =i-1 ; j >= 1; --j) // imprime umeros en orden inverso hasta 1
    {
        cout << j;
    }
    cout << endl;
   }
    return 0;
}