/*
 * 3. Saldo de la cuenta
Un programa que calcula el saldo actual en una cuenta de ahorros debe solicitar al usuario
 lo siguiente:

● El saldo inicial
● El monto total en dólares de los depósitos realizados.
● El monto total en dólares de los retiros realizados

Una vez que el programa calcula el saldo actual, debería mostrarse en la pantalla.
 * */
#include <iostream>

using namespace std;

int main() {
    double saldo_inicial;
    double total_depositos;
    double total_retiros;
    double saldo_actual;
    cout << "Calcular el saldo actual en una cuenta de ahorros" << endl;
    cout << "Dime el saldo inicial: ";
    cin >> saldo_inicial;
    cout << "Dime el total de depósitos: ";
    cin >> total_depositos;
    cout << "Dime el total de retiros: ";
    cin >> total_retiros;

    saldo_actual = saldo_inicial + total_depositos - total_retiros;

    cout << "Tu saldo actual es de: " << saldo_actual << endl;

    return 0;
}