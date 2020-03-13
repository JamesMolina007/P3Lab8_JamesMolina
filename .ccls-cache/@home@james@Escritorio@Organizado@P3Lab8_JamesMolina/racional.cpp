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