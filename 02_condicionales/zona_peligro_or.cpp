/*
 * Elaborado por José L. García: g++ main.cpp -o main --- ./main
 *
 * Programa para mostrar intervalos para una zona de peligro usando or
 * Nombre: zona_peligro_or
 */

#include <iostream>

using namespace std;

int main() {
    int temperatura;

    cout << "Escribe la temperatura actual: ";
    cin >> temperatura;

    if (temperatura < 20 || temperatura > 100) {
        cout << "La temperatura está en la zona de peligro" << endl;
    } else {
        cout << "La temperatura no está en la zona de peligro" << endl;
    }
    return 0;
}
