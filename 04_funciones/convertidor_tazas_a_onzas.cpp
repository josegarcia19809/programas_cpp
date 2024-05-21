/*
 * Elaborado por José L. García: lunes 20 de mayo de 2024
 *
 * Este programa calcula cuántas onzas líquidas caben en un determinado número de tazas
 * Nombre: convertidor_tazas_a_onzas
 */

#include <iostream>
#include <iomanip>

using namespace std;

// La función mostrarIntro() muestra una pantalla de introducción
void mostrarIntro() {
    cout << "Este programa convierte medidas de tazas a onzas líquidas. \n"
         << "Para su referencia, la fórmula es: \n"
         << "  1 taza = 8 onzas líquidas\n\n";
}

// La función obtenerTazas() le pide al usuario introducir el número de tazas y
// retorna el valor como un double
double obtenerTazas() {
    double numTazas;
    cout << "Ingresa el número de tazas: ";
    cin >> numTazas;
    return numTazas;
}

// La función tazasAOnzas() acepta un número de tazas como parámetro y
// retorna el número equivalente de onzas líquidas como un double
double tazasAOnzas(double numTazas) {
    return numTazas * 8.0;
}


int main() {
    double tazas, onzas;

    // Configurar el formato de la salida numérica
    cout << fixed << showpoint << setprecision(1);

    mostrarIntro();

    tazas = obtenerTazas();

    onzas = tazasAOnzas(tazas);

    cout << tazas << " tazas son iguales a " << onzas << " onzas\n";

    return 0;
}



