#include <iomanip>
#include <iostream>
using namespace std;

int main() {
    
    double nX,nY;
    cin >> nX >> nY;

    if (nY == 0 && nX == 0) {
        cout << "Origem" << endl;
    }
    else {
        if (nY == 0) {
            cout << "Eixo X" << endl;
        }
        else {
            if (nX == 0) {
                cout << "Eixo Y" << endl;
            }
            else {
                if (nX > 0 && nY > 0) {
                   cout << "Q1" << endl; 
                }
                else {
                    if (nX < 0 && nY > 0) {
                        cout << "Q2" << endl;
                    }
                    else {
                        if (nX < 0 && nY < 0) {
                            cout << "Q3" << endl;
                        }
                        else {
                            cout << "Q4" << endl;
                        }
                    }
                }
            }
        }
    }

    return 0;
}