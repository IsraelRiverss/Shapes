#ifndef SHAPES_INHERITANCE_SHAPE_H
#define SHAPES_INHERITANCE_SHAPE_H
#include <string>
using namespace std;

class Shape {
protected: //Access modifier
    //Attributes
    string nameShape, colorShape;
public://Access modifier
    //Methods
    //Constructor default
Shape();
    //Constructor
    Shape(string _nameShape, string _colorShape);

    //Setters
    void setNameShape(char _nameShape);
    void setColorShape(char _colorShape);

    //Getters
    string getNameShape();
    string getColorShape();
};


#endif //SHAPES_INHERITANCE_SHAPE_H
