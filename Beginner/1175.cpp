#include <iomanip>
#include <iostream>
#include <math.h>
using namespace std;

int main() {
    
    int arrayX[4];
    int inputArray;
    int contadorAux = 3;

    for (int i = 0; i < 4; i++) {
        cin >> inputArray;
        arrayX[i] = inputArray;
    }    

    for (int i = 0; i < 4; i++) {
        int temp = arrayX[i];
        arrayX[i] = arrayX[contadorAux];
        arrayX[contadorAux] = temp;
        contadorAux--;
    }    

    for (int i = 0; i < 4; i++) {
        cout << "N[" << i << "] = " << arrayX[i] << endl;
    }     

    return 0;
}
