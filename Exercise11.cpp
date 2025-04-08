#include <iostream>
using namespace std;
int main() {
    double U;
    cin >> U;
    for (double n = 0.0; n <= 10; n++){
        cout << "U" << n << " = " << U << endl;
        U = U / (n + 1.0);
    }

    return 0;
}
