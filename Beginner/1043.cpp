#include <iomanip>
#include <iostream>
#include <math.h>
using namespace std;

int main() {
    
    double nA,nB,nC;
 
    cin >> nA >> nB >> nC;
        
    if (abs(nB-nC) < nA && nA < nB + nC) {
        if (abs(nA-nC) < nB && nB < nA + nC) {
            if (abs(nA-nB) < nC && nC < nA + nB) {
                cout << fixed << setprecision(1) << "Perimetro = " << nA + nB+ nC << endl;
            }
            else {
                cout << fixed << setprecision(1) << "Area = " << ((nA + nB)*nC)/2.0 << endl;
            }
        }
        else {
            cout << fixed << setprecision(1) << "Area = " << ((nA + nB)*nC)/2.0 << endl;
        }
    }
    else {
        cout << fixed << setprecision(1) << "Area = " << ((nA + nB)*nC)/2.0 << endl;
    }
    
    return 0;
}
