#include <iomanip>
#include <iostream>
#include <math.h>
using namespace std;


int main() {
    
    float nNum[3],a,b,c,aux;

    cin >> a >> b >> c;

  if (a > b && a > c && c > b) {
        aux = b;
        b = c;
        c = aux;
    }

    if (b > a && b > c) {
        aux = a;
        a = b;
        b = aux;

        if (c > b) {
            aux = c;
            c = b;
            b = aux;
        }
    }

    if (c > a && c > b) {
        aux = a;
        a = c;
        c = aux;

        if (c > b) {
            aux = c;
            c = b;
            b = aux;
        }
    }    

    cout << a << " " << b << " " << c << endl;

    if (a >= (b + c)) {
        cout << "NAO FORMA TRIANGULO\n";
    }
    else {
        if (a*a == (b*b + c*c)) {
            cout << "TRIANGULO RETANGULO\n";
        }
        else {
            if (a*a > (b*b + c*c)) {
                cout << "TRIANGULO OBTUSANGULO\n";
            }
            else {
                cout << "TRIANGULO ACUTANGULO\n";    
            }   
        }
        if (a == b && b == c) {
            cout << "TRIANGULO EQUILATERO\n";
        } 
        else {
            if (a == b || b == c || a == c ) {
                cout << "TRIANGULO ISOSCELES\n";
            } 
        }              
    }
             
    return 0;
}
