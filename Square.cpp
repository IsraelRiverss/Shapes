#include <cmath>
#include "Square.h"

//Default constructor
Square::Square():Shape() {
    numSide = 0;
    lengthSide = 0.0;
    perimeter = 0.0;
    area = 0.0;
}
//Constructor parametrized
Square::Square(string _nameShape, string _colorShape, int _numSide, double _lengthSide):Shape(_nameShape,
                                                                                              _colorShape) {
    nameShape = _nameShape;
    colorShape = _colorShape;
    numSide = _numSide;
    lengthSide = _lengthSide;
}
//Setters
void Square::setNumSide(int _numSide) {
    numSide = _numSide;
}
void Square::setLengthSide(double _lengthSide) {
    lengthSide = _lengthSide;
}
void Square::setPerimeter(double _perimeter) {
    perimeter = _perimeter;
}
void Square::setArea(double _area) {
    area = _area;
}

//Getters
int Square::getNumSide() {
    return numSide;
}
double Square::getLengthSide() {
    return lengthSide;
}
double Square::getPerimeter() {
    return perimeter;
}
double Square::getArea() {
    return area;
}

//Methods
//Method that make the operations to calculate the perimeter of a square
double Square::calculatePerimeterSquare() {
    perimeter = lengthSide*4;
    return perimeter;
}
//Methods that make the operations to calculate the area of a square
double Square::calculateAreaSquare() {
    area = sqrt(lengthSide);
    return lengthSide;
}

