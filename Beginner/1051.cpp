#include <iomanip>
#include <iostream>
#include <math.h>
using namespace std;

int main() {
    
    double nSal,nTax;

    cin >> nSal;

    if (nSal <= 2000.00) {
        cout << "Isento\n";
    } 
    else {
        if (nSal <= 3000.00) {
            nTax = (nSal - 2000)*0.08;
            cout << fixed << setprecision(2) << "R$ " << nTax << endl;
        }
        else {
            if (nSal <= 4500.00) {
            nTax = 1000*0.08 + (nSal - 3000)*0.18;
            cout << fixed << setprecision(2) << "R$ " << nTax << endl;
            }
            else {
                nTax = 1000*0.08 + 1500*0.18 + (nSal - 4500)*0.28;
                cout << fixed << setprecision(2) << "R$ " << nTax << endl;
            }
        }
    }
   
    return 0;
}
