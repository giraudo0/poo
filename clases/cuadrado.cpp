// cuadrado.cpp
#include "../cabeceras/cuadrado.h"

cuadrado::cuadrado()
{
  tipo = "cuadrado";
  lado = 0.0;
}

cuadrado::cuadrado(double l) : figura("cuadrado")
{
  lado = l;
}

cuadrado::cuadrado(double l, string t) : figura(t)
{
  lado = l;
}

double cuadrado::get_lado()
{
  return lado;
}

void cuadrado::set_lado(double l)
{
  lado = l;
}

double cuadrado::area()
{
  return lado * lado;
}

double cuadrado::perimetro()
{
  return 4 * lado;
}
