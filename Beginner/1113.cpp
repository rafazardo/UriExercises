#include <iomanip>
#include <iostream>
#include <math.h>

int main() {
    
    int nNumA,nNumB;

    while (true) {
        
        std::cin >> nNumA >> nNumB;

        if (nNumA == nNumB) {
            break;
        }

        if (nNumA > nNumB) {
            std::cout << "Decrescente\n"; 
        }
        else {
            std::cout << "Crescente\n";
        }
        
    }
    
    return 0;
}
