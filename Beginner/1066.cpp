#include <iomanip>
#include <iostream>
#include <math.h>
using namespace std;

int main() {
    
    int nNum[5];
    int nCont;
    int nPares = 0;
    int nImpar = 0;
    int nNegativo = 0;
    int nPositivo = 0;

    for (nCont = 0; nCont < 5; nCont++) {
        cin >> nNum[nCont];
    }

    for (nCont = 0; nCont < 5; nCont++) {
        if (nNum[nCont]%2 == 0) {
            nPares++;
        }
        else {
            nImpar++;
        }
        if (nNum[nCont] > 0) {
            nPositivo++;
        }
        else {
            if (nNum[nCont] < 0) {
                nNegativo++;
            }
        }
    }
    
    cout << nPares << " valor(es) par(es)\n";
    cout << nImpar << " valor(es) impar(es)\n";
    cout << nPositivo << " valor(es) positivo(s)\n";
    cout << nNegativo << " valor(es) negativo(s)\n";

    return 0;
}
