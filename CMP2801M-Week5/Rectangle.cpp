#include "Shape.h"
#include "Rectangle.h"

using namespace std;

Rectangle::Rectangle(float width, float height) : Shape(width, height) {}

float Rectangle::getArea()
{
	return Width * Height;
}