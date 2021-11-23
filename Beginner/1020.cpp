#include <iomanip>
#include <iostream>
#include <math.h>
using namespace std;

int main() {
    
    int nTemp,nDias,nMeses,nAnos;

    cin >> nTemp;

    nAnos = nTemp / 365;
    nTemp = nTemp % 365;
    nMeses = nTemp / 30;
    nTemp = nTemp % 30;
    nDias = nTemp;

    cout << nAnos << " ano(s)\n";
    cout << nMeses << " mes(es)\n";
    cout << nDias << " dia(s)\n";
    return 0; 
}