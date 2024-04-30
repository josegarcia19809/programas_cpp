/*
 * Elaborado por José L. García: g++ main.cpp -o main --- ./main
 *
 * Programa para calcular el tiempo de espera estimado en una fila
 * tiempo_estimado
 */

#include <iostream>

using namespace std;

int main() {
    int articulos, totalArticulos = 0, numCarritos = 0;
    double tiempoEsperaEnSegundos;

    cout << "Ingresa el número de artículos en cada carrito de compras. ";
    cout << "(Ingresa cero para finalizar)" << endl;

    // Bucle para ingresar los números de artículos en cada carrito
    do {
        cout << "Carrito " << numCarritos + 1 << ": ";
        cin >> articulos;

        // Validación de entrada
        if (articulos < 0) {
            cout << "Error: Ingresa un valor positivo o 0." << endl;
            continue;
        }

        if (articulos > 0) {
            numCarritos++;
            totalArticulos = totalArticulos + articulos;
        }

    } while (articulos != 0);

    cout << "Total de artículos: " << totalArticulos << endl;
    cout << "Total de carritos: " << numCarritos << endl;

    // Cálculo del tiempo de espera estimado
    tiempoEsperaEnSegundos = (totalArticulos * 0.75) + (numCarritos * 30);
    cout << "Tiempo de Espera En Segundos: " << tiempoEsperaEnSegundos << endl;

    // Conversión a minutos y segundos
    int minutos = tiempoEsperaEnSegundos / 60;
    int segundos = tiempoEsperaEnSegundos - (minutos * 60);

    // Mostrar el tiempo de espera estimado
    cout << "Tiempo de espera estimado: " << minutos << " minutos y " << segundos << " segundos"
         << endl;

    return 0;
}
