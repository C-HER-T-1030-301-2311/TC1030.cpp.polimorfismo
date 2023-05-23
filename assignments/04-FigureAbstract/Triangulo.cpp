#include "Triangulo.hpp"
#include <iostream>

void Triangulo::dibuja() {
    std::cout << "   *   " << "\n";
    std::cout << "  ***  " << "\n";
    std::cout << " ***** " << "\n";
    std::cout << "*******Coord(" << x << "," << y << ")" << "\n";
    std::cout << "\n";
}