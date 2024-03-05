/*
 * Pedir una temperatura.
 * Si la temperatura es superior a 100 grados
 *      visualizar el mensaje "Por encima del punto de ebullición del agua"
 * de lo contrario
 *      Visualizar el mensaje "Por debajo del punto de ebullición del agua"
 */


#include <iostream>
using namespace std;

int main() {
    int temperatura;
    cout << "Programa para decir si una temperatura está arriba "
            "de su punto de ebullición." << endl;
    cout << "Ingresa temperatura: ";
    cin >> temperatura;
    if (temperatura > 100) {
        cout << "Por encima del punto de ebullición del agua" << endl;
    } else {
        cout << "Por debajo del punto de ebullición del agua" << endl;
    }
    return 0;
}
