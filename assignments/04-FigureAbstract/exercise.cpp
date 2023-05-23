#include "Triangulo.hpp"
#include "Cuadrado.hpp"

#include <iostream>

int main() 
{
  Figura* arr[5];

  arr[0] = new Triangulo{};
  arr[1] = new Cuadrado{};
  arr[2] = new Triangulo{};
  arr[3] = new Cuadrado{};
  arr[4] = new Triangulo{};

  for (auto i=0;i<5;i++) {
    arr[i]->dibuja();
  }
  
  // Liberando memoria -------------------

  for (auto i=0; i < 5;i++)
  {
    delete arr[i];
  }

  return 0;
}
