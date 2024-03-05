// Pedir un ángulo.
//Si el ángulo es igual a 90 grados, imprimir el mensaje "El ángulo es un ángulo recto"
// si no, imprimir el mensaje "El ángulo no es un ángulo recto"


#include <iostream>
using namespace std;

int main() {
    int angulo;
    cout << "Programa para decirte un ángulo es recto o no" << endl;
    cout << "Ingresa ángulo: ";
    cin >> angulo;
    if (angulo == 90) {
        cout << "El ángulo es un ángulo recto" << endl;
    } else {
        cout << "El ángulo no es un ángulo recto" << endl;
    }
    return 0;
}
