/*
 * Elaborado por José L. García: g++ main.cpp -o main --- ./main
 */


#include <iomanip>
#include <iostream>

using namespace std;

int main() {
    int anio = 1;
    cout << "Año\t\tAumento mm" << endl;
    do {
        cout << anio << "\t\t" << (anio * 1.5) << endl;
        anio++;
    } while (anio <= 25);

    return 0;
}