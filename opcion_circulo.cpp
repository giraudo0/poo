// opcion_circulo.cpp
#include "circulo.h"
#include <iostream>

using namespace std;

void opcion_circulo(void)
{
  cout << "Radio del círculo = ";
  double l;
  cin >> l;
  circulo circulo_1(l, "circulo naranja");
  cout << "Perímetro de la figura " << circulo_1.get_tipo() << " = ";
  cout << circulo_1.circunferencia() << endl;
}
