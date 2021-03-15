#include "vector3.h"

Vector3::Vector3(double xx,double yy, double zz)
{
	x = xx;
	y = yy;
	z = zz;
}

Vector3::Vector3()
{
	x = 0;
	y = 0;
	z = 0;
}

Vector3::~Vector3()
{

}

double Vector3::magSq()
{
	return x*x+y*y+z*z;
}

double Vector3::mag()
{
	return sqrt(magSq());
}

Vector3 Vector3::normalized()
{
	if (mag()==0)
	{
		return Vector3();
	}
	return Vector3(x/mag(),y/mag(),z/mag());
}

// Operator Overloading

// Division
Vector3 Vector3::operator/(Vector3 v)
{
	return Vector3(x/v.x,y/v.y,z/v.z);
}
Vector3 Vector3::operator/(double d)
{
	return Vector3(x/d,y/d,z/d);
}

Vector3 operator/(double d, Vector3 v)
{
	return Vector3(d/v.x,d/v.y,d/v.z);
}	

// Multiplication
Vector3 Vector3::operator*(Vector3 v)
{
	return Vector3(x*v.x,y*v.y,z*v.z);
}
Vector3 Vector3::operator*(double d)
{
	return Vector3(x*d,y*d,z*d);
}

Vector3 operator*(double d, Vector3 v)
{
	return Vector3(d*v.x,d*v.y,d*v.z);
}	

// Addition

Vector3 Vector3::operator+(Vector3 v)
{
	return Vector3(x+v.x,y+v.y,z+v.z);
}
Vector3 Vector3::operator+(double d)
{
	return Vector3(x+d,y+d,z+d);
}

Vector3 operator+(double d, Vector3 v)
{
	return Vector3(d+v.x,d+v.y,d+v.z);
}	

// Subtraction

Vector3 Vector3::operator-(Vector3 v)
{
	return Vector3(x-v.x,y-v.y,z-v.z);
}
Vector3 Vector3::operator-(double d)
{
	return Vector3(x-d,y-d,z-d);
}

Vector3 operator-(double d, Vector3 v)
{
	return Vector3(d-v.x,d-v.y,d-v.z);
}

double dot(Vector3 v,Vector3 e)
{
	return v.x * e.x + v.y * e.y + v.z * e.z;
}