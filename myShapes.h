#pragma once
#ifndef MYSHAPES_H
#define MYSHAPES_H

#include "shapes.h"

class MyPlane : public Shape
{
	Vec		n;
	float	d;
public:
	void test(Ray& ray, HitData& hit);
	Vec normal(Vec &point);
	MyPlane(Vec normal, float _d, Color color);
};

#endif