#include <iomanip>
#include <iostream>
#include <math.h>
using namespace std;

int main() {
    
    double nKm,nGasol;
    
    cin >> nKm >> nGasol;

    cout << fixed << setprecision(3) << nKm/nGasol << " km/l\n";
    
    return 0;
}