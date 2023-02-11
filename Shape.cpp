#include "Shape.h"
//Methods
//Constructor
Shape::Shape(string _color, string _nameShape, int _numSide) {
    color = _color;
    nameShape = _nameShape;
    numSide = _numSide;
}

//Setters
void Shape::setColor(string _color) {
    color = _color;
}
void Shape::setNameShape(string _nameShape) {
    nameShape = _nameShape;
}
void Shape::setNumSide(int _numSide) {
    numSide = _numSide;
}

//Getters
string Shape::getColor() {
    return color;
}
string Shape::getNameShape() {
    return nameShape;
}
int Shape::getNumSide() {
    return numSide;
}