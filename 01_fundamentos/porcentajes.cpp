// Este programa pide un número y calcula su 5%, 10% y 15%
#include <iostream>

using namespace std;

int main() {
    double numero;
    double porcentaje1, porcentaje2, porcentaje3;

    cout << endl;
    cout << "Programa para calcular el 5%, 10% y 15% de un número" << endl;
    cout << "Dame un número: ";
    cin >> numero;

    porcentaje1 = numero * 5 / 100.0;
    porcentaje2 = numero * 10.0 / 100;
    porcentaje3 = numero * 15.0 / 100.0;

    cout << "Número original: " << numero << endl;
    cout << "Su 5% es: " << porcentaje1 << endl;
    cout << "Su 10% es: " << porcentaje2 << endl;
    cout << "Su 15% es: " << porcentaje3 << endl;


    return 0;
}
