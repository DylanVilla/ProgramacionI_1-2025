// Materia:Programacion 1, paralelo3
// Autor; Dylan Villa Luna
// Fecha de creacion: 25/02/2025
// Numero de ejercicio: 9
// Problema planteado: Numeros aleatorios entre 1 y 100
#include <iostream>
using namespace std;
int main () {
    int numero;
    cout << "Ingrese la cantidad de numeros para generar: " ; cin >> numero;
    int sumatoria = 0;
    int mayor = 0;
    int menor = 1000; 
    cout << "Numeros generados: ";    
    for (int i=1; i<numero; ++i) 
    { int num = rand()%1000+1;//genera numeros random de 0 a 1000
        cout << num << " ";
        sumatoria += num;
        if(num > mayor) {mayor=num;} // Actualiza el numero mayor
        if(num < menor) {menor = num;} // Actualiza el numero menor
    }
    cout << endl; 
    int promedio = sumatoria / numero;
    cout << "La sumatoria es: " << sumatoria << endl;
    cout << "El promedio es: " << promedio << endl;    
    cout << "El numero mayor es: " << mayor << endl;    
    cout << "El numero menor es: " << menor << endl;   
    return 0; 

}