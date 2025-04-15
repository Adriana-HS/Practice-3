#include <iostream>
using namespace std;
int main() {
    int num1, num2, modificador = 0, rep = 0;
    do{
        cout << "Ingrese los dos números:\n";
        cin >> num1 >> num2;
        if (num1 < 1){
            cout << "El numero debe de ser positivo y mayor a cero." << endl;
        }
        if (num2 < num1){
            cout << "El numero de fin no debe de ser menor al inicial." << endl;
        }
    }while((num1 < 1) or (num2 < num1));
    for (int i = num1; i <= num2; i++){
        rep = 0;
        modificador = i;
        while(modificador != 0){
            if (modificador % 3 == 0){
                modificador +=4;
                rep++;
            }
            else if(modificador % 4 == 0){
                modificador = modificador/2;
                rep++;
            }
            else {
                modificador --;
                rep++;
            }
        }
        cout << i << " ---> " << rep << endl;
    }

    return 0;
}
