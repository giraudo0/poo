// rectangulo.h
#pragma once
#include "figura.h"

using namespace std;

class rectangulo : public figura
{
  private:
    double base;
    double altura;
  public:
    rectangulo();
    rectangulo(double b, double a);
    rectangulo(double b, double a, string t);
    double get_base();
    double get_altura();
    void set_base(double b);
    void set_altura(double b);
    double area();
    double perimetro();
};
