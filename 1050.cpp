#include <iomanip>
#include <iostream>
#include <math.h>
using namespace std;

int main() {
    
    int nDDD;

    cin >> nDDD;

    if (nDDD == 61) {
        cout << "Brasilia\n";
    }
    else {
        if (nDDD == 71) {
            cout << "Salvador\n";
        }
        else {
            if (nDDD == 11) {
                cout << "Sao Paulo\n";
            }
            else {
                if (nDDD == 21) {
                    cout << "Rio de Janeiro\n";
                }
                else {
                    if (nDDD == 32) {
                        cout << "Juiz de Fora\n";
                    }   
                    else {
                        if (nDDD == 19) {
                            cout << "Campinas\n";
                        }
                        else {
                            if (nDDD == 27) {
                                cout << "Vitoria\n";
                            }
                            else {
                                if (nDDD == 31) {
                                    cout << "Belo Horizonte\n";
                                }
                                else {
                                    cout << "DDD nao cadastrado\n";
                                }
                            }                            
                        }                        
                    }                 
                }            
            }            
        }
    }

    return 0;
}
