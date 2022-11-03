#include <iostream>
#include "Shape.h"
#include "Triangle.h"
#include "Rectangle.h"

using namespace std;

int main()
{
    float triangleWidth, triangleHeight;
    float rectangleWidth, rectangleHeight;

    cout << "Triangle width (base): ";
    cin >> triangleWidth;

    cout << "Triangle height: ";
    cin >> triangleHeight;

    cout <<endl;

    cout << "Rectangle width: ";
    cin >> rectangleWidth;

    cout << "Rectangle height: ";
    cin >> rectangleHeight;

    cout << endl;

    Triangle triangle(triangleWidth, triangleHeight);
    Rectangle rectangle(rectangleWidth, rectangleHeight);

    cout << "Triangle area: " << triangle.getArea() << endl;
    cout << "Rectangle area: " << rectangle.getArea() << endl;

    return 0;
}