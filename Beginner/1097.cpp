#include <iomanip>
#include <iostream>
#include <math.h>

int main() {
    
    int nCont,nCont2;
    int nAuxiliar = 7;

    for (nCont = 1; nCont <= 9; nCont = nCont + 2) {
        for (nCont2 = nAuxiliar; nCont2 >= nAuxiliar - 2; nCont2--) {
            std::cout << "I=" << nCont << " " <<  "J=" << nCont2 << std::endl;
        }
        nAuxiliar = nAuxiliar + 2;
    }
    
    return 0;
}
