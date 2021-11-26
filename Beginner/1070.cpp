#include <iomanip>
#include <iostream>
#include <math.h>
using namespace std;

int main() {
    
    int nNum;
    int nCont = 0;

    cin >> nNum;

   while (true) {
        if (nNum%2 != 0) {
            cout << nNum << endl;
            nCont++;
        }
        if (nCont == 6) {
            break;
        }
        nNum++;
    }
    
    return 0;
}
