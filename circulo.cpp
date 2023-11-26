// circulo.cpp
#include "circulo.h"

circulo::circulo() : figura("circulo")
{
  radio = 1.0;
}

circulo::circulo(double r) : figura("circulo")
{
  radio = r;
}

circulo::circulo(double r, string t) : figura(t)
{
  radio = r;
}

void circulo::set_radio(double r)
{
  radio = r;
}

double circulo::get_radio()
{
  return radio;
}

double circulo::area()
{
  return 3.1416 * radio * radio;
}

double circulo::circunferencia()
{
  return 2 * 3.1416 * radio;
}
