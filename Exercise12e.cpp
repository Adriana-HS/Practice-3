#include <iostream>
using namespace std;
int main() {
    double U, V = 0.0;
    cin >> U;
    for (double n = 0.0; n < 10; n++){
        V += U;
        U = U / (n + 1.0);
        cout << "U" << n + 1 << " = " << U << " V" << n + 1 << " = " << V << endl;
    }

    return 0;
}
// Este algoritmo converge al 10, pero no muestra la salida requerida.
