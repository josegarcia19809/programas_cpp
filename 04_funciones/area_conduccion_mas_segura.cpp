/* Elaborado por José L. García: miércoles 5 de junio de 2024
 * Este programa muestra el área de conducción más segura
 * Nombre: area_conduccion_mas_segura
*/

#include <iostream>
#include <string>

using namespace std;

int obtenerNumAccidentes(const string &nombreRegion) {
    int numAccidentes;
    cout << "Dame el número de accidentes de la región " << nombreRegion << ": ";
    cin >> numAccidentes;

    while (numAccidentes < 0) {
        cout << "Ingresa un valor positivo: ";
        cin >> numAccidentes;
    }

    return numAccidentes;
}

void encontrarMenor(int accidentesNorte, int accidentesSur, int accidentesEste,
                    int accidentesOeste, int accidentesCentral) {

    string regionMasSegura = "Norte";
    int menorNumAccidentes = accidentesNorte;

    if (accidentesSur < menorNumAccidentes) {
        regionMasSegura = "Sur";
        menorNumAccidentes = accidentesSur;
    }

    if (accidentesEste < menorNumAccidentes) {
        regionMasSegura = "Este";
        menorNumAccidentes = accidentesEste;
    }

    if (accidentesOeste < menorNumAccidentes) {
        regionMasSegura = "Oeste";
        menorNumAccidentes = accidentesOeste;
    }
    if (accidentesCentral < menorNumAccidentes) {
        regionMasSegura = "Central";
        menorNumAccidentes = accidentesCentral;
    }

    cout << "La región más segura es "
         << regionMasSegura << " con "
         << menorNumAccidentes << " accidentes." << endl;


}


int main() {
    int accidentesNorte = obtenerNumAccidentes("Norte");
    int accidentesSur = obtenerNumAccidentes("Sur");
    int accidentesEste = obtenerNumAccidentes("Este");
    int accidentesOeste = obtenerNumAccidentes("Oeste");
    int accidentesCentral = obtenerNumAccidentes("Central");


    encontrarMenor(accidentesNorte, accidentesSur, accidentesEste, accidentesOeste,
                   accidentesCentral);

    return 0;
}









