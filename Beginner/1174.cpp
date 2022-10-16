#include <iomanip>
#include <iostream>
#include <math.h>
using namespace std;

int main() {
    
    double arrayX[100];
    double inputArray;

    for (int i = 0; i < 100; i++) {
        cin >> inputArray;
        arrayX[i] = inputArray;
    }    

    for (int i = 0; i < 100; i++) {
        if (arrayX[i] <= 10.0) {
            cout << fixed << setprecision(1) << "A[" << i << "] = " << arrayX[i] << endl;
        }
    }    

    return 0;
}
