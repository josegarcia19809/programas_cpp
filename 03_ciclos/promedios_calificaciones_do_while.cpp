/*
 * Elaborado por José L. García
 */
// Este programa calcula el promedio de una serie de 3 calificaciones de un estudiante.
// Después de qué se muestre el promedio pregunta al usuario si desea promediar otro conjunto
// de calificaciones. El programa se repite siempre que el usuario ingrese S para sí

#include <iostream>

using namespace std;

int main() {
    int calificacion1, calificacion2, calificacion3;
    double promedio;
    char repetir; // Para capturar S o N

    do {
        // Obtener las 3 calificaciones
        cout << "Ingresa las 3 calificaciones para calcular su promedio: ";
        cin >> calificacion1 >> calificacion2 >> calificacion3;

        // Calcula y muestra el promedio
        promedio = (calificacion1 + calificacion2 + calificacion3) / 3.0;
        cout << "El promedio es " << promedio << endl;

        // Desea el usuario ingresar otro conjunto de calificaciones
        cout << "Deseas calcular otro promedio? (S/N): ";
        cin >> repetir;

    } while (repetir == 'S' || repetir == 's');
    return 0;
}