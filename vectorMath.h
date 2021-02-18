#pragma once
#include <string>

class vectorMath
{
};

class vec3 {
private:
	float* values;
public:
	float x, y, z = 0;
	vec3(float _x, float _y, float _z);

	std::string toString();

	float* getValues();
};

class vec4 {
private:
	float* values;
public:
	float x, y, z, w = 0;
	vec4(float _x, float _y, float _z, float _w);

	std::string toString();

	float* getValues();

};
