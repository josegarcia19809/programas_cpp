/*
temperatura_ambiente
Se pide la temperatura
Si la temperatura es igual a 26.4 escribir "La temperatura es igual a 26.4"
de lo contrario escribir "La temperatura no es igual a 26.4"
 */


#include <iostream>
using namespace std;

int main() {
    double temperatura;
    cout << "Dame la temperatura ambiente: ";
    cin >> temperatura;
    if (temperatura == 26.4) {
        cout << "La temperatura es igual a 26.4" << endl;
    } else {
        cout << "La temperatura no es igual a 26.4" << endl;
    }
    return 0;
}
