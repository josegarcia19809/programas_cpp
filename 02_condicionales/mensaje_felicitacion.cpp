// Programa que pide 3 calificaciones (0-100)
// El usuario ingresa las 3 calificaciones
// el programa calcula el promedio y lo muestra
// Si el promedio es superior a 95, el programa
// felicita al usuario por obtener una
// calificación alta.
#include <iostream>
using namespace std;

int main() {
    int calificacion1, calificacion2, calificacion3;
    double promedio;

    cout << "Dame primera calificación: ";
    cin >> calificacion1;

    cout << "Dame segunda calificación: ";
    cin >> calificacion2;

    cout << "Dame tercera calificación: ";
    cin >> calificacion3;

    promedio = (calificacion1 + calificacion2 +
                calificacion3) / 3.0;
    cout << "El promedio es " << promedio << endl;

    if (promedio > 95) {
        cout << "Sacaste un buen promedio" << endl;
    }

    return 0;
}
