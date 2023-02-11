//=========================Guard==============================
#ifndef SHAPES_SQUARE_H
#define SHAPES_SQUARE_H
//=====================Include Dependency=====================
#include <iostream>
#include <string>
#include "Shape.h"
//============================================================

using namespace std;

class  Square: public Shape
{
protected:
//Atributes
    double lengthSide, perimeter, area;
    double perimeter = 0.0;
    double area = 0.0;

public:
//Methods
    Square(string _color, string _nameShape, int _numSide, double _legthSide); //Constructor

//Setters
    void setLenghtSide(double _lengthSide);
    void setPerimeter(double _perimeter);
    void setArea(double _area);

//Getters
    double getLengthSide();
    double getPerimeter();
    double getArea();

//Calculate the figure perimeter
    double calculatePerimeter();
//Calculate the figure area
    double calculateArea();
};
#endif //SHAPES_SQUARE_H