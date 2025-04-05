#include <iostream>
using namespace std;
int main(){
    long fact = 1, num;
    cout << "Ingrese el numero:" << endl;
    cin >> num;
    if (num < 0){
        cout << "El numero es negativo. Intentelo de nuevo" << endl;
    }
    else if (num > 14){
        cout << " El numero es muy grande. Intentelo de nuevo" << endl;
    }
    else{
        for (int i = 1; i <= num; i++){
            fact *= i;
        }
        cout << fact;
    }
    
    return 0;
}
