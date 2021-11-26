#include <iomanip>
#include <iostream>
#include <math.h>
using namespace std;

int main() {
    
    int nQntd,nCont;
    int nDent = 0;
    int nFora = 0;

    cin >> nQntd;

    int nValor[nQntd];

    for (nCont = 0; nCont < nQntd; nCont++) {
        cin >> nValor[nCont];
        if (nValor[nCont] >= 10 && nValor[nCont] <= 20) {
            nDent++;
        }
        else {
            nFora++;
        }
    }

    cout << nDent << " in\n";
    cout << nFora << " out\n";

    return 0;
}
