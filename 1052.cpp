#include <iomanip>
#include <iostream>
#include <math.h>
using namespace std;

int main() {
    
    int nMes;

    cin >> nMes;

    if (nMes == 1) {
        cout << "January\n";
    }
    else {
        if (nMes == 2) {
            cout << "February\n";
        }
        else {
            if (nMes == 3) {
                cout << "March\n";
            }
            else {
                if (nMes == 4) {
                    cout << "April\n";
                }
                else {
                    if (nMes == 5) {
                        cout << "May\n";
                    }
                    else {
                        if (nMes == 6) {
                            cout << "June\n";
                        }
                        else {
                            if (nMes == 7) {
                                cout << "July\n";
                            }
                            else {
                                if (nMes == 8) {
                                    cout << "August\n";
                                }                
                                else {
                                    if (nMes == 9) {
                                        cout << "September\n";
                                    }
                                    else {
                                        if (nMes == 10) {
                                            cout << "October\n";
                                        }
                                        else {
                                            if (nMes == 11) {
                                                cout << "November\n";
                                            }
                                            else {
                                                cout << "December\n";
                                            }
                                        }
                                    }
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
