#include <iomanip>
#include <iostream>
#include <math.h>

int main() {
    
    int nSenha;

    while (true) {

        std::cin >> nSenha;

        if (nSenha == 2002) {
            std::cout << "Acesso Permitido\n";
            break;
        }
        else {
            std::cout << "Senha Invalida\n";
        }
    }

    return 0;
}
