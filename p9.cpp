/* Create a class Polygon with virtual functions to calculate area. Derive two classes Triangle and Square 
from polygon. Read the dimensions and calculate the area of rectangle and triangle.*/
#include <iostream>
using namespace std;

class Polygon {
public:
    virtual void readDimensions() = 0;
    virtual double calculateArea() = 0;
};

class Triangle : public Polygon {
private:
    double base;
    double height;

public:
    void readDimensions() {
        cout << "Enter Triangle base length: ";
        cin >> base;
        cout << "Enter Triangle height: ";
        cin >> height;
    }

    double calculateArea() {
        return 0.5 * base * height;
    }
};

class Square : public Polygon {
private:
    double side;

public:
    void readDimensions() {
        cout << "Enter square side length: ";
        cin >> side;
    }

    double calculateArea() {
        return side * side;
    }
};

int main() {
    Polygon* polygonPtr;
    Triangle triangle;
    polygonPtr = &triangle;
    polygonPtr->readDimensions();
    cout << "Triangle Area: " << polygonPtr->calculateArea() << endl;

    Square square;
    polygonPtr = &square;
    polygonPtr->readDimensions();
    cout << "Square Area: " << polygonPtr->calculateArea() << endl;

    return 0;
}