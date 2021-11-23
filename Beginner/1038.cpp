#include <iomanip>
#include <iostream>
#include <math.h>
using namespace std;

int main() {
    
    double nItem,nQntd;

    cin >> nItem >> nQntd;

    if (nItem == 1) {
        cout << fixed << setprecision(2) << "Total: R$ " << nQntd*4.00 << endl;
    }
    else {
        if (nItem == 2) {
            cout << fixed << setprecision(2) << "Total: R$ " << nQntd*4.50 << endl;
        }
        else {
            if (nItem == 3) {
                cout << fixed << setprecision(2) << "Total: R$ " << nQntd*5.00 << endl;
            }
            else {
                if (nItem == 4) {
                    cout << fixed << setprecision(2) << "Total: R$ " << nQntd*2.00 << endl;
                }
                else {
                    if (nItem == 5) {
                        cout << fixed << setprecision(2) << "Total: R$ " << nQntd*1.50 << endl;
                    }
                }
            }
        }
    }
              
    return 0;
}
