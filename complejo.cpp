#include "complejo.hpp"

complejo::complejo(){

}

complejo::complejo( int real, int imaginario ){
    this->real = real;
    this->imaginario = imaginario;
}

complejo complejo::operator+( complejo r2 ){
    int parte_real = (*this).getReal() + r2.getReal();
    int parte_imaginaria = (*this).getImaginario() + r2.getImaginario();
    return complejo( parte_real, parte_imaginaria );
}

complejo complejo::operator*( complejo r2 ){
    int parte_real = (*this).getReal() + r2.getReal();
    int parte_imaginaria = (*this).getImaginario() + r2.getImaginario();
    return complejo( parte_real, parte_imaginaria );
}