#include "vector3.h"
#include "ray.h"

#pragma once
class Camera
{
public:
	Vector3 origin;
	Vector3 vH;
	Vector3 vW;
	Vector3 lower_left;
	double focalL;

	Camera();
	Camera(Vector3 o, Vector3 w, Vector3 h, double focal);
	~Camera();

	Ray CastRay(double u,double v);
};