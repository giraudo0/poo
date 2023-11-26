// circulo.h
#pragma once
#include "figura.h"
//#include <cmath>

using namespace std;

// Círculo:
class circulo : public figura
{
  private:
    double radio;
  public:
    circulo();
    circulo(double r);
    circulo(double r, string t);
    void set_radio(double r);
    double get_radio();
    double area();
    double circunferencia();
};
