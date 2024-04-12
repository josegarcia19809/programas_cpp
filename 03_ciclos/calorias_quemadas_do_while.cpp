/*
 * Elaborado por José L. García: g++ main.cpp -o main --- ./main
 */


#include <iomanip>
#include <iostream>

using namespace std;

int main() {
    int minutos = 5;
    cout << "minutos\t\tcalorías quemadas" << endl;
    do {
        cout << minutos << "\t\t\t"
             << (minutos * 3.6) << endl;

        minutos = minutos + 5;
    } while (minutos <= 30);

    return 0;
}