#include <iomanip>
#include <iostream>
#include <math.h>
using namespace std;

int main() {
    
    double nPi = 3.14159;
    double nRaio;

    cin >> nRaio;

    cout << fixed << setprecision(3) << "VOLUME = " << (4.0/3)*nPi*pow(nRaio,3.0) << endl;

    return 0;
}