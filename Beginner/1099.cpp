#include <iomanip>
#include <iostream>

int main() {

    int nQntdTermos,nNum1,nNum2;
    int nCont,nCont2;
    int nMenor, nMaior;
    int nSoma = 0;
    int nPosi = 0;

    std::cin >> nQntdTermos;

    int nTermos[nQntdTermos];

    for (nCont = 0; nCont < nQntdTermos; nCont++) {

        std::cin >> nNum1 >> nNum2;
        
        if (nNum1 > nNum2) {
            nMaior = nNum1;
            nMenor = nNum2;
        }
        else {
            nMaior = nNum2;
            nMenor = nNum1;
        }

        for (nCont2 = nMenor + 1; nCont2 < nMaior; nCont2++) {
            if (nCont2%2 != 0) {
                nSoma +=  nCont2;
            }
        }

        nTermos[nPosi] = nSoma;
        nSoma = 0;
        nPosi++;
    }


    for (nCont = 0; nCont < nQntdTermos; nCont++) {
        std::cout << nTermos[nCont] << std::endl;
    }

    return 0;

}