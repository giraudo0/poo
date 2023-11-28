// figura.cpp
#include "../cabeceras/figura.h"

figura::figura()
{
  tipo = "Figura";
}

figura::figura(string t)
{
  tipo = t;
}

string figura::get_tipo()
{
  return tipo;
}

void figura::set_tipo(string t)
{
  tipo = t;
}
