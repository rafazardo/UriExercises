#include <iomanip>
#include <iostream>
#include <math.h>
using namespace std;

int main() {
    
    int arrayX[10];
    int inputArray;

    for (int i = 0; i < 10; i++) {
        cin >> inputArray;
        if (inputArray <= 0) {
            arrayX[i] = 1;
        }
        else {
            arrayX[i] = inputArray;
        }
    }

    for (int i = 0; i < 10; i++) {
        cout << "X[" << i << "] = " << arrayX[i] << endl;
    }    

    return 0;
}
