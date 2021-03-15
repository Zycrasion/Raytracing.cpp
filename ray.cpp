#include "ray.h"

Ray::Ray()
{
	position = Vector3();
	direction = Vector3();
}

Ray::Ray(Vector3 pos, Vector3 dir)
{
	position = pos;
	direction = dir;
}

Ray::~Ray()
{

}

Vector3 Ray::at(double t)
{
	return position+t*direction;
}