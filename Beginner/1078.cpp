#include <iomanip>
#include <iostream>
#include <math.h>
using namespace std;

int main() {
    
    double nNum;
    int nCont;

    cin >> nNum;

    for (nCont = 1; nCont <= 10; nCont++) {
        cout << nCont << " x " << nNum << " = " << nCont*nNum << endl;
    }
    return 0;
}
