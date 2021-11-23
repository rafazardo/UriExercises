#include <iomanip>
#include <iostream>
#include <math.h>
using namespace std;

int main() {
    
    double nA,nB,nC;
    double nPi = 3.14159;
    cin >> nA >> nB >> nC;

    cout << fixed << setprecision(3) << "TRIANGULO: " << (nA*nC)/2.0  << endl;
    cout << fixed << setprecision(3) << "CIRCULO: " << pow(nC,2.0)*nPi << endl;
    cout << fixed << setprecision(3) << "TRAPEZIO: " <<  ((nA+nB)*nC)/2.0 << endl;
    cout << fixed << setprecision(3) << "QUADRADO: " << pow(nB,2.0) << endl;
    cout << fixed << setprecision(3) << "RETANGULO: " << nA*nB << endl;

    return 0;
}