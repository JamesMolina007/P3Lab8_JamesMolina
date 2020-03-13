#pragma once
#include <string>

using namespace std;

class complejo{
    int real;
    int imaginario;
    public:
        complejo();
        complejo( int real, int imaginario );
        string toString(){ return to_string(real) + "+" + to_string(imaginario) + 'i'; }
};