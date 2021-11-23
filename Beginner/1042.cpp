#include <iomanip>
#include <iostream>
#include <math.h>
using namespace std;

void bolha (int a[], int n) {

    int nSupo2 = 0;
    int nSupo3 = 0;
    int nSupo4 = 0;

    for (nSupo2 = 0; nSupo2 < n; nSupo2++) {
        for (nSupo3 = nSupo2 + 1; nSupo3 < n; nSupo3++) {
            if (a[nSupo2] > a[nSupo3]) {
               nSupo4 = a[nSupo3];
               a[nSupo3] = a[nSupo2];
               a[nSupo2] = nSupo4;
            }
        }
    }
}

int main() {
    
    int a[3];
    int b[3];
    int nCont;
    
    for (nCont = 0; nCont < 3; nCont++) {
        cin >> a[nCont];
        b[nCont] = a[nCont];
    }   

    bolha(a,3);

    for (nCont = 0; nCont < 3; nCont++) {
        cout << a[nCont] << endl;
    }   

    cout << endl;

    for (nCont = 0; nCont < 3; nCont++) {
        cout << b[nCont] << endl;
    }    
    
    return 0;
}
