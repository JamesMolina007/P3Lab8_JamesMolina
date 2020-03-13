#pragma once
#include <string>

using namespace std;

class complejo{
    int real;
    int imaginario;
    public:
        complejo();
        complejo( int real, int imaginario );
        int getReal(){ return real; }
        int getImaginario(){ return imaginario; }
        string toString(){ return to_string(real) + "+" + to_string(imaginario) + 'i'; }
};