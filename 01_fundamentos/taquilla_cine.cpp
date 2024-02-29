// Programa para calcular las ganancias de un cine y lo que le paga a su proveedor
#include <iostream>
#include <iomanip> // Para usar std::fixed y std::setprecision
#include <string> // Para usar std::string

using namespace std;

int main() {
    // Definir precios de boletos y porcentajes de ganancias
    const double precioAdulto = 10.00;
    const double precioNino = 6.00;
    const double porcentajeCine = 0.20;
    const double porcentajeDistribuidor = 0.80;

    // Variables para almacenar la información ingresada por el usuario
    string nombrePelicula;
    int entradasAdulto, entradasNino;

    // Pedir al usuario la información
    cout << "Nombre de la película: ";
    getline(cin, nombrePelicula); // Permite ingresar el nombre de la película con espacios

    cout << "Entradas para adultos vendidas: ";
    cin >> entradasAdulto;

    cout << "Entradas para niños vendidas: ";
    cin >> entradasNino;

    // Calcular ganancia bruta y neta de taquilla
    double gananciaBruta = (entradasAdulto * precioAdulto) + (entradasNino * precioNino);
    double gananciaNeta = gananciaBruta * porcentajeCine;
    double montoDistribuidor = gananciaBruta * porcentajeDistribuidor;

    // Mostrar el informe
    cout << "Nombre de la película: \t\t\t" << nombrePelicula << endl;
    cout << "Entradas para adultos vendidas: \t\t" << entradasAdulto << endl;
    cout << "Entradas para niños vendidas: \t\t" << entradasNino << endl;
    cout << "Ganancia bruta de taquilla: \t\t$" << fixed << setprecision(2) << gananciaBruta
         << endl;
    cout << "Ganancia neta de taquilla: \t\t$" << fixed << setprecision(2) << gananciaNeta
         << endl;
    cout << "Monto pagado al distribuidor: \t\t$" << fixed << setprecision(2)
         << montoDistribuidor << endl;

    return 0;
}
