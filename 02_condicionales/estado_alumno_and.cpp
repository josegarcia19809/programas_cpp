/*
 * Elaborado por José L. García: g++ main.cpp -o main --- ./main
 *
 * Programa para definir el estado de un alumno
 * de acuerdo a su calificación
 */

#include <iostream>

using namespace std;

int main() {
    double calificacion;
    cout << "Dame tu calificación: ";
    cin >> calificacion;

    if (calificacion >= 0 && calificacion < 6.0) {
        cout << "Extraordinario" << endl;
    } else if (calificacion >= 6.0 && calificacion < 8.0) {
        cout << "Ordinario" << endl;
    } else if (calificacion >= 8.0 && calificacion <= 10.0) {
        cout << "Exento" << endl;
    } else {
        cout << "No válido" << endl;
    }
    
    return 0;
}
