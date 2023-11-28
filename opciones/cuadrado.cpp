// opcion_cuadrado.cpp
#include "../cabeceras/cuadrado.h"
#include <iostream>

using namespace std;

void opcion_cuadrado(void)
{
  cout << endl << "Cuadrados" << endl;
  cout << "Lado cuadrado 1 = ";
  double l;
  cin >> l;
  cuadrado cuadrado_1(l);
  cuadrado_1.set_tipo("cuadrado azul");
  cout << "Lado cuadrado 2 = ";
  cin >> l;
  cuadrado cuadrado_2(l, "cuadrado rojo");
  
  if(cuadrado_1.area() >= cuadrado_2.area())
  {
    cout << "La figura " << cuadrado_1.get_tipo();
    cout << " tiene un área mayor o igual que la figura ";
    cout << cuadrado_2.get_tipo() << "." << endl;
  }
  else
  {
    cout << "La figura " << cuadrado_2.get_tipo() << " tiene un área mayor";
    cout << " que la figura " << cuadrado_1.get_tipo() << "." << endl;
  }
}
