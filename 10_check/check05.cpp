/* Elaborado por José L. García: viernes 7 de junio de 2024
 * Este programa
 * Nombre:
*/

#include <iostream>
#include <cmath>

using namespace std;

int main() {
    for (int noLista = 1; noLista <= 12; noLista++) {
        cout << "------------------------------" << noLista << endl;
        int unidades = noLista + 12;
        double precio = 6 + (noLista * 5);
        int descuento = 0;
        if (unidades >= 1 && unidades <= 9) {
            descuento = 20;
        } else if (unidades >= 10 && unidades <= 15) {
            descuento = 30;
        } else if (unidades >= 16 && unidades <= 20) {
            descuento = 40;
        } else if (unidades >= 21) {
            descuento = 50;
        }
        double cantidadADescontar = precio * (descuento / 100.0);
        double ventaTotal = (unidades * precio) - cantidadADescontar;
        double res = (4 * pow(unidades, 2)) - (2 * precio) + 7;

        cout << "Unidades: " << unidades << endl;
        cout << "Precio: " << precio << endl;
        cout << "Descuento: " << descuento << endl;
        cout << "cantidad A Descontar: " << cantidadADescontar << endl;

        cout << "Venta total: " << ventaTotal << endl;
        cout << "Resultado de la fórmula: " << res << endl;

        //int noLista = ______________;
        double peso = noLista * 6;
        double altura = 1.60;

        // Calcular IMC
        double imc = peso / (altura * altura);

        // Obtener mensaje
        string mensaje;
        if (18.5 <= imc && imc <= 25) {
            mensaje = "Optimo";
        } else if (25 < imc) {
            mensaje = "Sobrepeso";
        } else if (imc < 18.5) {
            mensaje = "Bajo peso";
        }

        // Imprimir resultados
        cout << "IMC: " << imc << endl;
        cout << "Mensaje: " << mensaje << endl;
    }

    return 0;
}









