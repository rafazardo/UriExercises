#include <iomanip>
#include <iostream>
#include <math.h>
using namespace std;

int main() {
    
    int nNum[5];
    int nCont;
    int nPares = 0;

    for (nCont = 0; nCont < 5; nCont++) {
        cin >> nNum[nCont];
    }

    for (nCont = 0; nCont < 5; nCont++) {
        if (nNum[nCont]%2 == 0) {
            nPares++;
        }
    }
    
    cout << nPares << " valores pares\n";

    return 0;
}
