#include <string>
#include <iostream>
#include "Shape.cpp"
#include "Square.cpp"

using namespace std;

int main() {
    Square Square1("red", "Square", 4, 0.0);
    cout << "Color of the Shape: " << Square1.getColor() << endl;
    cout << "Name of the Shape: " << Square1.getNameShape() << endl;
    cout << "Number of sides of the Shape: " << Square1.getNumSide() << endl;
    cout << "Length of the sides of the Shape: " << Square1.getLengthSide() << endl;
    string x, y;
    int z;
    double w;
    cout << "Color of the Shape: " << endl;
    cin >> x;
    cout << "Name of the Shape: " << endl;
    cin >> y;
    cout << "Number of sides of the Shape: " << endl;
    cin >> z;
    cout << "length of the sides of the Shape: " << endl;
    cin >> w;



    return 0;
}