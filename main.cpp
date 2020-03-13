#include<iostream>
#include <vector>
#include "Vector.hpp"
#include "racional.hpp"
#include "complejo.hpp"

using namespace std;

vector<Vector<racional>> _racional;
vector<Vector<complejo>> _complejo;

void opcion1();
void opcion2();
void opcion3();

int main(){
    int opcion;
    do{
        cout << endl << endl;
        cout << "0- Salir" << endl;
        cout << "1- Ingresar vector" << endl;
        cout << "2- Listar vector" << endl;
        cout << "3- Operar vector" << endl;
        cout << "Ingrese la opcion: ";
        cin >> opcion;
        cout << endl << endl;
        if( opcion == 1 ) opcion1();
        if( opcion == 2 ) opcion2();
        if( opcion == 3 ) opcion3();
    }while( opcion );
}


void opcion1(){
    int opcion;
    cout << "1- Vector Racional" << endl;
    cout << "2- Vector Imaginario" << endl;
    cout << "Ingrese la opcion: ";
    cin >> opcion;
    if( opcion == 1 ){
        int numerador, numerador2, numerador3;
        int denominador, denominador2, denominador3;
        cout << endl << endl <<  "Ingrese numerador X: ";
        cin >> numerador;
        cout << "Ingrese denominador X: ";
        cin >> denominador;
        cout << endl << endl <<  "Ingrese numerador Y: ";
        cin >> numerador2;
        cout << "Ingrese denominador Y: ";
        cin >> denominador2;
        cout << endl << endl <<  "Ingrese numerador Z: ";
        cin >> numerador3;
        cout << "Ingrese denominador Z: ";
        cin >> denominador3;
        if( denominador != 0 && denominador2 != 0 && denominador3 != 0){
            racional rX( numerador, denominador );
            racional rY( numerador2, denominador2 );
            racional rZ( numerador3, denominador3 );
            Vector<racional> v( rX, rY, rZ );
            _racional.push_back(v);

        }else cout << "Valor Indefinido" << endl;
    }
    if( opcion == 2 ){
        int real, real2, real3;
        int imaginario, imaginario2, imaginario3;
        cout << endl << endl << "Ingrese la parte real X: ";
        cin >> real;
        cout << "Ingrese la parte imaginaria X: ";
        cin >> imaginario;
        cout << endl << endl << "Ingrese la parte real Y: ";
        cin >> real2;
        cout << "Ingrese la parte imaginaria Y: ";
        cin >> imaginario2;
        cout << endl << endl << "Ingrese la parte real Z: ";
        cin >> real3;
        cout << "Ingrese la parte imaginaria Z: ";
        cin >> imaginario3;
        complejo cX( real, imaginario );
        complejo cY( real2, imaginario2 );
        complejo cZ( real3, imaginario3 );
        Vector<complejo> v(cX, cY, cZ);
       _complejo.push_back(v);
    }
}

void listarR(){
    cout << endl << endl;
    cout << "Vectores Racionales" << endl;
    for (int i = 0; i < _racional.size(); i++){
       cout << i << ". " << "[" << _racional[i].getX().toString() << ", "; 
       cout << _racional[i].getY().toString() << ", "; 
       cout << _racional[i].getZ().toString() << "]" << endl; 
    }
}

void listarC(){
    cout << endl << endl;
    cout << "Vectores Complejos" << endl;
    for (int i = 0; i < _complejo.size(); i++){
      cout << i << ". " << "[" << _complejo[i].getX().toString() << ", "; 
       cout << _complejo[i].getY().toString() << ", "; 
       cout << _complejo[i].getZ().toString() << "]" << endl; 
    }
    cout << endl << endl;
}

void opcion2(){
    listarR();
    listarC();
}

void opcion3(){
    int opcion;
    cout << "1- Suma" << endl;
    cout << "2- Multiplicacion" << endl;
    cout << "Ingrese la opcion: ";
    cin >> opcion;
    cout << endl << endl;
    if( opcion == 1 ){
        int op1;
        cout << "1- Complejos" << endl << "2- Racionales" << endl << "Ingrese la opcion: ";
        cin >> op1;
        if( op1 == 1 ){
            listarC();
            int num, num2;
            cout << "Ingrese el numero del primer vector a sumar: ";
            cin >> num;
            cout << "Ingrese el numero del segundo vector a sumar: ";
            cin >> num2;
            if( num < _complejo.size() && num2 < _complejo.size() ){
                Vector<complejo> suma = _complejo[num] + _complejo[num2];
                cout << "Suma: " << "[" << suma.getX().toString() << ", "; 
                cout << suma.getY().toString() << ", "; 
                cout << suma.getZ().toString() << "]" << endl; 
            }else cout << endl << "VECTORES INEXISTENTES" << endl;
        }
        if( op1 == 2 ){
            listarR();
            int num, num2;
            cout << "Ingrese el numero del primer vector a sumar: ";
            cin >> num;
            cout << "Ingrese el numero del segundo vector a sumar: ";
            cin >> num2;
            if( num < _racional.size() && num2 < _racional.size() ){
                Vector<racional> suma = _racional[num] + _racional[num2];
                cout << "Suma: " << "[" << suma.getX().toString() << ", "; 
                cout << suma.getY().toString() << ", "; 
                cout << suma.getZ().toString() << "]" << endl; 
            }else cout << endl << "VECTORES INEXISTENTES" << endl;
        }
    }
    if( opcion == 2 ){
        int op1;
        cout << "1- Complejos" << endl << "2- Racionales" << endl << "Ingrese la opcion: ";
        cin >> op1;
        if( op1 == 1 ){
            listarC();
            int num, num2;
            cout << "Ingrese el numero del primer vector a multiplicar: ";
            cin >> num;
            cout << "Ingrese el numero del segundo vector a multiplicar: ";
            cin >> num2;
            if( num < _complejo.size() && num2 < _complejo.size() ){
                Vector<complejo> multiplicacion = _complejo[num] * _complejo[num2];
                cout << "Multiplicacion: " << "[" << multiplicacion.getX().toString() << ", "; 
                cout << multiplicacion.getY().toString() << ", "; 
                cout << multiplicacion.getZ().toString() << "]" << endl; 
            }else cout << endl << "VECTORES INEXISTENTES" << endl;
        }
        if( op1 == 2 ){
            listarR();
            int num, num2;
            cout << "Ingrese el numero del primer vector a multiplicar: ";
            cin >> num;
            cout << "Ingrese el numero del segundo vector a multiplicar: ";
            cin >> num2;
            if( num < _racional.size() && num2 < _racional.size() ){
                Vector<racional> multiplicacion = _racional[num] * _racional[num2];
                cout << "Multiplicacion: " << "[" << multiplicacion.getX().toString() << ", "; 
                cout << multiplicacion.getY().toString() << ", "; 
                cout << multiplicacion.getZ().toString() << "]" << endl; 
            }else cout << endl << "VECTORES INEXISTENTES" << endl;
        }
    }
}