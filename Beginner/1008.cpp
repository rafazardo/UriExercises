#include <iomanip>
#include <iostream>
#include <math.h>
using namespace std;

int main() {
    
    double nFunc,nSalHor,nHorTrab;

    cin >> nFunc >> nHorTrab >> nSalHor;

    cout << "NUMBER = " << nFunc << endl;
    cout << fixed << setprecision(2) << "SALARY = U$ " << nHorTrab * nSalHor << endl;

    return 0;
}