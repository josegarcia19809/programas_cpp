/*
 * angulos
 */


#include <iostream>
using namespace std;

int main() {
    double angulo;
    cout << "Dame un ángulo: ";
    cin >> angulo;
    if (angulo < 90) {
        cout << "Ángulo agudo" << endl;
    }else if(angulo > 90) {
        cout << "Ángulo obtuso" << endl;
    }else {
        cout << "Ángulo recto" << endl;
    }
    // Pruebas
    // 85 -> Ángulo agudo
    // 100 -> Ángulo obtuso
    // 90 -> Ángulo recto
    
    return 0;
}
