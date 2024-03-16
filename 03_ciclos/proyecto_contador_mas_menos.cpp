/*
* proyecto_contador_mas_menos
 * Elaborado por José L. García
 */

// 1    2   3   4   5  4  3   2   1

#include <iostream>
using namespace std;

int main() {
    int contador = 1;
    cout << contador << "\t";
    contador++;
    cout << contador << "\t";
    contador++;
    cout << contador << "\t";
    contador++;
    cout << contador << "\t";
    contador++;
    cout << contador << "\t";

    contador--;
    cout << contador << "\t";
    contador--;
    cout << contador << "\t";
    contador--;
    cout << contador << "\t";
    contador--;
    cout << contador << "\t";
    return 0;
}
