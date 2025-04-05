#include <iostream>
#include <string>
using namespace std;
int main() {
    int sum = 0;
    string num;
    cout << "Ingrese el número que desea sumar:" << endl;
    cin >> num;
    for (int i = 0; i < num.size(); i++){
        sum += num[i] - '0';
    }
   cout << sum;
    return 0;
}
