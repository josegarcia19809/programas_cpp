/*
 * proyecto_suma_incrementos
 */


#include <iostream>
using namespace std;

int main() {
    int suma = 0; // inicializar acumulador
    cout << "El valor inicial de suma es "
            << suma << endl;
    suma = suma + 12; // 12
    cout << "Suma ahora vale " << suma << endl;

    suma = suma + 8; // 20
    cout << "Suma ahora vale " << suma << endl;

    suma = suma + 12; // 32
    cout << "Suma ahora vale " << suma << endl;

    suma = suma + 9; // 41
    cout << "Suma ahora vale " << suma << endl;

    suma = suma + 17; // 58
    cout << "Suma ahora vale " << suma << endl;

    suma = suma + 2; // 60
    cout << "Suma ahora vale " << suma << endl;

    suma = suma - 20; // 40
    cout << "Suma ahora vale " << suma << endl;

    suma = suma - 5; // 35
    cout << "Suma ahora vale " << suma << endl;

    suma = suma - 35; // 0
    cout << "Suma ahora vale " << suma << endl;

    return 0;
}
