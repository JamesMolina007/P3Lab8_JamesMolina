#pragma once
#include <string>
//#include "complejo.hpp"

using namespace std;

template< class T >

class Vector {
    private:
        T x;
        T y;
        T z;
    public:
        Vector( T x, T y, T z ){
            this->x = x;
            this->y = y;
            this->z = z;
        }
        T getX(){ return x; }
        T getY(){ return y; }
        T getZ(){ return z; }
        Vector<T> operator+( Vector<T> );
        Vector<T> operator*( Vector<T> );
        string toString(){ return "[" + x + ", " + y +", " + z + "]"; }
};

template< class T >

Vector<T> Vector<T>::operator+( Vector<T> v2 ){
    T _x = (*this).getX() + v2.getX();
    T _y = (*this).getY() + v2.getY();
    T _z = (*this).getZ() + v2.getZ();
    return Vector( _x, _y, _z );
}

template< class T >

Vector<T> Vector<T>::operator*( Vector<T> v2 ){
    T _x = (*this).getX() * v2.getX();
    T _y = (*this).getY() * v2.getY();
    T _z = (*this).getZ() * v2.getZ();
    return Vector( _x, _y, _z );
}
