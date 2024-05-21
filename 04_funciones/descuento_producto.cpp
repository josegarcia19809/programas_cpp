/*
 * Elaborado por José L. García: lunes 20 de mayo de 2024
 *
 * Este programa calcula el descuento de un producto
 * Nombre: descuento_producto
 */

#include <iostream>

using namespace std;

// Función que recibe 2 números con decimales,
// parámetro precioOriginal: double. Indica el precio del producto sin descuento
// parámetro porcentajeDescuento: double. Indica el porcentaje del descuento
// Retornar precioConDescuento: double.
double calcularPrecioConDescuento(double precioOriginal, double porcentajeDescuento) {
    double precioConDescuento = precioOriginal - (precioOriginal * porcentajeDescuento / 100);
    return precioConDescuento;
}

int main() {
    cout << "-------------------------DESCUENTO DE UN PRODUCTO-------------------" << endl;
    double precioProducto, descuentoAplicado, precioTotal;

    cout << "Dame el precio original del producto: ";
    cin >> precioProducto;

    cout << "Dame el descuento que se le aplicará al producto: ";
    cin >> descuentoAplicado;

    precioTotal = calcularPrecioConDescuento(precioProducto, descuentoAplicado);
    cout << "El precio del producto con descuento es " << precioTotal << endl;

    return 0;
}



