#include <iostream>
#include <string>
using namespace std;
int main(){
    string cadena; 
    char indice;
    cout << "Ingrese el documento que desea buscar:" << endl;
    getline (cin, cadena);
    int size_cadena = cadena.size();
    int size_word = 0;
    for (int i = 0; (i-1) < size_cadena; i++ ){
        indice = cadena[i];
        if (indice == ' '){
            cout << size_word << endl;
        }
        size_word++;
    }
    cout << size_cadena;

    return 0;
}
