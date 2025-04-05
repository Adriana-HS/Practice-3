#include <iostream>
using namespace std;
int main() {
    double ln2 = 0.0;
    int num = 0; 
    int signo = 1;
    cin >> num;
    for (int i = 1; i <= num; i++){
        ln2 += ((1.0/i) * signo);
        signo = -1 * signo;
    }
    cout << ln2;
   
    return 0;
}
