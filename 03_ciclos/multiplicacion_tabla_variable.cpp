/*
 *
 * Elaborado por José L. García
    Generar y mostrar la tabla de multiplicar de un número. 
    Solicitar el número del cual se producirá la tabla. 
 */


#include <iostream>
using namespace std;

int main() {
    int numero;
    cout << "Dame un número: ";
    cin >> numero;
    int valor = 1;
    while (valor <= 10) {
        cout << valor << " * " << numero << " = "
                << valor * numero << endl;
        valor++;
    }

    return 0;
}
