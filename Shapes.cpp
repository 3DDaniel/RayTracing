#include "Shapes.h"
#include "myShapes.h"

Color Shape::shade(Vec& light, const Vec& cam, Ray& r, HitData& h)
{
	return c;
}

MyPlane::MyPlane(Vec normal, float _d, Color color)
{
	this->d = _d;
	this->n = normal;
	this->c = color;
}

void MyPlane::test(Ray& ray, HitData& hit)
{
	float tempT;


}

Vec MyPlane::normal(Vec &point)
{
	return n;
}

