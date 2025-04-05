#include <iostream>
#include <string>
using namespace std;
int main() {
    string cadena = "";
    char indice;
    int f = 0;
    cin >> cadena;
    for (int i = 0; i < cadena.size(); i++){
        if (cadena[i] == 'f'){
            f++;
            if (f > 1){
                cout  << i << endl;
            }
        }
    }
    if (f == 0){
        cout << "-2"s;
    }
    else if (f == 1){
        cout << "-1"s;
    }
   
    return 0;
}
