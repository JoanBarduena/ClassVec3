#include <iostream>

class vec3
{
private: 

	int x, y, z; 

public:

	vec3() {};

	vec3(int x_, int y_, int z_) : x(x_), y(y_), z(z_) {}

	vec3 operator+(vec3 &vec) const {
		vec3 newVec; 
		newVec.x = x + vec.x;
		newVec.y = y + vec.y; 
		newVec.z = z + vec.z; 
		return newVec; 
	}

	vec3 operator-(vec3 &vec) const {
		vec3 newVec; 
		newVec.x = x - vec.x;
		newVec.y = y - vec.y;
		newVec.z = z - vec.z;
		return newVec;
	}

	vec3 operator+=(vec3 &vec) {
		x += vec.x; 
		y += vec.y;
		z += vec.z; 
	}

	vec3 operator-=(vec3 &vec) {
		x -= vec.x;
		y -= vec.y;
		z -= vec.z;
	}

	vec3 operator=(vec3 &vec) {
		x = vec.x; 
		y = vec.y; 
		z = vec.z; 
	}

	bool operator==(vec3 &vec) 
	{
		if (x == vec.x && y == vec.y && z == vec.z) { return true; }
		else { return false; }
	}

	vec3 normalize(){ 
		vec3 newVec; 
		
		newVec.x = x / sqrt(x * x + y * y + z * z);
		newVec.y = y / sqrt(x * x + y * y + z * z);
		newVec.z = z / sqrt(x * x + y * y + z * z);

		return newVec; 
	}

	void zero() {
		x == 0; 
		y == 0; 
		z == 0; 
	}

	bool is_zero() const
	{
		if (x == 0 && y == 0 && z == 0) { return true; }
		else { return false; }
	}

	float distance_to(vec3 &vec) 
	{
		float x_dist = (vec.x - x)*(vec.x - x);
		float y_dist = (vec.y - y)*(vec.y - y);
		float z_dist = (vec.z - z)*(vec.z - z); 
		float total_dist = sqrt(x_dist + y_dist + z_dist); 

		return total_dist; 
	}
};