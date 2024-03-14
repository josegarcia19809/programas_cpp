/*
 * calificaciones_numericas_a_letra
 *     // Pruebas
    // 20->   F
    // 61->   D
    // 75->   C
    // 83->   B
    // 100->   A
 */


#include <iostream>
using namespace std;

int main() {
    int calificacion;
    cout << "Ingresa tu calificación numérica: ";
    cin >> calificacion;

    if (calificacion < 60) {
        cout << "F" << endl;
    } else if (calificacion < 70) {
        cout << "D" << endl;
    } else if (calificacion < 80) {
        cout << "C" << endl;
    } else if (calificacion < 90) {
        cout << "B" << endl;
    } else {
        cout << "A" << endl;
    }

    return 0;
}
