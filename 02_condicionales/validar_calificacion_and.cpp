/*
 * Elaborado por José L. García: g++ main.cpp -o main --- ./main
 *
 * Programa para validar una calificación
 */

#include <iostream>

using namespace std;

int main() {
    double calificacion;
    cout << "Dame tu calificación: ";
    cin >> calificacion;
    if (calificacion >= 0 && calificacion <= 10) {
        cout << "Calificación válida" << endl;
    } else {
        cout << "Calificación no válida" << endl;
    }


    return 0;
}
