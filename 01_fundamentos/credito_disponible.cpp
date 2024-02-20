/*
 * 1. Crédito disponible
Un programa que calcula el crédito disponible de un cliente debe solicitar al usuario lo siguiente:

● La cantidad máxima de crédito del cliente.
● La cantidad de crédito utilizada por el cliente.

Una vez ingresados estos elementos, el programa debe calcular y mostrar el crédito disponible
 del cliente. Puedes calcular el crédito disponible restando la cantidad de crédito utilizada de
 la cantidad máxima de crédito.

 * */
#include <iostream>

using namespace std;

int main() {
    double cantidad_maxima_credito;
    double cantidad_credito_utilizada;
    double cantidad_disponible;
    cout << "Calcular el crédito disponible de un cliente" << endl;
    cout << "Dime la cantidad de credito máxima disponible: ";
    cin >> cantidad_maxima_credito;
    cout << "Dime la cantidad de crédito utilizada: ";
    cin >> cantidad_credito_utilizada;

    cantidad_disponible = cantidad_maxima_credito - cantidad_credito_utilizada;

    cout << "Tienes disponible: " << cantidad_disponible << endl;

    return 0;
}