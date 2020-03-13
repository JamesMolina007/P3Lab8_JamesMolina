#include<iostream>
#include <vector>
#include "Vector.hpp"
#include "racional.hpp"
#include "complejo.hpp"

using namespace std;

vector<Vector> racional;
vector<Vector> imaginario;

int main(){
    int opcion;
    do{
        cout << "0- Salir" << endl;
        cout << "1- Ingresar vector" << endl;
        cout << "2- Listar vector" << endl;
        cout << "3- Operar vector" << endl;
        cout << "Ingrese la opcion: ";
        cin >> opcion;
        if( opcion == 1 );
    }while( opcion );
}