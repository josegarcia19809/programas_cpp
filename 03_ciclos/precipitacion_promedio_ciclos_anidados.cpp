/*
 * Elaborado por José L. García: g++ main.cpp -o main --- ./main
 *
 * Programa para calcular la precipitación promedio durante un período de años
 */

#include <iostream>

using namespace std;

int main() {

    int num_anios, total_meses = 0, total_lluvia = 0;
    double promedio_lluvia;

    string meses[] = {"Enero", "Febrero", "Marzo", "Abril",
                      "Mayo", "Junio", "Julio", "Agosto",
                      "Septiembre", "Octubre", "Noviembre", "Diciembre"};


    cout << "Ingrese el número de años: ";
    cin >> num_anios;

    // Validar el número de años
    if(num_anios<1){
        cout<<"Número de años no válido debe ser mayor que cero"<<endl;
        return -1;
    }

    // Bucle externo para iterar a través de cada año
    for (int anio = 1; anio <= num_anios; ++anio) {
        // Bucle interno para iterar a través de cada mes
        for (int mes = 1; mes <= 12; ++mes) {
            int lluvia;
            cout << "Ingrese las pulgadas de lluvia para el mes " << mes << " "
                 << meses[mes - 1] << " del año " << anio << ": ";
            cin >> lluvia;
            total_lluvia += lluvia;
            total_meses++;
        }
    }

    // Calcular la precipitación promedio
    promedio_lluvia = static_cast<double>(total_lluvia) / total_meses;

    // Mostrar resultados
    cout << "Número total de meses: " << total_meses << endl;
    cout << "Total de pulgadas de lluvia: " << total_lluvia << endl;
    cout << "Precipitación promedio mensual durante todo el período: "
         << promedio_lluvia << " pulgadas" << endl;

    return 0;
}
