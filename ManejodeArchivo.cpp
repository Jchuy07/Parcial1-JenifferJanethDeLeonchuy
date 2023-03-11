#include "iostream"
#include "fstream"
using namespace std;
string texto;

void leerexamen(string directorio){
    ifstream archivo;
    archivo.open(directorio);
    if(archivo.is_open()){
        while(getline(archivo, texto)){
            cout << "Archivo leido ==> "<< texto <<endl;
        }
        archivo.close();
    }else{
        cout<<"archivo no encontrado";
    }
}

void modificarCarnet(string directorio){
    ofstream archivo;
    archivo.open(directorio, ios::app);
    if (archivo.is_open()){
        archivo << texto <<endl;
        archivo.close();
        cout<<"archivo 2 modificado";
    }else{
        cout<<"Error al leer el archivo";
    }

}
