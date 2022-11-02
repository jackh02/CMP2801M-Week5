#include "Shape.h"
#include "Triangle.h"

using namespace std;

Triangle::Triangle(float width, float height)
{
	Width = width;
	Height = height;
}

float Triangle::getArea()
{
	return (0.5 * Width * Height);
}