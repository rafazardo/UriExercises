#include <iomanip>
#include <iostream>
#include <math.h>
using namespace std;

int main() {
    
    int nQtd,nCont;
    
    cin >> nQtd;

    int nNum[nQtd];

    for (nCont = 0; nCont < nQtd; nCont++) {
        cin >> nNum[nCont];
    }

    for (nCont = 0; nCont < nQtd; nCont++) {
        if (nNum[nCont] == 0) {
            cout << "NULL\n";                
        }
        else {
            if (nNum[nCont]%2 == 0) {
                if (nNum[nCont] > 0) {
                    cout << "EVEN POSITIVE\n";
                }
                else {
                    cout << "EVEN NEGATIVE\n";
                }
            }
            else {
                if (nNum[nCont] > 0) {
                    cout << "ODD POSITIVE\n";
                }
                else {
                    cout << "ODD NEGATIVE\n";
                }
            }
        }
    }
    
    return 0;
}
