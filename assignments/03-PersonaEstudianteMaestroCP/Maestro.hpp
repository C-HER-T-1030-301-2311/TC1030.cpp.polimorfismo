#pragma once

#include "Persona.hpp"

class Maestro:public Persona {
public:
    Maestro();
    Maestro(std::string, int, std::string);

    std::string getDepto();
    void setDepto(std::string);
    void muestraDatos() override;
private:
    std::string depto;
};
