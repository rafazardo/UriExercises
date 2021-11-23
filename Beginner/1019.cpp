#include <iomanip>
#include <iostream>
#include <math.h>
using namespace std;

int main() {
    
    int nTemp,nSeg,nMin,nHor;

    cin >> nTemp;

    nSeg = nTemp % 60;
    nTemp = nTemp / 60;
    nMin = nTemp % 60;
    nTemp = nTemp / 60;
    nHor = nTemp % 60;

    cout << nHor << ":" << nMin << ":" << nSeg << endl;
    return 0;
}