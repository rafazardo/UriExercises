#include <iomanip>
#include <iostream>
#include <math.h>

int main() {
    
    int golsGremio, golsInter;
    int newGranal = 1;
    int qntdInter = 0;
    int qntdGremio = 0;
    int qntdGranal = 0;
    int qntdEmpate = 0;

    while (newGranal != 2) { // Ira ocorrer até ter uma resposta de novo grenal = 2

        std::cin >> golsInter >> golsGremio;

        if (golsGremio == golsInter) {
            qntdEmpate++;
        }
        else if (golsGremio > golsInter) {
            qntdGremio++;
        }
        else {
            qntdInter++;
        }

        qntdGranal++;

        // Inicia a nova etapa do looping
        std::cout << "Novo grenal (1-sim 2-nao)\n";
        std::cin >> newGranal;

    }

    // Mensagens personalizadas
    std::cout << qntdGranal << " grenais\n";
    std::cout << "Inter:" << qntdInter << std::endl;
    std::cout << "Gremio:" << qntdGremio << std::endl;
    std::cout << "Empates:" << qntdEmpate << std::endl;

    if (qntdInter > qntdGremio) {
        std::cout << "Inter venceu mais\n";
    }
    else {
        std::cout << "Gremio venceu mais\n";
    }
    
    return 0;
}
