#include <iostream>
using namespace std;
int main() {
    int num1, num2, MCD = 0;
    cin >> num1 >> num2;
    int mayor = num2;
    if (num1 > num2){
        mayor = num1;
    }
    for (int i = 1; i <= mayor; i++){
        if (num1 % i == 0 && num2 % i == 0){
            MCD = i;
        }
    }
    cout << MCD << endl;

    return 0;
}
