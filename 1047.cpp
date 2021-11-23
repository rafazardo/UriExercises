#include <iomanip>
#include <iostream>
#include <math.h>
using namespace std;

int main() {
    
    int nHoraIni,nHoraFin,nMinIni,nMinFin,nHorTot,nMinTot,nCont;
    int nCont2 = 0;

    cin >> nHoraIni >> nMinIni >>  nHoraFin >> nMinFin;

    if (nHoraIni == nHoraFin && nMinIni == nMinFin) {
        cout << "O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)\n";
        return 0;
    }
    nHorTot = (nHoraFin*60 + nMinFin) - (nHoraIni*60 + nMinIni);

    nMinTot = nHorTot % 60;
    nHorTot = nHorTot / 60;

    if (nHorTot < 0) {
        // cout << nHorTot << endl;
        nHorTot += 24;
    }

    if (nMinTot < 0) {
        nMinTot += 60;
    }

    for (nCont = nHoraIni; nCont != nHoraFin; nCont++) {
        if (nCont == 24) {
            if (nMinIni != nMinFin) {
                nHorTot -= 1;
            }
            break;
        }
    }

    if (nHoraIni == nHoraFin && nHoraFin == 0) {
        nHorTot = 23;
    }

    cout << "O JOGO DUROU " << nHorTot << " HORA(S) E " <<  nMinTot  << " MINUTO(S)\n";
    return 0;
}
