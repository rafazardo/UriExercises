#include <iomanip>
#include <iostream>
#include <math.h>
using namespace std;

int main() {
    
    double nValor;
    double nCont = 0;

    cin >> nValor;
    cout << nValor << endl;
    
    while (nValor >= 100) {
        nValor = nValor - 100;
        nCont++;
    }
    cout << nCont << " nota(s) de R$ 100,00" << endl;
    nCont = 0;

    while (nValor >= 50) {
        nValor = nValor - 50;
        nCont++;
    }
    cout << nCont << " nota(s) de R$ 50,00" << endl;
    nCont = 0;    

    while (nValor >= 20) {
        nValor = nValor - 20;
        nCont++;
    }
    cout << nCont << " nota(s) de R$ 20,00" << endl;
    nCont = 0;    

    while (nValor >= 10) {
        nValor = nValor - 10;
        nCont++;
    }
    cout << nCont << " nota(s) de R$ 10,00" << endl;
    nCont = 0;    

    while (nValor >= 5) {
        nValor = nValor - 5;
        nCont++;
    }
    cout << nCont << " nota(s) de R$ 5,00" << endl;
    nCont = 0;    

    while (nValor >= 2) {
        nValor = nValor - 2;
        nCont++;
    }
    cout << nCont << " nota(s) de R$ 2,00" << endl;
    nCont = 0;    

    while (nValor >= 1) {
        nValor = nValor - 1;
        nCont++;
    }
    cout << nCont << " nota(s) de R$ 1,00" << endl;
    nCont = 0;    

    return 0;
}