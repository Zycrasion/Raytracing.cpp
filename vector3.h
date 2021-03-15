#pragma once
#include <cmath>
#include <iostream>
using std::sqrt;

class Vector3
{
public:
	double x;
	double y;
	double z;

	Vector3();
	Vector3(double xx,double yy, double zz);
	~Vector3();

	double magSq();
	double mag();
	Vector3 normalized();

	// Operator Overloading
	Vector3 operator/(Vector3 v);
	Vector3 operator/(double d);

	Vector3 operator*(Vector3 v);
	Vector3 operator*(double d);

	Vector3 operator+(Vector3 v);
	Vector3 operator+(double d);

	Vector3 operator-(Vector3 v);
	Vector3 operator-(double d);
};

Vector3 operator/(double d, Vector3 v);
Vector3 operator*(double d, Vector3 v);
Vector3 operator+(double d, Vector3 v);
Vector3 operator-(double d, Vector3 v);

double dot(Vector3 v, Vector3 e);