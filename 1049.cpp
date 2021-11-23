#include <iomanip>
#include <iostream>
#include <math.h>
#include <string>
using namespace std;

int main() {
    
    string Especie1,Especie2,Especie3;

    cin >> Especie1 >> Especie2 >> Especie3;

    if (Especie1 == "vertebrado") {
        if (Especie2 == "ave") {
            if (Especie3 == "carnivoro") {
                cout << "aguia\n";
            }
            else {
                cout << "pomba\n";
            }
        }
        else {
            if (Especie3 == "onivoro") {
                cout << "homem\n";
            }
            else {
                cout << "vaca\n";
            }
        }
    }
    else {
        if (Especie2 == "inseto") {
            if (Especie3 == "hematofago") {
                cout << "pulga\n";
            }
            else {
                cout << "lagarta\n";
            }
        }
        else {
            if (Especie3 == "hematofago") {
                cout << "sanguessuga\n";
            }
            else {
                cout << "minhoca\n";
            }
        }
    }

    return 0;
}
