#pragma once
#include "vector3.h"

class Ray
{
public:
	Vector3 direction;
	Vector3 position;
	Ray();
	Ray(Vector3 pos, Vector3 dir);
	Vector3 at(double t);
	~Ray();

};