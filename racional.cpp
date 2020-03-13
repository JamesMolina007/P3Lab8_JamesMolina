#include "racional.hpp"

racional::racional(){
}

racional::racional( int numerador, int denominador ){
    simplificar( numerador, denominador );
}

void racional::simplificar( int numerador, int denominador ){
    for (int i = 1; i <= numerador; i++){
       if( numerador % i == 0 && denominador % i == 0){
           numerador /= i;
           denominador /= i;
       }
    }
    (*this).numerador = numerador;
    (*this).denominador = denominador;
}

racional racional::operator+( racional r2 ){
    int denominador = (*this).getDenominador() * r2.getDenominador();
    int numerador = (*this).getNumerador() * r2.getDenominador() + (*this).getDenominador() * r2.getNumerador();
    return racional( numerador, denominador );
}

racional racional::operator*( racional r2 ){
    int denominador = (*this).getDenominador() * r2.getDenominador();
    int numerador = (*this).getNumerador() * r2.getNumerador();
    return racional( numerador, denominador );
}