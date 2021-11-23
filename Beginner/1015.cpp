#include <iomanip>
#include <iostream>
#include <math.h>
using namespace std;

int main() {
    
    double nX1,nY1,nX2,nY2,nDist;
   
    cin >> nX1 >> nY1 >> nX2 >> nY2;

    nDist = sqrt(pow(nX2-nX1,2.0) + pow(nY2-nY1,2.0));
    
    cout << fixed << setprecision(4) << nDist << endl;
    return 0;
}