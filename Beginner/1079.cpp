#include <iomanip>
#include <iostream>
#include <math.h>
using namespace std;

int main() {
    
    int nQtd,nCont;

    cin >> nQtd;

    double nTerm[nQtd][3];
    double nMedia[nQtd];

    for (nCont = 0; nCont < nQtd; nCont++) {
        cin >> nTerm[nCont][0] >> nTerm[nCont][1] >> nTerm[nCont][2];
        nMedia[nCont] = ((nTerm[nCont][0]*2) + (nTerm[nCont][1]*3) + (nTerm[nCont][2]*5))/10.0;
    }

    for (nCont = 0; nCont < nQtd; nCont++) {
        cout << fixed << setprecision(1) << nMedia[nCont] << endl;
    }
    
    return 0;
}
