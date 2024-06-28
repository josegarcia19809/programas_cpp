/* Elaborado por José L. García: viernes 7 de junio de 2024
 * Este programa
 * Nombre:
*/

#include <iostream>
#include <cmath>

using namespace std;


int main() {
    for (int noLista = 1; noLista <= 12; noLista++) {
        cout<<"------------------------------"<<noLista<<endl;
        int numeroX = noLista;
        int p1 = numeroX + (5 * 100);
        double p2 = (numeroX % 10) * (pow(numeroX, 2)) / 10.0;
        double p3 = numeroX + 15 / 100.0;

        //cout << numeroX + p1 << endl;
        cout <<"p1: "<< p1 << endl;
        cout <<"p2: "<< p2 << endl;
        cout <<"p3: "<< p3 << endl;
cout<<endl;
        int numero2 = noLista;
        int c1 = 10;
        int c2 = 8;
        int c3 = 4;
        int c4 = 2;

        int total = c1 + (c2 * 5) + (c3 * 10) + (c4 * 25);
        double salida;

        if (total > 100) {
            salida = sqrt(total) - (c1 * numero2);
        } else {
            salida = sqrt(total) + (c1 * numero2);
        }

        cout<<"Total: "<<total<<endl;
        cout<<"Salida: "<<salida<<endl;
        cout<<endl;

        int s1 = 0;
        int num = noLista;
        int cont = 10;

        while (cont >= 4) {
            s1 = s1 + num;
            cont = cont - 1;
        }

        int x = 0;
        for (int i = num; i < 21; i++) {
            if (i % 2 == 1) {
                x = x + i;
            }
        }
        cout<<endl;
        cout<<"s1: "<<s1<<endl;
        cout<<"x: "<<x<<endl;
        cout<<endl;



        int numero = 0;
        if (noLista <= 6) {
            numero = noLista + 6;
        } else {
            numero = noLista - 6;
        }
        cout << "numero: "<<numero<<endl;
        cout<<"----"<<endl;
        int menor = numero;
        while (numero >= -100) {
            numero = numero - 12;
            if (numero < menor) {
                menor = numero;
                cout << menor << endl;
            }
        }
        int salidax = menor;
        cout<<"\n----"<<endl;
        cout << "Salida: " << salidax << endl;

    }

    return 0;
}









