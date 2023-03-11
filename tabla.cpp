
#include <iostream>
using namespace std;
int main(int argc, char *argv[]) {
    int num,i,p;
    cout<< "Ingrese el Numero Multiplicador"<<endl;
    cin>> num;
    i = 1;
    cout<<endl;
    while (i<=10) {
        p = i*num;
        cout<<i<<" x "<<num<<" = "<<p<<endl;
        i=i+1;
    }
    return 0;
}