#include <iomanip>
#include <iostream>
#include <math.h>
using namespace std;

int main() {
    
    double nNum[6];
    double nMed = 0;
    int nCont;
    int nQntd = 0;

    for (nCont = 0; nCont < 6; nCont++) {
        cin >> nNum[nCont];
    }
    
    for (nCont = 0; nCont < 6; nCont++) {
        if (nNum[nCont] > 0) {
            nQntd++;
            nMed += nNum[nCont];
        }        
    }    

    nMed = nMed / nQntd;

    cout << nQntd << " valores positivos\n";
    cout << fixed << setprecision(1) << nMed << endl;
   
    return 0;
}
