#include <iostream>
#include <string>
using namespace std;
int main() {
    string cadena = "", verificador = "", verificador2 = "", word = "";
    char indice;
    bool palindromo = false;
    getline (cin, cadena);
    if (cadena.size() > 100){
        cout << "Entrada Invalida."s;
    }
    else {
        for (int i = 0; i < cadena.size(); i++){
            if (cadena[i] != ' ' ){
                word += cadena[i];
            }
        }
        if (word.size() == 0){
            cout << "YES"s;
        }
        else{
            for (int j = 0; j < word.size(); j++){
            verificador = word[j];
            verificador2 = word[word.size() - (1 + j)];
            if (verificador == verificador2){
                palindromo = true;
            }
            else{
                palindromo = false;
                cout << "NO"s;
                break;
            }
        }
        if (palindromo == true){
            cout << "YES"s;
        }
        }
    }
   
    return 0;
}
