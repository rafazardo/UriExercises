#include <iomanip>
#include <iostream>
#include <math.h>
using namespace std;

int main() {
    
    int nInic,nFin,nCont,nSup;
    int nSoma = 0;

    cin >> nInic >> nFin;

    if (nInic > nFin) {
        nSup = nFin;
        nFin = nInic;
        nInic = nSup;
    }

    for (nCont = nInic + 1; nCont < nFin; nCont++) {
        if (nCont%2 != 0) {
            nSoma += nCont;
        }
    }

    cout << nSoma << endl;

    return 0;
}
