/*
* proyecto_conteo
 * Elaborado por José L. García
 */


#include <iostream>
using namespace std;

int main() {
    int i = 0;
    cout << "i vale: " << i << endl;
    // ¿Cuál es la operación para que
    // haga un incremento de 1?
    i = i + 1;
    cout << "i vale: " << i << endl;

    i += 1;
    cout << "i vale: " << i << endl;

    i++;
    cout << "i vale: " << i << endl;

    cout << "----------------------------" << endl;

    int j = 10;
    cout << "j vale: " << j << endl;
    // Decrementando
    j = j - 1;
    cout << "j vale: " << j << endl;

    j -= 1;
    cout << "j vale: " << j << endl;

    j--;
    cout << "j vale: " << j << endl;

    return 0;
}
