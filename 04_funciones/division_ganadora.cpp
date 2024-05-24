/* Elaborado por José L. García: viernes 24 de mayo de 2024
 * Este programa muestra la división que obtuvo las mayores ventas trimestrales
 * Nombre: division ganadora
*/

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

double obtenerVentas(const string &nombreDivision) {
    double ventas;
    cout << "Escribe las ventas trimestrales de la división "
         << nombreDivision << ": ";
    cin >> ventas;
    while (ventas < 0) {
        cout << "Escribe un valor positivo: ";
        cin >> ventas;
    }
    return ventas;
}

void encontrarMayor(double ventasNorte, double ventasSur, double ventasEste,
                    double ventasOeste) {
    string divisionGanadora = "Norte";
    double ventaMayor = ventasNorte;

    if (ventasSur > ventaMayor) {
        divisionGanadora = "Sur";
        ventaMayor = ventasSur;
    }

    if (ventasEste > ventaMayor) {
        divisionGanadora = "Este";
        ventaMayor = ventasEste;
    }

    if (ventasOeste > ventaMayor) {
        divisionGanadora = "Oeste";
        ventaMayor = ventasOeste;
    }

    cout << "La división ganadora es " << divisionGanadora << " con ventas de $"
         << ventaMayor << endl;

}


int main() {
    double ventasNorte = obtenerVentas("Norte");
    double ventasSur = obtenerVentas("Sur");
    double ventasEste = obtenerVentas("Este");
    double ventasOeste = obtenerVentas("Oeste");

    encontrarMayor(ventasNorte, ventasSur, ventasEste, ventasOeste);
    return 0;
}












