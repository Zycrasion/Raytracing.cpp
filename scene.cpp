#include "scene.h"

Scene::Scene()
{

}

Scene::~Scene()
{

}

Color Scene::CheckRay(Ray r, Sphere s)
{
	double t = s.Hit(r);
    if (t > 0.0) {
    	Vector3 n = r.at(t) - Vector3(0,0,-1);
    	n = n.normalized();
    	return 0.5*Color(n.x+1,n.y+1,n.z+1);
    }
	Vector3 normal = r.direction.normalized();
	t = 0.5*(normal.y+1);
	return (1.0-t)*Color(1,1,1)+t*Color(0.5,0.7,1.0);
}