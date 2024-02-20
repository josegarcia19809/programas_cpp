/*
 * 2. Multa en una biblioteca
Un programa que calcula el monto total de una multa pagada a la biblioteca debe solicitar
 al usuario lo siguiente:

● La cantidad de días posteriores a la fecha de devolución del libro.
● Cobro de una multa por día

Una vez ingresados estos elementos, el programa debe calcular y mostrar lo siguiente:
● La multa total pagada a la biblioteca.


 * */
#include <iostream>

using namespace std;

int main() {
    int dias_atrasados;
    double cantidad_multa;
    double multa_a_pagar;
    cout << "Calcular la multa de usuarios de una biblioteca" << endl;
    cout << "Dime la cantidad de dias posteriores a la fecha de devolución: ";
    cin >> dias_atrasados;
    cout << "Dime la cantidad de cobro de la multa por día: ";
    cin >> cantidad_multa;

    multa_a_pagar = dias_atrasados * cantidad_multa;

    cout << "La multa que debes pagar es de: " << multa_a_pagar << endl;

    return 0;
}