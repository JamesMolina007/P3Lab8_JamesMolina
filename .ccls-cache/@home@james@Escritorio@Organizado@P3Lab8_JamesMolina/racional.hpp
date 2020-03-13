#pragma once
#include "string"

using namespace std;

class racional{
    int numerador;
    int denominador;
    public:
        racional();
        racional( int numerador, int denominador );
        void simplificar( int numerador, int denominador );
        string toString(){ return to_string(numerador) + "/" + to_string(denominador); }
};
