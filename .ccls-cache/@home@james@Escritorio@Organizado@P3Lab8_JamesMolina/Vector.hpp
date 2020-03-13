#pragma once
#include <string>
using namespace std;
template< class T >
class Vector {
    public:
        Vector( T x, T y, T z );
        T getX(){ return x; }
        T getY(){ return y; }
        T getZ(){ return z; }
        Vector operator+( Vector v2 );
        Vector operator*( Vector v2 );
        string toString( return "[" + x + ", " + y +", " + z + "]" );
    private:
        T x;
        T y;
        T z;
};

