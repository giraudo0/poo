// opcion_rectangulo.cpp
#include "../cabeceras/rectangulo.h"
#include <iostream>

using namespace std;

void opcion_rectangulo(void)
{
  // Rectángulo predefinido:
  cout << endl << "Rectángulo 1" << endl;
  rectangulo rectangulo_1;
  cout << "base = " << rectangulo_1.get_base() << endl;
  cout << "altura = " << rectangulo_1.get_altura() << endl;
  cout << "área = " << rectangulo_1.area() << endl;
  cout << "perímetro = " << rectangulo_1.perimetro() << endl;
  cout << "tipo = " << rectangulo_1.get_tipo() << endl;

  // Rectángulo con base y altura:
  cout << endl << "Rectángulo 2" << endl;
  rectangulo rectangulo_2(4, 5);
  cout << "base = " << rectangulo_2.get_base() << endl;
  cout << "altura = " << rectangulo_2.get_altura() << endl;
  cout << "área = " << rectangulo_2.area() << endl;
  cout << "perímetro = " << rectangulo_2.perimetro() << endl;
  cout << "tipo = " << rectangulo_2.get_tipo() << endl;

  // Rectángulo con base, altura y tipo:
  cout << endl << "Rectángulo 3" << endl;
  rectangulo rectangulo_3(4, 5, "rectangulo gamma");
  cout << "base = " << rectangulo_3.get_base() << endl;
  cout << "altura = " << rectangulo_3.get_altura() << endl;
  cout << "área = " << rectangulo_3.area() << endl;
  cout << "perímetro = " << rectangulo_3.perimetro() << endl;
  cout << "tipo = " << rectangulo_3.get_tipo() << endl;

  // Rectángulo 1 modificado:
  cout << endl << "Rectángulo 1 modificado" << endl;
  rectangulo_1.set_base(1.6);
  rectangulo_1.set_altura(2.7);
  rectangulo_1.set_tipo("rectangulo delta");
  cout << "base = " << rectangulo_1.get_base() << endl;
  cout << "altura = " << rectangulo_1.get_altura() << endl;
  cout << "área = " << rectangulo_1.area() << endl;
  cout << "perímetro = " << rectangulo_1.perimetro() << endl;
  cout << "tipo = " << rectangulo_1.get_tipo() << endl;
}
