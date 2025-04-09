#include <iostream>
using namespace std;
int main() {
    int N, K, expo, EXP = 0;
    cout << "Ingrese el número que desea elevar junto a su potencia:" << endl;
    cin >> N >> K;
    for (int i = 1; i <= N; i++){
        expo = 1;
        for (int j = 1; j <= K; j++){
            expo *= i;
        }
        EXP += expo;
    }
    cout << EXP;

    return 0;
}
