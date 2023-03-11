#include <iostream>
using namespace std;

int main() {
    int numero = 5;
    int resultado;

    switch (numero) {

        case 5:
            for (int i = 0; i <= 10; ++i) {
                resultado = numero * i;
                cout << "5 * " << i << " = " << resultado << endl;
                cout << endl;}




        case 8:
            for (int i = 0; i <= 10; ++i) {
                resultado = numero * i;
                cout << "8 * " << i << " = " << resultado << endl;
                cout << endl;}




        case 9:
            for (int i = 0; i <= 10; ++i) {
                resultado = numero * i;
                cout << "9 * " << i << " = " << resultado << endl;
                cout << endl;}

        default:
            cout<<" "<<endl;
    }

    return 0;
}