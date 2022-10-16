#include <iomanip>
#include <iostream>
#include <math.h>
using namespace std;

int main() {
    
    int arrayX[10];
    int inputArray;

    cin >> inputArray;
    arrayX[0] = inputArray;

    for (int i = 1; i < 10; i++) {
        arrayX[i] = arrayX[i-1]*2;
    }    

    for (int i = 0; i < 10; i++) {
        cout << "N[" << i << "] = " << arrayX[i] << endl;
    }    

    return 0;
}
