// opcion_circulo.cpp
#include "../cabeceras/circulo.h"
#include <iostream>

using namespace std;

void opcion_circulo(void)
{
  // Círculo 1:
  cout << "Círculo 1" << endl;
  circulo circulo_1;
  cout << "Radio = " << circulo_1.get_radio() << endl;
  circulo_1.set_radio(10.0);
  cout << "Radio modificado = " << circulo_1.get_radio() << endl;
  cout << "Area = " << circulo_1.area() << endl << endl;

  // Círculo azul:
  cout << "Círculo azul" << endl;
  circulo circulo_azul(20.0, "circulo azul");
  cout << "La circunferencia del " << circulo_azul.get_tipo();
  cout << " es " << circulo_azul.circunferencia() << endl;
}
