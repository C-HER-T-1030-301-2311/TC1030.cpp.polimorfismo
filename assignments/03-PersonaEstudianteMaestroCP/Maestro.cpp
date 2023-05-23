#include "Maestro.hpp"
#include <iostream>

Maestro::Maestro():Persona{} {
}

Maestro::Maestro(std::string nom, int ed, std::string ca):Persona {nom, ed} {
    depto=ca;
}

std::string Maestro::getDepto()
{
    return depto;
}

void Maestro::setDepto(std::string ca) {
    depto=ca;
}

void Maestro::muestraDatos() {
    std::cout << "Nombre: " << nombre << " Edad: " << edad << " Depto: " << depto << "\n";
}