#include <iomanip>
#include <iostream>
#include <math.h>
using namespace std;

int main() {
    
    double nProd1Cod,nProd1Qnt,nProd1Prec,nProd2Cod,nProd2Qnt,nProd2Prec;

    cin >> nProd1Cod >> nProd1Qnt >> nProd1Prec >> nProd2Cod >> nProd2Qnt >> nProd2Prec;
    
    cout << fixed << setprecision(2) << "VALOR A PAGAR: R$ " << (nProd1Qnt*nProd1Prec) + (nProd2Qnt*nProd2Prec) << endl;

    return 0;
}