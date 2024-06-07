/* Elaborado por José L. García: viernes 7 de junio de 2024
 * Este programa muestra la distancia en
 * caída libre de un objeto
 * Nombre: caida_libre
*/

#include <iostream>
#include <cmath>

using namespace std;

float distanciaCaida(float segundos) {
    const float g = 9.8;
    float distancia = (1.0 / 2) * g * pow(segundos, 2);
    return distancia;
}


int main() {
    cout << "Segundos\tDistancia" << endl;
    for (int segundos = 1; segundos <= 10; segundos++) {
        cout << segundos << "s\t\t\t"
             << distanciaCaida((float)segundos)
             <<"m"<< endl;
    }

    return 0;
}









