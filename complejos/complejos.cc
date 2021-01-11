#include <iostream>
#include "complejo.h"


int main(){
Complejo complejo1(2,7);
Complejo complejo2(1,6);

complejo1.imprimir();
complejo2.imprimir();

Complejo result;
result.suma(complejo1, complejo2);
result.imprimir();
result.resta(complejo1,complejo2);
result.imprimir();




}