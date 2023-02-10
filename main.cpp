//=====================Include Dependency=====================
#include <iostream>
#include <string>
#include "Shape.cpp"
#include "Square.cpp"

//============================================================
int main() {
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

    Square Square1(x, y, z, w, 0.0, 0.0);
    cout << "Name of the Shape: " << Square1.getNameShape() << endl;
    return 0;
}