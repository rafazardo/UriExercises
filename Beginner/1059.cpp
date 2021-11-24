#include <iomanip>
#include <iostream>
#include <math.h>
using namespace std;

int main() {
    
    int nNum;

    for (nNum = 1; nNum <= 100; nNum++) {
        if (nNum%2 == 0) {
            cout << nNum << endl;
        }
    }
    return 0;
}
