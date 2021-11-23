#include <iomanip>
#include <iostream>
#include <math.h>
using namespace std;

int main() {
    
    int nValor2,nValor4;
    double nValor3;
    double nValor;
    double nCont = 0;

    cin >> nValor;

    nValor2 = nValor;
    nValor3 = nValor - nValor2;
    nValor4 = nValor3 * 100;

    cout << "NOTAS:\n";
    
    while (nValor2 >= 100) {
        nValor2 = nValor2 - 100;
        nCont++;
    }
    cout << nCont << " nota(s) de R$ 100.00" << endl;
    nCont = 0;

    while (nValor2 >= 50) {
        nValor2 = nValor2 - 50;
        nCont++;
    }
    cout << nCont << " nota(s) de R$ 50.00" << endl;
    nCont = 0;    

    while (nValor2 >= 20) {
        nValor2 = nValor2 - 20;
        nCont++;
    }
    cout << nCont << " nota(s) de R$ 20.00" << endl;
    nCont = 0;    

    while (nValor2 >= 10) {
        nValor2 = nValor2 - 10;
        nCont++;
    }
    cout << nCont << " nota(s) de R$ 10.00" << endl;
    nCont = 0;    

    while (nValor2 >= 5) {
        nValor2 = nValor2 - 5;
        nCont++;
    }
    cout << nCont << " nota(s) de R$ 5.00" << endl;
    nCont = 0;    

    while (nValor2 >= 2) {
        nValor2 = nValor2 - 2;
        nCont++;
    }
    cout << nCont << " nota(s) de R$ 2.00" << endl;
    nCont = 0;    

    cout << "MOEDAS:\n";

    while (nValor2 >= 1) {
        nValor2 = nValor2 - 1;
        nCont++;
    }
    cout << nCont << " moeda(s) de R$ 1.00" << endl;
    nCont = 0;    

    while (nValor4 >= 50) {
        nValor4 = nValor4 - 50;
        nCont++;
    }
    cout << nCont << " moeda(s) de R$ 0.50" << endl;
    nCont = 0;   

    while (nValor4 >= 25) {
        nValor4 = nValor4 - 25;
        nCont++;
    }
    cout << nCont << " moeda(s) de R$ 0.25" << endl;
    nCont = 0; 

    while (nValor4 >= 10) {
        nValor4 = nValor4 - 10;
        nCont++;
    }
    cout << nCont << " moeda(s) de R$ 0.10" << endl;
    nCont = 0;  
    
    while (nValor4 >= 5) {
        nValor4 = nValor4 - 5;
        nCont++;
    }
    cout << nCont << " moeda(s) de R$ 0.05" << endl;
    nCont = 0; 

    while (nValor4 >= 1) {
        nValor4 = nValor4 - 1;
        nCont++;
    }
    cout << nCont << " moeda(s) de R$ 0.01" << endl;
    nCont = 0;                
    return 0;
}