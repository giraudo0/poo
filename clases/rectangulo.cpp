// rectangulo.cpp
#include "../cabeceras/rectangulo.h"

// 'rectangulo' como clase:
// Constructor:
rectangulo::rectangulo()
{
  tipo = "rectangulo";
  base = 0.0;
  altura = 0.0;
}

// 'rectangulo' como subclase de la clase 'figura':
// Constructor con parámetros de dimensión:
rectangulo::rectangulo(double b, double a) : figura("rectangulo")
{
  base = b;
  altura = a;
}

// Constructor con parámetros de dimensión y tipo de figura:
rectangulo::rectangulo(double b, double a, string t) : figura(t)
{
  base = b;
  altura = a;
}

// Obtener la base:
double rectangulo::get_base()
{
  return base;
}

// Obtener la altura:
double rectangulo::get_altura()
{
  return altura;
}

// Definir la base:
void rectangulo::set_base(double b)
{
  base = b;
}

// Definir la altura:
void rectangulo::set_altura(double b)
{
  altura = b;
}

// Obtener el área:
double rectangulo::area()
{
  return base * altura;
}

// Obtener el perímetro:
double rectangulo::perimetro()
{
  return 2 * base + 2 * altura;
}
