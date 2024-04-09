/*
 * Elaborado por José L. García
 */
#include <iostream>

using namespace std;

int main() {

    for (int no_lista = 1; no_lista <= 12; no_lista++) {

        cout << "-------------------------------------------------------no lista: " << no_lista
             << endl;
        int numClientes = 16500;

        int porcentajeBebidasEnergeticas = 15 * no_lista;
        int porcentajeSaborCitricos = 8 * no_lista;

        double clientesBEnergeticas = numClientes * (porcentajeBebidasEnergeticas / 100.0);
        double clientesBSaborCitricos = clientesBEnergeticas * (porcentajeSaborCitricos / 100.0);
        cout << "clientesBEnergeticas: " << clientesBEnergeticas << endl;
        cout << "clientesBSaborCitricos: " << clientesBSaborCitricos << endl;

        int precio_paquete = 12 * no_lista;
        int cantidad = 6 * no_lista;
        int total = precio_paquete * cantidad;
        int descuento;
        string mensaje;

        if (total == 2000) {
            mensaje = "Ha pagado lo justo";
            descuento = 20;
        } else if (total < 2000) {
            mensaje = "Pago menor";
            descuento = 10;
        } else {
            mensaje = "Pago mayor";
            descuento = 25;
        }

        double pago_total = total - (total * descuento / 100.0);
        cout << "mensaje: " << mensaje << endl;
        cout << "pago_total: " << pago_total << endl;
        cout << endl;
    }
    for (int no_lista = 13; no_lista <= 24; no_lista++) {

        cout << "-------------------------------------------------------no lista: " << no_lista
                << endl;

        int centavo1 = 3 * no_lista;
        int centavo5 = 1;
        int centavo10 = 3;
        int centavo25 = 1;

        int suma_total = (centavo25 * 25) + (centavo10 * 10) + (centavo5 * 5) + centavo1;

        string mensaje;

        if (suma_total == 100) {
            mensaje = "Exacto";
        } else if (suma_total < 100) {
            mensaje = "Es menor";
        } else {
            mensaje = "Es mayor";
        }

        cout << "suma_total: " << suma_total << endl;
        cout << "mensaje: " << mensaje << endl;

        int acciones = 750;
        double precio_accion = 35.00;
        double comision = no_lista;

        double monto_por_acciones = acciones * precio_accion;
        double monto_comision = monto_por_acciones * (comision / 100);
        double monto_por_acciones_y_comision = monto_por_acciones + monto_comision;

        cout << "monto_comision: " << monto_comision << endl;
        cout << "monto_por_acciones_y_comision: " << monto_por_acciones_y_comision << endl;

        cout << endl;

    }

    return 0;
}