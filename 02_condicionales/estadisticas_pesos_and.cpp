/*
 * Elaborado por José L. García: g++ main.cpp -o main --- ./main
 *
 * Programa para definir rango de peso de un alumno
 */

#include <iostream>

using namespace std;

int main() {
    double peso;
    cout << "Programa para estadística de los pesos de los alumnos de un colegio" << endl;
    cout << "Ingresa el peso en kilogramos: ";
    cin >> peso;

    if (peso < 40) {
        cout << "Alumno de menos de 40kg" << endl;
    } else if (peso >= 40 && peso <= 50) {
        cout << "Alumno entre 40 y 50 kg" << endl;
    } else if (peso > 50 && peso < 60) {
        cout << "Alumno de más de 50kg y menos de 60kg" << endl;
    } else if (peso >= 60) {
        cout << "Alumno de 60kg o más" << endl;
    }
    return 0;
}
