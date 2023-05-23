#pragma once

class Figura {
public:
    Figura();
    virtual ~Figura();
    virtual void dibuja() = 0;   // Función pura -> abstracta
protected:
    int x,y;
};
