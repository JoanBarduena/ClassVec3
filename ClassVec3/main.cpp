#include <iostream>
using namespace std; 

class vec3
{
public:

	float x, y, z; 

public:

	vec3() 
	{
		x = 0; 
		y = 0; 
		z = 0; 
	};

	vec3(float x_, float y_, float z_) : x(x_), y(y_), z(z_) {}

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

	void normalize()
	{ 
		x = x / sqrt(x * x + y * y + z * z);
		y = y / sqrt(x * x + y * y + z * z);
		z = z / sqrt(x * x + y * y + z * z);
	}

	void zero() {
		x = 0; 
		y = 0; 
		z = 0; 
	}

	bool is_zero() const
	{
		if (x == 0 && y == 0 && z == 0) { return true; }
		else { return false; }
	}

	float distance_to(const vec3*vec) 
	{
		float x_dist = (vec->x - x)*(vec->x - x);
		float y_dist = (vec->y - y)*(vec->y - y);
		float z_dist = (vec->z - z)*(vec->z - z); 
		float total_dist = sqrt(x_dist + y_dist + z_dist); 

		return total_dist; 
	}
};

int main() 
{
	vec3 *vec1 = new vec3();
	cout << "Vector 1: (" << vec1->x << "," << vec1->y << "," << vec1->z << ")" << endl << endl; 
	
	vec3 *vec2 = new vec3(3, 1, 2);
	cout << "Vector 2: (" << vec2->x << "," << vec2->y << "," << vec2->z << ")" << endl << endl;

	vec2->normalize();
	cout << "Vector 2 normalized: (" << vec2->x << "," << vec2->y << "," << vec2->z << ")" << endl << endl;

	vec2->zero(); 
	cout << "Vector 2 to zero: (" << vec2->x << "," << vec2->y << "," << vec2->z << ")" << endl << endl;

	cout << "Is Vector 2 zero? " << vec2->is_zero() << endl << endl;

	cout << "Distance between Vector 1 and Vector 2: " << vec1->distance_to(vec2) << endl << endl;

	system("pause");
}