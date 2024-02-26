// Programa para un estadio. Son 3 categorías de asientos.
// Según el tipo de asiento se cobra una cantidad. Checar cuánto se vendió.
#include <iostream>
#include <iomanip> // Para usar fixed y setprecision

using namespace std;

int main() {
    // Definir los precios de los boletos
    const double precio_boleto_clase_A = 15.00;
    const double precio_boleto_clase_B = 12.00;
    const double precio_boleto_clase_C = 9.00;

    // Declarar variables para almacenar la cantidad de boletos vendidos de cada clase
    int boletos_vendidos_clase_A, boletos_vendidos_clase_B, boletos_vendidos_clase_C;

    // Pedir al usuario la cantidad de boletos vendidos de cada clase
    cout << "Ingresa la cantidad de boletos vendidos para la clase A: ";
    cin >> boletos_vendidos_clase_A;

    cout << "Ingresa la cantidad de boletos vendidos para la clase B: ";
    cin >> boletos_vendidos_clase_B;

    cout << "Ingresa la cantidad de boletos vendidos para la clase C: ";
    cin >> boletos_vendidos_clase_C;

    // Calcular los ingresos totales
    double ingresos_totales;
    ingresos_totales = (precio_boleto_clase_A * boletos_vendidos_clase_A) +
                       (precio_boleto_clase_B * boletos_vendidos_clase_B) +
                       (precio_boleto_clase_C * boletos_vendidos_clase_C);

    // Mostrar los ingresos totales con formato de moneda
    cout << "Los ingresos totales por la venta de boletos son: $" << fixed
         << setprecision(2) << ingresos_totales << endl;

    return 0;
}