/*
    Se quiere saber si una velocidad es de 55 MPH (millas por hora),
    Si no lo es que escriba el mensaje correspondiente
    Mensajes
    "Tu velocidad es de 55MPH"
    "La velocidad es diferente de 55MPH"
 */


#include <iostream>
using namespace std;

int main() {
    int velocidad;
    cout << "Programa que nos dice si la velocidad es de 55 millas por hora" << endl;
    cout << "¿A qué velocidad vas?: ";
    cin >> velocidad;
    if (velocidad == 55) {
        cout << "Tu velocidad es de 55MPH" << endl;
    } else {
        cout << "Tu velocidad es diferente de 55MPH" << endl;
    }

    return 0;
}
