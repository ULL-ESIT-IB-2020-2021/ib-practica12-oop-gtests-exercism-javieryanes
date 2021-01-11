#include <iostream>


class Complejo{
    
  private:
    int real;
    int imaginario;
    
  public:
    
    Complejo(int n, int m);
    Complejo();
    ~Complejo();
    
    void imprimir();
    void suma(Complejo A, Complejo B);
    void resta(Complejo A, Complejo B);
    
    int get_a();
    int get_b();

};

