// main.cpp
#include "opciones.h"
#include <iostream>

using namespace std;

int main(void)
{
  cout << "Mis figuras" << endl;

  char opcion = 's';
  do
  {
    cout << endl << "Elija la opción deseada:" << endl;
    cout << "1. Cuadrado, 2. Círculo, 3. Rectángulo, S. Salir" << endl;
    cin >> opcion;
    switch(opcion)
    {
      case '1':
	opcion_cuadrado();
	break;
      case '2':
	opcion_circulo();
	break;
      case '3':
	opcion_rectangulo();
	break;
      case 's':
      case 'S':
	break;
      default:
	cout << "Opción incorrecta" << endl;
    }
  }while(!(opcion == 's' || opcion == 'S'));

  return 0;
}
