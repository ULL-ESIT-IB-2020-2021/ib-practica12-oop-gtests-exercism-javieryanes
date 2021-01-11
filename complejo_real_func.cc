#include "complejo_real.h"

Complejo::Complejo(int n, int m){
    real = n;
    imaginario = m;
}
Complejo::Complejo(){
    real = 0;
    imaginario = 0;
}
Complejo::~Complejo(){}

void Complejo::imprimir(){
    if(imaginario >= 0){
       std::cout << "z = " << real << " + " <<  imaginario << "i\n";
    }else{
       std::cout << "z = " << real << " - " <<  imaginario << "i\n";
    }
}
void Complejo::suma(Complejo A, Complejo B){
    real = A.get_a() + B.get_a();
    imaginario = A.get_b() + B.get_b();
}
void Complejo::suma_real(Complejo A, int a){
    real = A.get_a() + a;
    imaginario = A.get_b();
}
int Complejo::get_a(){
    return real;
}
int Complejo::get_b(){
    return imaginario;
}
void Complejo::resta(Complejo A, Complejo B){
    real = A.get_a() - B.get_a();
    imaginario = A.get_b() - B.get_b();
}