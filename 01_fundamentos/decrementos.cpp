#include <iostream>

using namespace std;

int main() {
    cout << "DECREMENTOS" << endl;
    int cuenta = 10;
    // Quitar una unidad e imprimir
    cuenta = cuenta - 1; // 9
    // Quitar 20 unidades e imprimir
    cuenta -= 20; // -11
    // Para que queden -50
    cuenta = cuenta - 39;
    cout << "Cuenta: " << cuenta << endl;

    return 0;
}