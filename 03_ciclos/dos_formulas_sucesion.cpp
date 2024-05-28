/* Elaborado por José L. García: lunes 27 de mayo de 2024
 * Este programa calcula la sucesión de 2 formulas
 * Nombre: dos_formulas_sucesion
*/

#include <iostream>

using namespace std;

int main() {
    for (int k = 1; k <= 5; k++) {
        cout << "a(" << k << ") = " << k << "/" << (k + 1) << endl;
    }
    cout << endl;

    for (int i = 2; i <= 6; i++) {
        cout << "b(" << i << ") = " << (i - 1) << "/" << i << endl;
    }
    cout << endl;

    return 0;
}