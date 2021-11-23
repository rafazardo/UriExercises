#include <iomanip>
#include <iostream>
#include <math.h>
using namespace std;

int main() {
    
    int nA,nB,nC,nD;

     cin >> nA >> nB >> nC >> nD;

    if (nB > nC && nD > nA) {
        if ((nC+nD) > (nA+nB)) {
            if (nC >= 0 && nD >= 0) {
                if (nA%2 == 0) {
                    cout << "Valores aceitos" << endl;
                }
                else {
                    cout << "Valores nao aceitos" << endl;
                }
            }
            else {
                cout << "Valores nao aceitos" << endl;
            }
        }
        else {
            cout << "Valores nao aceitos" << endl;
        }
    }
    else {
        cout << "Valores nao aceitos" << endl;
    }
              
    return 0;
}