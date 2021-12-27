#include <iomanip>
#include <iostream>
#include <math.h>

int main() {
    
    int nCont,nCont2;

    for (nCont = 1; nCont <= 9; nCont = nCont + 2) {
        for (nCont2 = 7; nCont2 >= 5; nCont2--) {
            std::cout << "I=" << nCont << " " <<  "J=" << nCont2 << std::endl;
        }
    }
    
    return 0;
}
