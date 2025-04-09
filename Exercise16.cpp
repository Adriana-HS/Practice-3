#include <iostream>
#include <string>
using namespace std;
int main() {
    int num1, num2, cociente = 0, residuo;
    cout << "Ingrese el dividendo y el divisor en enteros:" << endl;
    cin >> num1 >> num2;
    if (num1 <= 0 or num2 <= 0){
        cout << "Invalid input.\n ";
    }
    else{
        residuo = num1;
        for (int i = 0; num1 >= num2; i++){
            num1 -= num2;
            cociente++;
            residuo = num1;
        }
        cout << cociente << " "s << residuo;
    }

    return 0;
}
