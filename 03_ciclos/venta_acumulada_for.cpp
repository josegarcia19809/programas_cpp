/*
 * Elaborado por José L. García: g++ main.cpp -o main --- ./main
 *
 * Generar una tabla para calcular distancias
 */

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    double suma_total = 0;
    double venta;
    for (int dia = 1; dia <= 5; dia++) {
        cout << "Dame la venta del dia: ";
        cin >> venta;
        suma_total = suma_total + venta;
        cout << "Acumulado: " << suma_total << endl;
    }
    cout << "Suma total: " << suma_total << endl;
    return 0;
}