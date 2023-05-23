#include <iostream>

#include "Shape.hpp"

int main() 
{
  int  x = 10;
  int* ptrInt;


// Creando apuntadores a 1 dato entero SI existente -----------------------------------------------------------
  ptrInt = &x;   //Asigna la dirección de memoria de x al apuntador ptrInt

  std::cout << ptrInt << " es la dirección de memoria o apuntador (ptrInt) donde está el dato x " << "\n";
  std::cout << *ptrInt << " es el valor del dato x que está en la dirección de memoria o apuntador (ptrInt) " << "\n\n";

// Reservando un espacio en memoria para un entero NO existente y que se genera dinamicamente ---------------
  int *ptrInt2 = new int{20};   //Crea un dato entero dinamicamente y le asigna un valor de 20

  std::cout << ptrInt2 << " es la dirección de memoria donde está el dato generado dinámicamente (*ptrInt2)" << "\n";
  std::cout << *ptrInt2 << " es el valor del dato que está en la dirección de memoria o apuntador ptrInt2" << "\n\n";

// Creando apuntadores a objetos SI existentes ----------------------------------------------------------------
  Shape fig;
  Shape* ptrFig{&fig}; //Asigna la dirección de memoria de fig al apuntador ptrFig

  std::cout << ptrFig->draw() << "\n";  

// Reservando espacio para un objeto NO existente y que se genera dinamicamente ----------------------------------
  Shape* ptrFig2 = new Shape(2,3); //Crea el objeto Shape dinamicamente

  std::cout << ptrFig2->draw() << "\n";
  
// Liberando memoria de objetos creados dinamicamente ------------------------------------------------------------

    delete ptrInt2;
    delete ptrFig2;

// ¿Porqué no liberar memoria para fig y ptrFig?

//  delete ptrFig;
//  delete ptrInt;

  return 0;
}
