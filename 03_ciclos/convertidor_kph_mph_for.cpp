/*
 * Elaborado por José L. García: g++ main.cpp -o main --- ./main
 *
 * Generar una tabla para calcular distancias
 */

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    const int VALOR_INICIAL = 60, VALOR_FINAL = 130;
    double mph;

    for (int kph = VALOR_INICIAL; kph <= VALOR_FINAL; kph = kph + 10) {
        mph = kph * 0.6214;
        cout << kph << "\t" << mph << endl;
    }

    return 0;
}