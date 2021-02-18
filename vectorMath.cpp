#include "vectorMath.h"

vec3::vec3(float _x, float _y, float _z) {
	x = _x;
	y = _y;
	z = _z;
	values = new float[3]{x, y, z};
}

std::string vec3::toString() {
	std::string str = "{" + std::to_string(x) + ", " + std::to_string(y) + ", " + std::to_string(z) + "}";
	return str;
}

float* vec3::getValues() {
	return values;
}

vec4::vec4(float _x, float _y, float _z, float _w) {
	x = _x;
	y = _y;
	z = _z;
	w = _w;
	values = new float[4]{ x, y, z, w };

}

std::string vec4::toString() {
	std::string str = "{" + std::to_string(x) + ", " + std::to_string(y) + ", " + std::to_string(z) + +", " + std::to_string(w) + "}";
	return str;
}
float* vec4::getValues() {
	return values;
}
