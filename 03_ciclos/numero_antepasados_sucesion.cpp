/* Elaborado por José L. García: lunes 27 de mayo de 2024
 * Este programa calcula la sucesión de número de antepasados
 * Nombre: numero_antepasados_sucesion
*/

#include <iostream>
#include <math.h>

using namespace std;

int main() {
    int n; // número de elementos de la sucesión
    cout << "Dame número de elementos o generaciones: ";
    cin >> n;
    cout << "Posición en el renglón";
    for (int k = 1; k <= n; k++) {
        cout << "\t" << k;
    }
    cout << endl;
    cout << "Número de antepasados";
    for (int k = 1; k <= n; k++) {
        cout << "\t" << pow(2, k);
    }
    cout << endl;

    return 0;
}