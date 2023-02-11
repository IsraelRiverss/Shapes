//=====================Include Dependency=====================
#include "Square.h"
#include <cmath>
//============================================================
//Methods
//Constructor
Square::Square(string _color, string _nameShape, int _numSide, double _legthSide) : Shape(_color, _nameShape, _numSide) {
    color = _color;
    nameShape = _nameShape;
    numSide = _numSide;
    lengthSide = _legthSide;
}

//Setters
void Square::setLenghtSide(double _lengthSide) {
    lengthSide = _lengthSide;
}
void Square::setPerimeter(double _perimeter) {
    perimeter = _perimeter;
}
void Square::setArea(double _area) {
    area = _area;
}

//Getters
double Square::getLengthSide() {
    return lengthSide;
}
double Square::getPerimeter() {
    return perimeter;
}
double Square::getArea() {
    return area;
}

//Calculate the figure perimeter
double Square::calculatePerimeter() {
    perimeter = lengthSide*4;
    return perimeter;
}
//Calculate the figure area
double Square::calculateArea() {
    area = ::sqrt(lengthSide);
    return area;
}