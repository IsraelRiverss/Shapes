#ifndef SHAPES_INHERITANCE_SQUARE_H
#define SHAPES_INHERITANCE_SQUARE_H
#include "Shape.h"

class Square: public Shape{
protected://Access modifier
    //Attributes
    int numSide;
    double lengthSide, perimeter, area;
public:
    //Default constructor
    Square();
    //Constructor parametrized
    Square(string _nameShape, string _colorShape, int _numSide, double _lengthSide);

    //Setters
    void setNumSide(int _numSide);
    void setLengthSide(double _lengthSide);
    void setPerimeter(double _perimeter);
    void setArea(double _area);

    //Getters
    int getNumSide();
    double getLengthSide();
    double getPerimeter();
    double getArea();
    //Methods
    //Method that make the operations to calculate the perimeter of a square
    double calculatePerimeterSquare();
    //Methods that make the operations to calculate the area of a square
    double calculateAreaSquare();

};


#endif //SHAPES_INHERITANCE_SQUARE_H
