#include <iostream>
#include <string>
using namespace std;
int main() {
    string mes = "";
    int n, k, espacio = 21;
    cout << "Ingrese los valores de su mes. Primero el día que inicia el mes y luego cuantos días tendra:" << endl;
    cin >> n >> k;
    if ((n < 1 or n > 7) or (k < 1 or k > 99)){
        cout << "Entradad invalida." << endl;
    }
    else{
        for (int i = 1; i < n; i++){
        mes += "   ";
        }
        for (int j = 1; j <= k; j++){
            while (mes.size() == espacio){
                mes += "\n";
                espacio += 22;
                break;
            }
            if (j >= 1 && j <= 9){
                mes += "  ";
            }
            else{
                mes += " ";
            }
            mes += to_string(j);
        }
        cout << mes;
    }
   
    return 0;
}
