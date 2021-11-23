#include <iomanip>
#include <iostream>
#include <math.h>
using namespace std;

int main() {
    
    int nHoraIni,nHoraFin,nSup,nSup2;

    cin >> nHoraIni >> nHoraFin;

    if (nHoraIni == nHoraFin) {
        cout << "O JOGO DUROU " << 24 << " HORA(S)\n";
        return 0;
    }

    if (nHoraIni >= 0 && nHoraIni < 12) {
        nSup = 12 - nHoraIni;
    }
    else {
        nSup = 24 - nHoraIni;
    }

    if (nHoraFin >= 0 && nHoraFin < 12) {
        nSup2 = nHoraFin - 0;
    }
    else {
        nSup2 = nHoraFin - 12;
    }

    cout << "O JOGO DUROU " << nSup + nSup2 << " HORA(S)\n";
              
    return 0;
}
