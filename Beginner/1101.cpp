#include <iomanip>
#include <iostream>
#include <math.h>


int main() {
    
    int nCont, nNumA, nNumB;
    int nSoma = 0;
    int nMaior, nMenor;

    std::cin >> nNumA >> nNumB;

    while (nNumA > 0 && nNumB > 0) {

        if (nNumA > nNumB) {
            nMaior = nNumA;
            nMenor = nNumB;
        }
        else {
            nMaior = nNumB;
            nMenor = nNumA;
        }

        for (nCont = nMenor; nCont <= nMaior; nCont++) {
            std::cout << nCont << " ";
            nSoma += nCont;
        }

        std::cout << "Sum=" << nSoma << std::endl;
        nSoma = 0;

        std::cin >> nNumA >> nNumB;     
    }

    return 0;
}
