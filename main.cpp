#include <string>
#include <iostream>
#include "Shape.cpp"
#include "Square.cpp"

using namespace std;

int main() {
    Square Square1("red", "Square", 4, 0.0, 0.0, 0.0);
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