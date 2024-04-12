/*
 * Elaborado por José L. García: g++ main.cpp -o main --- ./main
 */


#include <iomanip>
#include <iostream>

using namespace std;

int main() {
    int anios = 1;
    double porcentaje_incremento = 4;
    double cuota_inicial = 2500.00;
    cout<<"Año \tCobro"<<endl;
    do {
        double incremento = cuota_inicial * porcentaje_incremento / 100.00;
        cout << anios << "\t\t"
             << (cuota_inicial + incremento*anios)
             << endl;
        anios++;
    } while (anios <= 6);
    return 0;
}