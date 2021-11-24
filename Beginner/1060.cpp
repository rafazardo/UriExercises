#include <iomanip>
#include <iostream>
#include <math.h>
using namespace std;

int main() {
    
    double nNum[6];
    int nCont;
    double nCont2 = 0;

    for (nCont = 0; nCont < 6; nCont++) {
        cin >> nNum[nCont];
        if (nNum[nCont] > 0) {
            nCont2++;
        }
    }
    
    cout << nCont2++ << " valores positivos\n";

    return 0;
}
