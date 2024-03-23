/* Elaborado por José L. García
*
* multiplicaciones
*/
//
// 5 * 1 = 5
// 5 * 2 = 10
// 5 * 3 = 15
// ...
// 5 * 10 = 50


#include <iostream>
using namespace std;

int main() {
    int numero = 1;
    while (numero <= 10) {
        cout << "5 * " << numero << " = " << numero * 5 << endl;
        numero++;
    }

    return 0;
}
