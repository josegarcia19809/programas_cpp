/* Elaborado por José L. García: lunes 27 de mayo de 2024
 * Este programa calcula la sucesión de 2 formulas
 * Nombre: dos_formulas_sucesion
*/

#include <iostream>


using namespace std;

int main() {
    for (int numLista = 1; numLista <= 24; numLista++) {
        cout << "--------------------------------------" << numLista << endl;
        int contador = 1;
        int numCigarros;
        double totalCigarros = 0;
        double peso, promedioCigarros, promedioPeso;
        double totalPeso = 0;
        int aprobados = 0;
        while (contador <= 6) {
            numCigarros = numLista + contador;
            peso = numLista + contador + 50;

            if (numCigarros < 26 && peso < 90) {
                aprobados++;
                totalCigarros = totalCigarros + numCigarros;
                totalPeso = totalPeso + peso;
            }
            contador++;
        } // fin de while

        promedioCigarros = totalCigarros / aprobados;
        promedioPeso = totalPeso / aprobados;
        cout << "Promedio Cigarros: "
             << promedioCigarros << endl;
        cout << "Promedio peso: "
             << promedioPeso << endl;

    }
    return 0;
}
