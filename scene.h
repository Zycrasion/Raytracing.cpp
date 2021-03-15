#pragma once
#include "ray.h"
#include "color.h"
#include "sphere.h"
#include <vector>
#include <iostream>

using namespace std;

class Scene
{
public:
	std::vector<Sphere> spheres;

	Scene();
	~Scene();
	Color CheckRay(Ray r, Sphere s);
};