#include <iomanip>
#include <iostream>
#include <math.h>
using namespace std;

int main() {
    
    double nA,nB,nC,nMaior;

    cin >> nA >> nB >> nC;

    nMaior = ((nA+nB+abs(nA-nB)))/2.0;
    nMaior = ((nMaior+nC+abs(nMaior-nC)))/2.0;

    cout << nMaior << " eh o maior\n"; 
    return 0;
}