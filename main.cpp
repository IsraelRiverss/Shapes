#include <string>
#include <iostream>
#include "Shape.cpp"
#include "Square.cpp"

using namespace std;

int main() {
    string x, y;
    int z;
    double w;
    cout << "Enter Color of the Shape: " << endl;
    cin >> x;
    cout << "Enter Name of the Shape: " << endl;
    cin >> y;
    cout << "Enter Number of sides of the Shape: " << endl;
    cin >> z;
    cout << "Enter Length of the sides of the Shape: " << endl;
    cin >> w;

    Square Square1(x, y, z, w);
    Square1.calculatePerimeter();
    Square1.calculateArea();
    cout << "Color of the Shape: " << Square1.getNameShape() << endl;
    cout << "Name of the Shape: " << Square1.getNameShape() << endl;
    cout << "Number of sides of the Shape: " << Square1.getNameShape() << endl;
    cout << "Length of the sides of the Shape: " << Square1.getNameShape() << endl;

    return 0;
}