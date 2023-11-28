// opcion_cuadrado.cpp
#include "../cabeceras/cuadrado.h"
#include <iostream>

using namespace std;

void opcion_cuadrado(void)
{
  // Cuadrado alfa:
  cuadrado cuadrado_alfa(5, "cuadrado alfa");
  cout << "El área del " << cuadrado_alfa.get_tipo() << " es de ";
  cout << cuadrado_alfa.area() << " unidades cuadradas." << endl;
  cout << "Pero su lado se incrementa en una unidad," << endl;
  cuadrado_alfa.set_lado(cuadrado_alfa.get_lado() + 1);
  cout << "por lo que su área aumenta a " << cuadrado_alfa.area();
  cout << " unidades cuadradas." << endl << endl;

  // Comparación de perímetros:
  cuadrado cuadrado_beta;
  cuadrado_beta.set_tipo("cuadrado beta");
  cout << "Entre el lado del " << cuadrado_beta.get_tipo() << ":" << endl;
  double auxiliar;
  cin >> auxiliar;
  cuadrado_beta.set_lado(auxiliar);
  cout << "Entonces su perímetro es de " << cuadrado_beta.perimetro();
  cout << " unidades." << endl;

  cout << "Mientras que el perímetro del " << endl;
  cuadrado cuadrado_gamma(10, "cuadrado_gamma");
  cout << cuadrado_gamma.get_tipo() << " es de ";
  cout << cuadrado_gamma.perimetro() << " unidades." << endl;

  cout << "Por lo que ";
  if(cuadrado_beta.perimetro() == cuadrado_gamma.perimetro())
  {
    cout << "ambos cuadrados son del mismo tamaño." << endl;
  }
  else if(cuadrado_beta.perimetro() < cuadrado_gamma.perimetro())
  {
    cout << "el " << cuadrado_beta.get_tipo() << " es menor que el ";
    cout << cuadrado_gamma.get_tipo() << "." << endl;
  }
  else
  {
    cout << "el " << cuadrado_beta.get_tipo() << " es mayor que el ";
    cout << cuadrado_gamma.get_tipo() << "." << endl;
  }
}
