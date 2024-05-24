/* Elaborado por José L. García: lunes 20 de mayo de 2024
 * Este programa calcula el precio minorista de un producto
 * Nombre: aumento_precio
*/

#include <iostream>
#include <iomanip>

using namespace std;

double calcularPrecioVenta(double costoMayorista, int porcentajeAumento) {
    double costoMinorista = costoMayorista + (costoMayorista * porcentajeAumento / 100.00);
    return costoMinorista;
}


int main() {
    double precioAlMayoreo, precioMenudeo;
    int porcentajeDeAumento;
    cout << "Dame precio del producto al mayoreo: ";
    cin >> precioAlMayoreo;

    // Validar entrada
    while (precioAlMayoreo < 0) {
        cout << "El valor debe ser positivo" << endl;
        cout << "Dame nuevamente precio del producto: ";
        cin >> precioAlMayoreo;
    }

    cout << "Dame porcentaje de aumento para venta al menudeo: ";
    cin >> porcentajeDeAumento;

    // Validar entrada
    while (porcentajeDeAumento < 0) {
        cout << "El valor debe ser positivo" << endl;
        cout << "Dame nuevamente porcentaje de aumento: ";
        cin >> porcentajeDeAumento;
    }

    // Calcular precio al menudeo
    precioMenudeo = calcularPrecioVenta(precioAlMayoreo, porcentajeDeAumento);
    cout << "El precio al menudeo debe ser $" << precioMenudeo << endl;

    return 0;
}












