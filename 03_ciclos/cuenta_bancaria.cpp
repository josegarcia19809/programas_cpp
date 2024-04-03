/*
 * Elaborado por José L. García
 * Cuenta bancaria
    Preguntar el saldo inicial: 1000
    Pedirá 6 depósitos:
    100 300 500 200 300 300: 1700

    Pedirá 6 retiros:
    800 50 60 70 100 120  : 1200

    Me dirá cuánto me queda:    : 1500
 */
#include <iostream>

using namespace std;

int main() {
    double balanceInicial = 0;
    double totalDepositos = 0;
    double totalRetiros = 0;
    double balanceFinal = 0;
    double deposito, retiro;

    cout << "Dame balance inicial: ";
    cin >> balanceInicial;

    int mes = 1;
    while (mes <= 6) {
        cout << "Dame depósito #" << mes << ": ";
        cin >> deposito;
        totalDepositos += deposito;
        mes++;
    }
    cout << "Total de depósitos: " << totalDepositos << endl;


    mes = 1;
    while (mes <= 6) {
        cout << "Dame retiro #" << mes << ": ";
        cin >> retiro;
        totalRetiros += retiro;
        mes++;
    }
    cout << "Total de retiros: " << totalRetiros << endl;

    balanceFinal = balanceInicial + totalDepositos - totalRetiros;
    cout << "Balance final: " << balanceFinal << endl;
    return 0;
}