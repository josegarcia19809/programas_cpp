/* Elaborado por José L. García: viernes 24 de mayo de 2024
 * Este programa calcula el área de un rectángulo
 * Nombre: area_rectangulo
*/

#include <iostream>
#include <iomanip>

using namespace std;

double obtenerLargo() {
    double largo;
    cout << "Escribe el largo del rectángulo: ";
    cin >> largo;
    return largo;
}

double obtenerAncho() {
    double ancho;
    cout << "Escribe el ancho del rectángulo: ";
    cin >> ancho;
    return ancho;
}

double calcularArea(double largura, double anchura) {
    return largura * anchura;
}

void mostrarDatos(double largura, double anchura, double area) {
    cout << "El rectángulo con largura " << largura << " y anchura " << anchura
         << " tiene " << area << " unidades cuadradas" << endl;
}


int main() {
    double largo = obtenerLargo();
    double ancho = obtenerAncho();
    double area = calcularArea(largo, ancho);
    mostrarDatos(largo, ancho, area);
    return 0;
}