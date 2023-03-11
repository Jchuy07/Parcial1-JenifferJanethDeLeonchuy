#include "iostream"
#include "Archivo.h"
using namespace  std;

int main() {
    leerexamen("C:\\Users\\janet\\OneDrive\\Escritorio\\examen.txt");
    cout<<endl;
    modificarCarnet("C:\\Users\\janet\\OneDrive\\Escritorio\\Carnet.txt");
    cout<<endl;
    leerexamen("C:\\Users\\janet\\OneDrive\\Escritorio\\Carnet.txt");
    cout << "Fin del programa" << std::endl;
    return 0;
}