/* Elaborado por José L. García: viernes 7 de junio de 2024
 * Este programa calcula las calorías malas de alimentos
 * Nombre: calculadora_calorias
*/

#include <iostream>
#include <cmath>

using namespace std;

double obtenerPeso(const string &sustancia) {
    double peso;
    cout << "Dame el peso de " << sustancia << " en libras: ";
    cin >> peso;

    // Validar
    while (peso < 0) {
        cout << "Debes escribir un valor positivo: ";
        cin >> peso;
    }
    return peso;
}

double calcularCaloriasGrasa(double peso) {
    return peso * 4100;
}

double calcularCaloriasAzucar(double peso) {
    return peso * 936;
}

double calcularCaloriasMalas() {
    double pesoAzucar = obtenerPeso("Azúcar");
    double pesoGrasa = obtenerPeso("Grasas");

    double caloriasAzucar = calcularCaloriasAzucar(pesoAzucar);
    double caloriasGrasas = calcularCaloriasGrasa(pesoGrasa);

    return caloriasAzucar + caloriasGrasas;
}

int main() {
    double totalCaloriasMalas = calcularCaloriasMalas();
    cout << "Total de calorías malas: " << totalCaloriasMalas << endl;
    return 0;
}









