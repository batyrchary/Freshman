#ifndef RAYTRACER_RAY_H
#define RAYTRACER_RAY_H

#include "Material.h"
#include "Vector3.h"
#include<iostream>
using namespace std;
#include"string.h"
class Ray {
    Vector3 _origin;
    Vector3 _direction;

public:
    Ray(const Vector3& origin, const Vector3& direction) : _origin(origin), _direction(direction) {}

    const Vector3 &Origin() const {
        return _origin;
    }

    const Vector3 &Direction() const {
        return _direction;
    }
};

/////////////////
// BEWARE !
// When an intersection occurs, this struct should be filled !
/////////////////

struct RayHitInfo
{
	MaterialId  Material;
	Vector3     Position;
	Vector3     Normal;
	int tex_id;
	string indicator;
	float       Parameter;
	Vector3		center;
	float R;
	float gama;
	float beta;
	Vector3 x_s,y_s,z_s;
};

#endif //RAYTRACER_RAY_H
