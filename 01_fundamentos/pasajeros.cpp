/*
 * Empieza con 0 pasajeros
 * Primera parada: suben 30
 * Segunda parada: bajan 10 y suben 4
 * tercera parada: bajan 8 y suben 2
 * Cuarta parada: baja 1 y suben 2
 * Quinta parada: baja 1 y sube 1
 * ¿Cuántos quedaron? 19
 * */
#include <iostream>

using namespace std;

int main() {
    int pasajeros = 0;
    cout << "---------------------" << endl;
    cout << "Programa para pasajeros" << endl;

    // Primera parada: Suben 30
    pasajeros = pasajeros + 30;
    cout << "1. Pasajeros: " << pasajeros << endl;

    // Segunda parada: Bajan 10 y suben 4
    pasajeros = pasajeros - 10;
    pasajeros = pasajeros + 4;
    cout << "2. Pasajeros: " << pasajeros << endl;

    // tercera parada: Bajan 8 y suben 2
    pasajeros -= 8;
    pasajeros += 2;
    cout << "3. Pasajeros: " << pasajeros << endl;

    // cuarta parada: Baja 1 y suben 2
    pasajeros -= 1;
    pasajeros += 2;
    cout << "4. Pasajeros: " << pasajeros << endl;

    // quinta parada: Baja 1 y sube 1
    pasajeros--;
    pasajeros++;
    cout << "5. Pasajeros: " << pasajeros << endl;
    return 0;
}