#include "Estudiante.hpp"
#include "Maestro.hpp"

#include <iostream>

int main() 
{
  Persona* listaPer[6]; //Arreglo de Ptr a Persona

  listaPer[0] = new Persona{"Rosa", 8};
  listaPer[1] = new Estudiante{"Juan", 25, "ISD"};
  listaPer[2] = new Maestro{"Roberto", 35, "Matemáticas"};
  listaPer[3] = new Persona{"Pedro", 12};
  listaPer[4] = new Estudiante{"Laura",20, "ITC"};
  listaPer[5] = new Maestro{"Karla", 30, "Fisica"};

  for (auto i=0; i < 6; i++) {
    std::cout << "#" << i << " ";
    listaPer[i]->muestraDatos();
  }
  
  // Liberando memoria -------------------

  for (auto i=0; i < 5;i++)
  {
    delete listaPer[i];
  }
  
  return 0;
}
