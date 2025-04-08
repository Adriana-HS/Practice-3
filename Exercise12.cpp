#include <iostream>
using namespace std;
int main() {
    double U, V;
    cin >> U;
    for (double n = 0.0; n < 10; n++){
        U = U / (n + 1.0);
        V = 1;
        cout << "U" << n + 1 << " = " << U << " V" << n + 1 << " = " << V << endl;
    }

    return 0;
}
// Ejercicio 12 que muestra la salida del ejercicio y no converge a e.
