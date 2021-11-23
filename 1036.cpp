#include <iomanip>
#include <iostream>
#include <math.h>
using namespace std;

int main() {
    
    double nA,nB,nC,nDelt;

    cin >> nA >> nB >> nC;
              
    nDelt = pow(nB,2.0)-4*nA*nC;

    if (nA == 0 || nDelt < 0) {
        cout << "Impossivel calcular\n";
        return 0;
    }    

    cout << fixed << setprecision(5) << "R1 = " << (-nB + sqrt(nDelt)) / (2.0*nA) << endl;
    cout << fixed << setprecision(5) << "R2 = " << (-nB - sqrt(nDelt)) / (2.0*nA) << endl;
    return 0;
}
