#include <iostream>
#include <fstream>
#include "color.h"
#include "vector3.h"
#include "ray.h"
#include "scene.h"
#include "camera.h"
#include "sphere.h"

using namespace std;

ofstream picture;

void WriteCol(Color c)
{
	picture << int(255 * c.red()) << " " << int(255 * c.green()) << " " << int(255 * c.blue()) << "\n";
}

int main()
{
	picture.open("image.PPM");
	Sphere object(Vector3(0,0,-1),0.5);
	
	const double aspect_ratio = (16.0/9.0);
	const int imageWidth = 400;
	const int imageHeight = int(imageWidth/aspect_ratio);

	
	Camera camera;
	Scene MainScene;
	Sphere sphere;
	MainScene.spheres.push_back(sphere);

	picture << "P3\n";
	picture << imageWidth << " " << imageHeight << "\n255\n";

	for (int y=imageHeight-1;y>=0;--y)
	{
		for (int x=0;x<imageWidth;x++)
		{
			double u = double(x) / double(imageWidth-1);
			double v = double(y) / double(imageHeight-1);
			Ray r = camera.CastRay(u,v);
			Color rayCol = MainScene.CheckRay(r,object);
			WriteCol(rayCol);
		}
	}

	picture.close();
	return 0;
}