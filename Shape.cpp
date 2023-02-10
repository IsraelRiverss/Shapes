//
// Created by irios on 2/10/2023.
//

#include "Shape.h"
//Methods
//Constructor
Shape::Shape(string _color, string _nameShape, int _numside) {
    color = _color;
    nameShape = _nameShape;
    numSide = _numside;
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