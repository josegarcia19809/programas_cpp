/*
 * Elaborado por José L. García: g++ main.cpp -o main --- ./main
 * contador_for_de_cero_a_cien
 */

#include <iostream>

using namespace std;

int main() {
    for (int i = 0; i <= 100; i = i + 2) {
        cout << " " << i;
    }
    cout << endl;

    return 0;
}