#include <iomanip>
#include <iostream>
#include <math.h>
using namespace std;

int main() {
    
    int nNum;
    int nMax;

    cin >> nMax;

    for (nNum = 1; nNum <= nMax; nNum = nNum + 2) {
        cout << nNum << endl;
    }
    
    return 0;
}
