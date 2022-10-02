#include <iomanip>
#include <iostream>
#include <math.h>
using namespace std;

int main() {

    int arrayPar[5];
    int arrayImpar[5];
    int inputArray;
    int contImpar = 0;
    int contPar = 0;
    
    for (int i = 0; i < 15; i++) {

        cin >> inputArray;

        if (inputArray % 2 == 0) {
            if (contPar < 5) {
                arrayPar[contPar++] = inputArray;
            }
            else {
                for (int n = 0; n < contPar; n++) {
                    cout << "par[" << n << "] = " << arrayPar[n] << endl;
                }
                contPar = 0;
                arrayPar[contPar++] = inputArray;
            }
        }
        else {
            if (contImpar < 5) {
                arrayImpar[contImpar++] = inputArray;
            }
            else {
                for (int m = 0; m < contImpar; m++) {
                    cout << "impar[" << m << "] = " << arrayImpar[m] << endl;
                }
                contImpar = 0;
                arrayImpar[contImpar++] = inputArray;
            }
        }
    }


    for (int i = 0; i < contImpar; i++) {
        cout << "impar[" << i << "] = " << arrayImpar[i] << endl;
    }

    for (int i = 0; i < contPar; i++) {
        cout << "par[" << i << "] = " << arrayPar[i] << endl;
    }

    
    return 0;
}
