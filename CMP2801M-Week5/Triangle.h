#define TRIANGLE_H

class Triangle : public Shape
{
	public:
		Triangle(float width, float height);
		float getArea();
};