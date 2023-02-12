#include "Shape.h"
//Default Constructor
Shape::Shape(){
    nameShape = "";
    colorShape = "";
}
//Constructor parametrized
Shape::Shape(string _nameShape, string _colorShape) {
    nameShape = _nameShape;
    colorShape = _colorShape;
}

//Setters
void Shape::setNameShape(char _nameShape) {
    nameShape = _nameShape;
}
void Shape::setColorShape(char _colorShape) {
    colorShape = _colorShape;
}

//Getters
string Shape::getNameShape() {
    return nameShape;
}
string Shape::getColorShape() {
    return colorShape;
}
