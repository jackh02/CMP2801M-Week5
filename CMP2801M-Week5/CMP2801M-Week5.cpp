#include <iostream>
#include "Shape.h"
#include "Triangle.h"
#include "Rectangle.h"

using namespace std;

int main()
{
    Triangle triangle(4, 5);
    Rectangle rectangle(4, 5);

    cout << "Triangle area: " << triangle.getArea() << endl;
    cout << "Rectangle area: " << rectangle.getArea() << endl;

    return 0;
}