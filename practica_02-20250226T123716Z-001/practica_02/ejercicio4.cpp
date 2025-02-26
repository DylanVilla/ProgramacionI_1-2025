// Materia:Programacion 1, paralelo3
// Autor; Dylan Villa Luna
// Fecha de creacion: 25/02/2025
// Numero de ejercicio: 4
// Problema planteado: Lanzar moneda
#include <iostream>
using namespace std;
int main(){
    int lanzamientos;
    cout <<"Ingrese el numero de lanzamientos: " ;cin >>lanzamientos;

    int cara=0;
    int cruz=0;
    for(int i=0; i < lanzamientos; ++i) 
    {
        int resultado = rand()%2;
        if(resultado == 0){++cara;} //Incrementa las veces que salio cara
        else {++cruz;}
    }
    cout<<"Veces que salio cara: " << cara << endl;
    cout<<"Veces que salio cruz: " << cruz << endl;
    return 0;
}