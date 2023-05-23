#pragma once

#include "Shape.hpp"
class Rectangle : public Shape
{
private:
    int x;
    int y;
    int x1;
    int y1;

public:
    Rectangle();
    Rectangle(int, int, int, int);
    std::string draw() override;    
};