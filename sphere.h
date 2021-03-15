#include "vector3.h"
#include "ray.h"
#include "cmath"

#pragma once
class Sphere
{
public:
	Vector3 position;
	double radius;

	Sphere();
	Sphere(Vector3 pos, double r);
	double Hit(Ray r);
	~Sphere();
};