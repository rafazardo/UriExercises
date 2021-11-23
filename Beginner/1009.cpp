#include <iomanip>
#include <iostream>
#include <math.h>
using namespace std;

int main() {
    
    char cNome[100];
    double nSal,nVend;
    
    cin.getline(cNome,100);
    cin >> nSal >> nVend;

    cout << fixed << setprecision(2) << "TOTAL = R$ " << nSal + (0.15*nVend) << endl;
    
    return 0;
}