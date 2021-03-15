main.o: main.cpp color.h vector3.h ray.h scene.h camera.h sphere.h
	g++ -g -c main.cpp

color.o: color.h color.cpp
	g++ -g -c color.cpp

scene.o: scene.h scene.cpp vector3.h ray.h color.h
	g++ -g -c scene.cpp

vector3.o: vector3.h vector3.cpp
	g++ -g -c vector3.cpp

ray.o: ray.h ray.cpp
	g++ -g -c ray.cpp

camera.o: camera.h camera.cpp vector3.h
	g++ -g -c camera.cpp

sphere.o: sphere.h sphere.cpp vector3.h
	g++ -g -c sphere.cpp

clean:
	rm -f *.o

raytracer: main.o color.o vector3.o ray.o scene.o camera.o sphere.o Makefile
	g++ -g -o raytracer main.o color.o vector3.o ray.o scene.o camera.o sphere.o
