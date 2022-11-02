#include "Shape.h"
#include "Rectangle.h"

using namespace std;

Rectangle::Rectangle(float width, float height)
{
	Width = width;
	Height = height;
}

float Rectangle::getArea()
{
	return Width * Height;
}