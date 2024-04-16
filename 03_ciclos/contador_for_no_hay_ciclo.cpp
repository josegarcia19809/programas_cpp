/*
 * Elaborado por José L. García: g++ main.cpp -o main --- ./main
 * contador_for_no_hay_ciclo
 */

#include <iostream>

using namespace std;

int main() {
    // Nunca se ejecuta este ciclo porque no cumple la condición
    for (int m = 1; m < 1; m++) {
        cout << " " << m;
    }
    cout << endl;

    return 0;
}