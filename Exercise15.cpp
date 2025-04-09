#include <iostream>
#include <string>
using namespace std;
int main() {
    int num, residuo = 0, cociente;
    cout << "Ingrese el número :" << endl;
    cin >> num;
    string cad = "", bin = "";
    for (int i = 1; cociente != 0; i++){
        cociente = num / 2;
        residuo = num % 2;
        num = cociente;
        cad += to_string(residuo);
    }
    for (int j = 0; j < cad.size(); j++){
        bin += cad[cad.size() - (j +1)];
    }
    cout << bin;

    return 0;
}
