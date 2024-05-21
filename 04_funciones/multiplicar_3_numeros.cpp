/*
 * Elaborado por José L. García: g++ main.cpp -o main --- ./main
 *
 * Este programa calcula la multiplicación de 3 números
 * Nombre: multiplicar_3_numeros
 */

#include <iostream>

using namespace std;

int multiplicacion(int num1, int num2, int num3) {
    int r;
    r = num1 * num2 * num3;
    return r;
}

int main() {
    // Se piden 3 números para hacer la multiplicación
    int numero1, numero2, numero3, resultado;
    cout << "----------------------MULTIPLICACIÓN------------------------" << endl;
    cout << "Dame primer número: ";
    cin >> numero1;

    cout << "Dame segundo número: ";
    cin >> numero2;

    cout << "Dame tercer número: ";
    cin >> numero3;

    // Se llama a la función y se le pasan los 3 números
    // lo que devuelva se guardará en resultado
    resultado = multiplicacion(numero1, numero2, numero3);

    cout << "El total de la multiplicación es " << resultado << endl;

    return 0;
}



