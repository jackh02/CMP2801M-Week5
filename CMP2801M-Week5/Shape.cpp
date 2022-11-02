#include "Shape.h"
#include "Triangle.h"
#include "Rectangle.h"

using namespace std;

Shape::Shape()
{
	area = 0;
};

float Shape::getArea()
{
	return area;
}