#include <iostream>

#include "Shape.hpp"

int main() 
{
  int  x = 10;
  int* ptrInt;


// Creando 1 apuntador a 1 dato entero SI existente (creado en Tiempo de Compilación, cuando lo declaras) ------------------------------------------------------
  ptrInt = &x;   //Asigna la dirección de memoria de x al apuntador ptrInt

  std::cout << ptrInt << " es la dirección de memoria o apuntador (ptrInt) donde está el dato x " << "\n";
  std::cout << *ptrInt << " es el valor del dato x que está en la dirección de memoria o apuntador (ptrInt) " << "\n\n";

// Reservando 1 espacio en memoria (apuntado por ptrInt2) para 1 entero NO existente y que se genera DINAMICAMENTE (creado en Tiempo de Ejecución, cuando ejecutas el programa) ----
  int *ptrInt2 = new int{20};   //Crea un dato entero DINAMICAMENTE y le asigna un valor de 20

  std::cout << ptrInt2 << " es la dirección de memoria donde está el dato generado dinámicamente (*ptrInt2)" << "\n";
  std::cout << *ptrInt2 << " es el valor del dato que está en la dirección de memoria o apuntador ptrInt2" << "\n\n";

// Creando 1 apuntador a 1 objeto SI existente ----------------------------------------------------------------
  Shape fig;
  Shape* ptrFig{&fig}; //Asigna la dirección de memoria de fig al apuntador ptrFig

  std::cout << ptrFig->draw() << "\n";  

// Reservando espacio para 1 objeto NO existente y que se genera DINAMICAMENTE ----------------------------------
  Shape* ptrFig2 = new Shape(2,3); //Crea el objeto Shape DINAMICAMENTE

  std::cout << ptrFig2->draw() << "\n";
  
// Liberando memoria de objetos creados DINAMICAMENTE ------------------------------------------------------------

    delete ptrInt2;
    delete ptrFig2;

// ¿Porqué no liberar memoria para fig y ptrFig?

//  delete ptrFig;
//  delete ptrInt;

  return 0;
}
