/*
 * Elaborado por José L. García: g++ main.cpp -o main --- ./main
 *
 * Programa para mostrar si un trabajador recibe bonos de acuerdo a
 * los años de antigüedad o las horas trabajadas a la semana
 * Nombre: proyecto_bonos_or
 */

#include <iostream>

using namespace std;

int main() {
    int antiguedad, horas;
    cout << "Programa para determinar si un trabajador recibe bonos" << endl;

    cout << "Dime los años antigüedad que tiene el trabajador: ";
    cin >> antiguedad;

    cout << "Dime cuantas horas trabaja a la semana: ";
    cin >> horas;

    if (antiguedad >= 10 || horas > 30) {
        cout << "Tiene bono el trabajador" << endl;
    } else {
        cout << "No tiene bono" << endl;
    }

    return 0;
}
