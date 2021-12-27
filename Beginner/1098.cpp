#include <iomanip>
#include <iostream>
#include <math.h>

int main() {

    float nCont1 = 0;
    float nCont2 = 1;
    
    while (nCont1 <= 2.1){

            std::cout << "I=" << nCont1 << " " << "J=" << nCont2+nCont1 << "\n";
            std::cout << "I=" << nCont1 << " " << "J=" << nCont2+1+nCont1 << "\n";
            std::cout << "I=" << nCont1 << " " << "J=" << nCont2+2+nCont1 << "\n";
            nCont1 += 0.2;
    }

    return 0;
}
