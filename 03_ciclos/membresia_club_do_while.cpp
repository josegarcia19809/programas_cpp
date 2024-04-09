/*
 * Elaborado por José L. García
 */
// Este programa mostrará un menú y le preguntará al usuario sobre su selección.
// Un ciclo do...while repetirá el programa hasta que el usuario seleccione
// la opción 4 del menú

#include <iomanip>
#include <iostream>

using namespace std;

int main() {
    // Constantes para las opciones del menú
    const int OPCION_ADULTO = 1, OPCION_NINIO = 2, OPCION_PERSONA_MAYOR = 3, OPCION_SALIR = 4;

    // Constantes para los pagos de membresía
    const double ADULTO = 40.0, NINIO = 20.0, PERSONA_MAYOR = 30;

    // Variables
    int opcion;
    int meses;
    double cargos;

    // Para que tenga el formato de moneda
    cout << fixed << showpoint << setprecision(2);

    do {
        // Mostrar el menú
        cout << "-------------------------------------------------------" << endl;
        cout << "\n\nMenú del Club de Salud: Cobro de membresías\n\n";
        cout << "1.- Membresía estándar para adultos." << endl;
        cout << "2.- Membresía para niños" << endl;
        cout << "3.- Membresía para personas mayores." << endl;
        cout << "4.- Salir del programa" << endl;
        cout << "Ingresa tu opción: ";
        cin >> opcion;

        // Validar la selección elegida
        while (opcion < OPCION_ADULTO || opcion > OPCION_SALIR) {
            cout << "Por favor ingresa una opción válida: ";
            cin >> opcion;
        }

        // Procesar la elección del usuario
        if (opcion != OPCION_SALIR) {
            // Obtener el número de meses
            cout << "Por cuántos meses? ";
            cin >> meses;
            // Calcula el costo de la membresía
            switch (opcion) {
                case OPCION_ADULTO:
                    cargos = meses * ADULTO;
                    break;
                case OPCION_NINIO:
                    cargos = meses * NINIO;
                    break;
                case OPCION_PERSONA_MAYOR:
                    cargos = meses * PERSONA_MAYOR;
                    break;
            }
            // Mostrar el cargo de la membresía
            cout << "Los cargos totales son de $" << cargos << endl;
        }

    } while (opcion != OPCION_SALIR);
    return 0;
}