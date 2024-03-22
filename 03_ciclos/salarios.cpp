/*
 *
 * Elaborado por José L. García
 */
// salarios

// horas    salario
// 10       500
// 20       1000
// 30       1500
// 40       2000


#include <iostream>
using namespace std;

int main() {
    int horas = 10;
    cout<<"horas\tsalario"<<endl;
    while (horas <= 40) {
        double salario = horas * 50;
        cout << horas << "\t\t" << salario << endl;
        horas = horas + 10;
    }

    return 0;
}
