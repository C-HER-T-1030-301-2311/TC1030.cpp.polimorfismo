#pragma once

#include <string>

class Persona {
public:
    Persona();
    Persona(std::string, int);
    virtual ~Persona();

    std::string getNombre();
    void setNombre(std::string);

    int getEdad();
    void setEdad(int);

    virtual void muestraDatos(); // Es virtual, se puede hacer polimorfismo con esta función miembro

protected:
    std::string nombre;
    int edad;  
};
