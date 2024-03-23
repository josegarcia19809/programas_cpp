/* Elaborado por José L. García
 *
 *
 */

#include <iostream>
using namespace std;

int main() {
    cout << "Del 1 al 5" << endl;
    int numero = 1;
    while (numero <= 5) {
        cout << numero << endl;
        numero++;
    }
    cout << "-------------------------------------------------------------------------" << endl;

    // del 1 al 50
    cout << "Del 1 al 50" << endl;
    numero = 1;
    while (numero <= 50) {
        cout << numero << " ";
        numero++;
    }
    cout << endl;
    cout << "-------------------------------------------------------------------------" << endl;

    // del 0 al 20
    cout << "Del 0 al 20" << endl;
    numero = 0;
    while (numero <= 20) {
        cout << numero << " ";
        numero++;
    }
    cout << endl;
    cout << "-------------------------------------------------------------------------" << endl;

    // del 20 al 25
    cout << "Del 20 al 25" << endl;
    numero = 20;
    while (numero <= 25) {
        cout << numero << endl;
        numero++;
    }
    cout<<endl;
    cout << "-------------------------------------------------------------------------" << endl;

    // del 0 al 9
    cout << "Del 0 al 9" << endl;
    numero = 0;
    while (numero < 10) {
        cout << numero << endl;
        numero++;
    }
    cout << "-------------------------------------------------------------------------" << endl;

    // del 10 al 10
    cout << "Del 10 al 10" << endl;
    numero = 10;
    while (numero < 11) {
        cout << numero << endl;
        numero++;
    }
    cout << "-------------------------------------------------------------------------" << endl;

    // Muestra los valores 1, 3 y 5
    cout << "Muestra los valores 1, 3 y 5" << endl;
    numero = 1;
    while (numero <= 6) {
        cout << numero << endl;
        numero = numero + 2;
    }
    cout << "-------------------------------------------------------------------------" << endl;

    // Muestra los valores 0, 2, 4 y 6
    cout << "Muestra los valores 0, 2, 4 y 6" << endl;
    numero = 0;
    while (numero <= 6) {
        cout << numero << endl;
        numero = numero + 2;
    }
    cout << "-------------------------------------------------------------------------" << endl;

    // Muestra los valores 5, 4, 3, 2, 1
    cout << "Muestra los valores 5, 4, 3, 2, 1" << endl;
    numero = 5;
    while (numero >= 1) {
        cout << numero << endl;
        numero--;
    }

    return 0;
}
