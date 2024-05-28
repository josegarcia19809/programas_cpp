/* Elaborado por José L. García: lunes 27 de mayo de 2024
 * Este programa calcula la sumatoria de los siguientes números:
 * -2, -1, 0, 1, 2
 * Nombre: sumatorias
*/

#include <iostream>

using namespace std;

int main() {
    int a[6] = {0, -2, -1, 0, 1, 2};

    cout << "-----------------------------------------a)" << endl;
    int sumaTotalA = 0;
    for (int k = 1; k <= 5; k++) {
        sumaTotalA = sumaTotalA + a[k];
        cout << a[k] << "\t";
    }
    cout << endl;
    cout << "a)La suma es " << sumaTotalA << endl;


    cout << "-----------------------------------------b)" << endl;
    int sumaTotalB = 0;
    for (int k = 2; k <= 2; k++) {
        sumaTotalB = sumaTotalB + a[k];
        cout << a[k] << "\t";
    }
    cout << endl;
    cout << "b)La suma es " << sumaTotalB << endl;


    cout << "-----------------------------------------c)" << endl;
    int sumaTotalC = 0;
    for (int k = 1; k <= 2; k++) {
        sumaTotalC = sumaTotalC + a[k * 2];
        cout << a[k * 2] << "\t";
    }
    cout << endl;
    cout << "c)La suma es " << sumaTotalC << endl;
    
    return 0;
}