// cuadrado.h
#pragma once

#include "figura.h"
#include <cmath>

using namespace std;

class cuadrado : public figura
{
  private:
    double lado;
  public:
    cuadrado();
    cuadrado(double l);
    cuadrado(double l, string t);
    double get_lado();
    void set_lado(double l);
    double area();
    double perimetro();
};
