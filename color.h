#include <iostream>

#pragma once
class Color
{
public:
	double r;
	double g;
	double b;

	Color();
	Color(double r2,double g2,double b2);
	~Color();
	Color operator*(double c);
	Color operator+(double c);
	Color operator+(Color c);
	Color operator*(Color c);
	double red();
	double green();
	double blue();
};

Color operator+(double d, Color c);
Color operator*(double d, Color c);
