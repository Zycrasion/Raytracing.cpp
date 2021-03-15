#include "color.h"

Color::Color(double r2,double g2,double b2)
{
	r = r2;
	g = g2;
	b = b2;
}

Color::Color()
{
	r = 0;
	g = 0;
	b = 0;
}

Color Color::operator*(double d)
{
	return Color(d*r,d*g,d*b);
}

Color Color::operator*(Color c)
{
	return Color(c.r*r,c.g*g,c.b*b);
}

Color Color::operator+(double d)
{
	return Color(d+r,d+g,d+b);
}

Color Color::operator+(Color c)
{
	return Color(c.r+r,c.g+g,c.b+b);
}

Color::~Color()
{

}

double Color::red()
{
	return r;
}

double Color::green()
{
	return g;
}

double Color::blue()
{
	return b;
}

Color operator+(double d, Color c)
{
	return Color(d+c.r,d+c.g,d+c.b);
}

Color operator*(double d, Color c)
{
	return Color(d*c.r,d*c.g,d*c.b);
}