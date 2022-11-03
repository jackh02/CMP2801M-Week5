#include "Shape.h"
#include "Triangle.h"

using namespace std;

Triangle::Triangle(float width, float height) : Shape(width, height) {}

double Triangle::getArea()
{
	return (0.5 * Width * Height);
}