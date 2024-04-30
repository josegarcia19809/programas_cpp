/*
 * Elaborado por José L. García: g++ main.cpp -o main --- ./main
 *
 * Programa para calcular el número total de puntos que un equipo de fútbol
 * ha ganado En una serie de juegos. El usuario ingresa una serie de valores de puntos
 * e ingresará -1 cuando termina
 */

#include <iostream>

using namespace std;

int main() {
    int juegos = 1; // Contador de juegos
    int puntos; // Para guardar los puntos obtenidos
    int total = 0; // Acumulador

    cout << "Introduce el número de puntos que ha ganado tu equipo\n";
    cout << "hasta ahora en la temporada, luego ingresa -1 cuando termines\n\n";

    cout << "Ingresa los puntos para el juego " << juegos << ": ";
    cin >> puntos;

    while (puntos != -1) {
        total = total + puntos;
        juegos++;
        cout << "Ingresa los puntos para el juego " << juegos << ": ";
        cin >> puntos;
    }

    cout << "\nEl total de puntos obtenidos es de " << total << endl;

    return 0;
}
