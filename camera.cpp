#include "camera.h"

Camera::Camera()
{
	origin = Vector3();
	vH = Vector3(0,2.0,0);
	vW = Vector3((16.0/9.0)*2.0,0,0);
	focalL = 1.0;
	lower_left = origin - vW/2 - vH/2 - Vector3(0,0,focalL);
}

Camera::Camera(Vector3 o, Vector3 w, Vector3 h, double focal)
{
	origin = o; 
	vW = w;
	vH = h;
	focalL = focal;
}

Ray Camera::CastRay(double u,double v)
{
	return Ray(origin, lower_left + u*vW + v*vH - origin);
}

Camera::~Camera() {}