#include <iomanip>
#include <iostream>
#include <math.h>
using namespace std;

int main() {
    
    double nNotA,nNotB,nNotC,nNotD,nMedia,nNotExa;

    cin >> nNotA >> nNotB >> nNotC  >> nNotD;

    nMedia = ((2*nNotA) + (3*nNotB) + (4*nNotC) + (1*nNotD))/10.0;

    if (nMedia >= 7.0) {
        cout << fixed << setprecision(1) << "Media: " << nMedia << endl;
        cout << "Aluno aprovado.\n";
    }
    else {
        if (nMedia < 5.0) {
            cout << fixed << setprecision(1) << "Media: " << nMedia << endl;
            cout << "Aluno reprovado.\n";
        }
        else {
            cout << fixed << setprecision(1) << "Media: " << nMedia << endl;
            cout << "Aluno em exame.\n";
            cin >> nNotExa;
            cout << fixed << setprecision(1) << "Nota do exame: " << nNotExa << endl;
            nMedia = (nMedia + nNotExa)/2.0;
            if (nMedia >= 5.0) {
                cout << "Aluno aprovado.\n";
            }
            else {
                cout << "Aluno reprovado.\n";
            }
            cout << fixed << setprecision(1) << "Media final: " << nMedia << endl;
        }
    }     
    return 0;
}
