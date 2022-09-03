#include <iostream>
#include <iomanip>
using namespace std;

int main () {

    int nCont,nPos;
    int nMaior = -100000;
    int nNum[100];

    for (nCont = 0; nCont < 100; nCont++) {
        cin >> nNum[nCont];
        if (nNum[nCont] > nMaior) {
            nMaior = nNum[nCont];
            nPos = nCont;
        }
    }

    cout << nMaior << endl;
    cout << nPos+1 << endl;

    return 0;
}