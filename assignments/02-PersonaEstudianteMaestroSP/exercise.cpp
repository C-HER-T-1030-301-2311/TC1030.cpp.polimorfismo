#include "Estudiante.hpp"
#include "Persona.hpp"

#include <iostream>

int main() 
{
  Persona *ptrPers;
  Estudiante *ptrEst;

  ptrPers = new Persona{"Rosa",8};
  std::cout<<"\n Con apuntador Persona y objeto Persona muestra \n";
  ptrPers->muestraDatos();

  ptrEst = new Estudiante{"Juan", 25, "ISD"};
  std::cout<<"\n Con apuntador Estudiante y objeto Estudiante muestra \n";
  ptrEst->muestraDatos();

  //OJO se inicializa con objeto Estudiante al apuntador a Persona
  ptrPers = new Estudiante{"Renato", 19, "ITC"};
  std::cout<<"\n Con apuntador Persona y objeto Estudiante muestra \n";
  ptrPers->muestraDatos();

  std::cout << "\n";

  return 0;
}
