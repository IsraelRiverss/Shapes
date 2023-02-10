//=========================Guard==============================
#ifndef SHAPES_SHAPE_H
#define SHAPES_SHAPE_H

#endif //SHAPES_SHAPE_H
//============================================================

//=====================Include Dependency=====================
#include <iostream>
#include <string>
//============================================================
using namespace std;

class Shape
{
protected:
    //Atributes
    string color, nameShape;
    int numSide;

public:
    //Methods
    Shape(string _color, string _nameShape, int _numSide); //Constructor

    //Setters
    void setColor(string _color);
    void setNameShape(string _nameShape);
    void setNumSide(int _numSide);

    //Getters
    string getColor();
    string getNameShape();
    int getNumSide();
};