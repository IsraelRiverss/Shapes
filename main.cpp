#include "Shape.cpp"
#include "Square.cpp"
#include <iostream>

int main(){
    string x, y;
    int z;
    double w;
    cout << "Enter name of the shape: " << endl;
    cin >> x;
    cout << "Enter color of the shape: " << endl;
    cin >> y;
    cout << "Enter number of side of the shape: " << endl;
    cin >> z;
    cout << "Enter length of the sides of the shape: " << endl;
    cin >> w;

    Square Square_1 = Square(x,y,z,w);
    cout << "Name of the shape: " << Square_1.getNameShape() << endl;
    cout << "Color of the shape: " << Square_1.getColorShape() << endl;
    cout << "Number of sides of the shape: " << Square_1.getNumSide() << endl;
    cout << "Length of the sides of the shape: " << Square_1.getLengthSide() << endl;

    return 0;
}