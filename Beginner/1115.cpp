#include <iomanip>
#include <iostream>
#include <math.h>

int main() {
    
    int posicaoX,posicaoY;

    while (true) {

        std::cin >> posicaoX >> posicaoY;

        if (posicaoY == 0 || posicaoX == 0) {
            break;
        }

        if (posicaoX > 0 && posicaoY > 0) {
            std::cout << "primeiro\n";
        }
        else {
            if (posicaoX > 0 && posicaoY < 0) {
                std::cout << "quarto\n";
            }
            else {
                if (posicaoX < 0 && posicaoY < 0) {
                    std::cout << "terceiro\n";
                }
                else {
                    std::cout << "segundo\n";
                }
            }
        }
    }

    return 0;
    
}
