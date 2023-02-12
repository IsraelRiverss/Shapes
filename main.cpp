#include "Shape.cpp"
#include "Square.cpp"
#include <iostream>

int main(){
    string x, y;
    int z;
    double w;
    cout << "Enter name of the shape: "; cin >> x; cout << endl;
    cout << "Enter color of the shape: " << endl; cin >> y; cout << endl;
    cout << "Enter number of side of the shape: " << endl; cin >> z; cout << endl;
    cout << "Enter length of the sides of the shape: " << endl; cin >> w; cout << endl;

    Square Square_1 = Square(x,y,z,w);
    cout << "Name of the shape: " << Square_1.getNameShape() << endl;
    cout << "Color of the shape: " << Square_1.getColorShape() << endl;
    cout << "Number of sides of the shape: " << Square_1.getNumSide() << endl;
    cout << "Length of the sides of the shape: " << Square_1.getLengthSide() << endl;
    cout << "Perimeter of the shape: " << Square_1.calculatePerimeterSquarej```() << endl;
    cout << "Area of the shape: " << Square_1.calculateAreaSquare() << endl;


    return 0;
}