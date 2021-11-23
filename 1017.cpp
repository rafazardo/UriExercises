#include <iomanip>
#include <iostream>
#include <math.h>
using namespace std;

int main() {
    
    double nTempViag,nVelViag,nTotKm,nTotLit;

    cin >> nTempViag >> nVelViag;
    nTotKm = nTempViag * nVelViag;
    nTotLit = nTotKm / 12.0;

    cout << fixed << setprecision(3) << nTotLit << endl;
    return 0;
}