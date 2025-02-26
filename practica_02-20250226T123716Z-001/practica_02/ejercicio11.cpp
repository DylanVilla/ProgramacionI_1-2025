// Materia:Programacion 1, paralelo3
// Autor; Dylan Villa Luna
// Fecha de creacion: 25/02/2025
// Numero de ejercicio: 11
// Problema planteado: Pañalaes en guarderia
#include <iostream>
using namespace std;
int main () {
    int ninos;
    cout << "Ingrese la cantidad de niños: ";
    cin >> ninos;

    int ninos1;
    int ninos2;
    int ninos3;
    do { //genera la cantidad de niños de 1 año, 2 años y 3 años aleatoriamente
        ninos1 =rand()%(ninos + 1);
        ninos2 =rand()%(ninos - ninos1 + 1);
        ninos3 = ninos - ninos1 - ninos2;
    } while (ninos1+ninos2+ninos3 != ninos); 

    int panales1 = ninos1 * 6;
    int panales2 = ninos2 * 3;
    int panales3 = ninos3 * 2; 

    int totPanales = panales1 + panales2 + panales3;

    cout << "Hay " << ninos1 << " niños de 1 año" << endl;
    cout << "Hay " << ninos2 << " niños de 2 años" << endl;
    cout << "Hay " << ninos3 << " niños de 3 años" << endl;
    cout << "El consumo total de pañales diario es de: " << totPanales << endl;
    return 0;
}