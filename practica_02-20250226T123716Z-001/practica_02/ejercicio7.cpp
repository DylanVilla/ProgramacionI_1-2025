// Materia:Programacion 1, paralelo3
// Autor; Dylan Villa Luna
// Fecha de creacion: 25/02/2025
// Numero de ejercicio: 7
// Problema planteado: Secuencia de mas a menos
#include <iostream>
using namespace std;
int main(){
   int numero;
   cout << " Ingrese un numero: "; cin >> numero;

   for (int i = numero ; i >=1; --i) // Indica cuantas lineas se genera empezando desde n hasta 1
   {
    for (int j = 1 ; j <= i; ++j) // imprime numeros desde 1 hasta el valor de i
    {
        cout << j << " ";
    }
    cout << endl;
   }
    return 0;
}