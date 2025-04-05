#include <iostream>
#include <string>
using namespace std;
int main(){
    string cadena, word = "[";
    char indice;
    cout << "Ingrese la cadena:" << endl;
    getline (cin, cadena);
    for (int i = 0; i < cadena.size(); i++ ){
        indice = cadena[i];
        if (indice == ' '){
            word+= "]";
            cout << word<< endl;
            word = "[";
        }
        if (indice != ' '){
            word+= indice;
        }
        if (i == cadena.size() - 1){
            word+= "]";
            cout << word<< endl;
        }
    }
    
    return 0;
}
