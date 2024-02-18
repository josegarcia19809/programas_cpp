// Este programa calcula el cobro total de un restaurante
#include <iostream>

using namespace std;

int main() {
    // Definir el cargo por la comida
    double costo_comida = 88.0;

    // Definir el porcentaje de impuesto y propina
    double porcentaje_impuesto = 6 / 100.0;
    double porcentaje_propina = 20 / 100.0;

    // Calcular el monto del impuesto
    double impuesto = costo_comida * porcentaje_impuesto;

    // Calcular el total después de agregar el impuesto
    double total_con_impuesto = costo_comida + impuesto;

    // Calcular el monto de la propina
    double propina = total_con_impuesto * porcentaje_propina;

    // Calcular la factura total
    double factura_total = costo_comida + impuesto + propina;

    // Mostrar los resultados
    cout << "Costo de la comida: $" << costo_comida << endl;
    cout << "Impuesto: $" << impuesto << endl;
    cout << "Propina: $" << propina << endl;
    cout << "Pago total: $" << factura_total << endl;


    return 0;
}