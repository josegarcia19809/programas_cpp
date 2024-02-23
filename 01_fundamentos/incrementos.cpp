//  Created by: Ing. José Luis García Morales on 23 de febrero de 2024, 08:24
//  Este programa muestra los operadores de incremento

#include <iostream>

using namespace std;

int main() {
    cout << "INCREMENTO" << endl;
    int n = 5;
    cout << "Antes del incremento: " << n << endl;
    // Incrementar una unidad y mandar imprimir
    n++; // 6
    // Incrementar 20 unidades y mandar imprimir
    n += 20; // 26
    // Incrementar 24 unidades y mandar imprimir
    n = n + 24;
    cout << "Después de los incrementos: " << n << endl;

    return 0;
}