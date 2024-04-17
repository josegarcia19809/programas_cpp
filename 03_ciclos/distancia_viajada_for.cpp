/*
 * Elaborado por José L. García: g++ main.cpp -o main --- ./main
 *
 * Generar una tabla para calcular distancias
 */

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int velocidad, horas, distancia;
    cout << "cuantas horas a viajado: ";
    cin >> horas;
    cout << "a que velocidad vas: ";
    cin >> velocidad;
    for (int h = 1; h <= horas; h++) {
        distancia = h * velocidad;
        cout << h << "\t" << distancia << endl;
    }

    return 0;
}