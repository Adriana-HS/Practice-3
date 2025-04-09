#include <iostream>
#include <string>
using namespace std;
int main() {
    int num;
    cout << "Ingrese el número :" << endl;
    cin >> num;
    string c_num = to_string(num);
    bool palindromo = true;
    for (int i = 0; i < c_num.size(); i++){
        if (c_num[i] != c_num[c_num.size()- (i + 1)]){
            palindromo = false;
        }
    }
    if (palindromo == true){
        cout << "Es un palíndromo";
    }

    return 0;
}
