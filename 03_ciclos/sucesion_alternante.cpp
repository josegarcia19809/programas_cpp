/* Elaborado por José L. García: lunes 27 de mayo de 2024
 * Este programa muestra la siguiente sucesión de números
 * 1, -1, 1, -1, 1, ...
 * Nombre: sucesion_alternante
*/

#include <iostream>
#include <cmath> // math.h

using namespace std;

int main() {
    for (int j = 0; j <= 5; j++) {
        cout << "c(" << j << ") = " << pow(-1, j) << endl;
    }

    return 0;
}