#include "sphere.h"

Sphere::Sphere()
{
	radius = 1.0;
	position = Vector3();
}

Sphere::Sphere(Vector3 pos, double r)
{
	radius = r;
	position = pos;
}


double Sphere::Hit(Ray r)
{
	Vector3 oc = r.position - position; // Origin to center
	double a = dot(r.direction, r.direction);
	double b = 2 * dot(oc, r.direction);
	double c = dot(oc,oc) - radius*radius;
	double discriminant = b*b - 4*a*c;
	if (discriminant < 0) {
        return -1.0;
    } else {
        return (-b - sqrt(discriminant) ) / (2.0*a);
    }
}

Sphere::~Sphere() {}
