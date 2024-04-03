/*
 * Elaborado por José L. García
 */

// Este programa pedirá 3 veces un número y lo estará agregando a una suma total

#include <iostream>

using namespace std;

int main() {
    int suma = 0;
    int numero;
    int contador = 1;
    while (contador <= 3) {
        cout << "Dame un número: ";
        cin >> numero;
        suma = suma + numero;
        contador++;
    }
    cout << "La suma total es " << suma << endl;
    return 0;
}