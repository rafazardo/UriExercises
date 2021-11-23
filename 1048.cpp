#include <iomanip>
#include <iostream>
#include <math.h>
using namespace std;

int main() {
    
    double nSal,nRea;

    cin >> nSal;

    if (nSal >= 0 && nSal <= 400.00) {
        nRea = (15.00/100.00)*nSal;
        cout << fixed << setprecision(2) <<"Novo salario: " << nSal + nRea << endl;
        cout << fixed << setprecision(2) <<"Reajuste ganho: " << nRea << endl; 
        cout << "Em percentual: 15 %\n";
    }
    else {
        if (nSal >= 400.01 && nSal <= 800.00) {
                nRea = (12.00/100.00)*nSal;
                cout << fixed << setprecision(2) <<"Novo salario: " << nSal + nRea << endl;
                cout << fixed << setprecision(2) <<"Reajuste ganho: " << nRea << endl; 
                cout << "Em percentual: 12 %\n";
        }
        else {
            if (nSal >= 400.01 && nSal <= 800.00) {
                nRea = (12.00/100.00)*nSal;
                cout << fixed << setprecision(2) <<"Novo salario: " << nSal + nRea << endl;
                cout << fixed << setprecision(2) <<"Reajuste ganho: " << nRea << endl; 
                cout << "Em percentual: 12 %\n";
            }
            else {
                if (nSal >= 800.01 && nSal <= 1200.00) {
                    nRea = (10.00/100.00)*nSal;
                    cout << fixed << setprecision(2) <<"Novo salario: " << nSal + nRea << endl;
                    cout << fixed << setprecision(2) <<"Reajuste ganho: " << nRea << endl; 
                    cout << "Em percentual: 10 %\n";
                }
                else {
                    if (nSal >= 1200.01 && nSal <= 2000.00) {
                        nRea = (7.00/100.00)*nSal;
                        cout << fixed << setprecision(2) <<"Novo salario: " << nSal + nRea << endl;
                        cout << fixed << setprecision(2) <<"Reajuste ganho: " << nRea << endl; 
                        cout << "Em percentual: 7 %\n";
                    }
                    else {
                        nRea = (4.00/100.00)*nSal;
                        cout << fixed << setprecision(2) <<"Novo salario: " << nSal + nRea << endl;
                        cout << fixed << setprecision(2) <<"Reajuste ganho: " << nRea << endl; 
                        cout << "Em percentual: 4 %\n";
                    }
                }            
            }
        }        
    }

    return 0;
}
