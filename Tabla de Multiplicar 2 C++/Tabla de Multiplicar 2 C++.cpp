#include <iostream>
using namespace std;

int main() {
    int NUM, RESUL, T, I;
    int linea;

    cout << "CUANTAS TABLAS: ";
    cin >> linea;
    NUM = linea;
    //1*10, 1*9...1*1... T=2 2*10
    T = 1;
    while (T <= NUM) {
        I = 10;
        while (I >= 1) {
            RESUL = T * I;
            cout << T << "*" << I << "=" << RESUL << endl;
            I = I - 1;
        }
        cout << "\n";
        cout << "Pulse una Tecla: ";
        cin.ignore();

        T = T + 1;
    }

    return 0;
}