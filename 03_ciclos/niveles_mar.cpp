/*
 *
 * Elaborado por José L. García
 * 3. Niveles del océano
   Suponiendo que el nivel del océano está aumentando actualmente a
   aproximadamente 1.5 milímetros por año, escribe un programa que genere una tabla que
   muestre la cantidad de milímetros que el océano habrá aumentado cada año
   durante los próximos 25 años.
 */
// niveles_mar

#include <iostream>
using namespace std;

int main() {
    int anios = 1;
    cout << "Año\tIncremento" << endl;
    while (anios <= 25) {
        cout << anios << "\t\t"
                << anios * 1.5 << endl;
        anios++;
    }

    return 0;
}
