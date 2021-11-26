#include <iomanip>
#include <iostream>
#include <math.h>
using namespace std;

int main() {
    
    int nCont;
    double nNum,nSup;
    
    cin >> nNum;

    for (nCont = 1; nCont <= nNum; nCont++) {
        if (nCont%2 == 0) {
            nSup = nCont;
            cout << fixed << setprecision(0) << nSup << "^2 = "  << pow(nCont,2.0) << endl;
        }
    }

    return 0;
}
