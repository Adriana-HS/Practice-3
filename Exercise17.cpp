#include <iostream>
#include <string>
using namespace std;
int main() {
    int num, residuo = 0, cont = 0, cont_primo = 0;
    cout << "Ingrese la cantidad de números primos deseados:\n ";
    cin >> num;
    string primo = "";
    if (num <= 0){
        cout << "Invalid input.\n ";
    }
    else{
        for (int i = 2; cont_primo < num; i++){
            cont = 0;
            for (int j = 2; j < i  && j <= 10 ; j++){
                residuo = (i) % j; 
                if (residuo == 0){
                    cont++;
                }
            }
            if (cont == 0){
                primo += (to_string(i) + " ");
                cont_primo++;
            }
        }
        cout << primo ;
    }

    return 0;
}
