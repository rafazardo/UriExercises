#include <iomanip>
#include <iostream>
#include <math.h>
using namespace std;

int main() {
    
    double nNum;

    cin >> nNum;
 
    if (nNum >= 0 && nNum <= 25) {
        cout << "Intervalo [0,25]\n"; 
    }
    else {
        if (nNum > 25 && nNum <= 50) {
            cout << "Intervalo (25,50]\n";
        }
        else {
            if (nNum > 50 && nNum <= 75) {
               cout << "Intervalo (50,75]\n"; 
            }
            else {
                if (nNum > 75 && nNum <= 100) {
                    cout << "Intervalo (75,100]\n";
                }
                else {
                    cout << "Fora de intervalo\n";
                }
            }
        }
    }

    return 0;
}
