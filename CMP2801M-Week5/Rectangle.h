#define RECTANGLE_H

class Rectangle : public Shape
{
	public:
		Rectangle(float width, float height);
		float getArea();
};