// Programa para saber si se recibirá un bono
// Preguntará por las ventas.
// Si las ventas son superiores a 50,000 se le dará un bono de 500.00
#include <iostream>
using namespace std;

int main() {
    float bono = 0.0f;
    float ventas;

    cout << "Dame el total de ventas: ";
    cin >> ventas;

    if (ventas > 50000) {
        bono = 500.00;
    }
    cout << "Tu bono es de $" << bono << endl;

    return 0;
}
