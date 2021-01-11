#include <iostream>
#include "complejo_real.h"

using namespace std;

int main(){
Complejo complejo1(2,7);
Complejo complejo2(1,6);

complejo1.imprimir();
complejo2.imprimir();

Complejo result;
  result.suma(complejo1, complejo2);

cout << "La suma es: ";
  result.imprimir();

cout << "La resta es: ";
  result.resta(complejo1,complejo2);
  result.imprimir();

cout << "La suma del real con el complejo es: ";
  result.suma_real(complejo1,5);
  result.imprimir();




}