#include <iostream>
#include <string>
using namespace std;
int main(){
    string torta;
    char verificador;
    getline (cin, torta);
    for (int i = 0; i < torta.size() && i < 10; i++ ){
        verificador = torta[i];
        if (verificador != '0' && verificador != '1'){
            cout << "Entrada no valida." << endl;
            break;
        }
        if (verificador == '0'){
            cout << " No cake :(" << endl;
            break;
        }
        cout << " Om-nom-nom :P" << endl;
    }
    
    return 0;
}
