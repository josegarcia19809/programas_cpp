/*
 * Elaborado por José L. García: g++ main.cpp -o main --- ./main
 *
 * Programa para
 * Nombre: Operaciones_funciones
 */

#include <iostream>

using namespace std;
// Crear los prototipos de función

int sumar(int, int);

double restar(double, double);

int multiplicar(int, int);

float dividir(float, float);

int main() {
    int mi_suma = sumar(5, 6);
    cout << "La suma de 5 y 6 es " << mi_suma << endl;

    double mi_resta = restar(5.0, 6.0);
    cout << "La resta de 5 menos 6 es " << mi_resta << endl;

    int mi_producto = multiplicar(5, 6);
    cout << "La multiplicación de 5 por 6 es " << mi_producto << endl;

    float mi_division = dividir(18, 5);
    cout << "18 entre 5 es igual a " << mi_division << endl;

    return 0;
}

int sumar(int num1, int num2) {
    int resultado = num1 + num2;
    return resultado;
}

double restar(double num1, double num2) {
    return num1 - num2;
}

int multiplicar(int num1, int num2) {
    return num1 * num2;
}

float dividir(float num1, float num2) {
    return num1 / num2;
}