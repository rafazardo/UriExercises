#include <iomanip>
#include <iostream>
#include <math.h>
using namespace std;

int main() {
    
    double nTotalCob,nQntd,nQntdCob;
    char nTipCob;
    int nCont;
    double nTotSap = 0;
    double nTotCoe = 0;
    double nTotRat = 0;

    cin >> nQntd;

    for (nCont = 0; nCont < nQntd; nCont++) {
        cin >> nQntdCob >> nTipCob;
        if (nTipCob == 'C') {
            nTotCoe += nQntdCob;
        }
        else {
            if (nTipCob == 'R') {
                nTotRat += nQntdCob;
            }
            else {
                nTotSap += nQntdCob;
            }
        }
    }
    
    nTotalCob = nTotSap + nTotRat + nTotCoe;

    cout << "Total: " << nTotalCob <<  " cobaias\n";
    cout << "Total de coelhos: " << nTotCoe << endl;
    cout << "Total de ratos: " << nTotRat << endl;
    cout << "Total de sapos: " << nTotSap << endl;
    cout << fixed << setprecision(2) << "Percentual de coelhos: " << (nTotCoe/nTotalCob)*100 << " %\n";
    cout << fixed << setprecision(2) << "Percentual de ratos: " << (nTotRat/nTotalCob)*100 << " %\n";
    cout << fixed << setprecision(2) << "Percentual de sapos: " << (nTotSap/nTotalCob)*100 << " %\n";

    return 0;
}
