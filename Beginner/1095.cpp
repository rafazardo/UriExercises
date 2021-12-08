#include <iomanip>
#include <iostream>
#include <math.h>
using namespace std;

int main() {
    
    int nCont = 1;
    int nCont2 = 60;

    cout << "I=" << nCont << " " << "J=" << nCont2 << endl;
    nCont2 = 55;
    for (; nCont2 >= 0; nCont2 = nCont2 - 5) {
        nCont += 3;
        cout << "I=" << nCont << " " << "J=" << nCont2 << endl;
    }

    return 0;
}
