/*
 * Elaborado por José L. García: g++ main.cpp -o main --- ./main
 * precios_tortas_for
 */

#include <iostream>

using namespace std;

int main() {
    double precio, total;
    cout << "Dame el precio de las tortas: ";
    cin >> precio;

    cout << "Cantidad-tortas\tTotal" << endl;

    for (int cantidad = 1; cantidad <= 10; cantidad++) {
        total = precio * cantidad;
        cout << (cantidad) << "\t\t\t\t" << total << endl;
    }


    return 0;
}