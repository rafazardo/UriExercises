#include <iomanip>
#include <iostream>
#include <math.h>
using namespace std;

int main() {
    
    int nA,nB,nCont;

    cin >> nA >> nB;
    
    if (nA%nB == 0 || nB%nA == 0) {
        cout << "Sao Multiplos\n";
    }
    else {
        cout << "Nao sao Multiplos\n";
    }
    return 0;
}
