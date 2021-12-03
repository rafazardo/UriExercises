#include <iomanip>
#include <iostream>
#include <math.h>
using namespace std;

int main() {
    
    int nDiv,nCont;

    cin >> nDiv;

    for (nCont = 1; nCont < 10000; nCont++) {
        if (nCont%nDiv == 2) {
            cout << nCont << endl;
        }
    }
    
    return 0;
}
