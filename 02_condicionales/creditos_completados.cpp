/*
 * creditos_completados

 */


#include <iostream>
using namespace std;

int main() {
    int creditos;
    cout << "Dame tus creditos: ";
    cin >> creditos;
    if (creditos < 32) {
        cout << "Primer año" << endl;
    } else if (creditos <= 63) {
        cout << "Segundo año" << endl;
    } else if (creditos <= 95) {
        cout << "Tercer año" << endl;
    } else {
        cout << "Último año" << endl;
    }
    // Pruebas
    // 25 -> Primer año
    // 53 -> Segundo año
    // 90 -> Tercer año
    // 120 -> Último año
    return 0;
}
