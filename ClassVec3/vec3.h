#ifndef _VEC3_H_
#define _VEC3_H_


class vec3
{
public:

	float x, y, z;

public:

	//Constructors
	vec3() :x(0), y(0), z(0) {}

	vec3(float _x, float _y, float _z) : x(_x), y(_y), z(_z) {}

	vec3(const vec3& vec) {
		x = vec.x;
		y = vec.y;
		z = vec.z;
	}

	//Destructor
	~vec3() {}

	//Operators
	vec3 operator+(const vec3 &vec) const  {
		return vec3(x + vec.x,y + vec.y, z + vec.z);
	}

	vec3 operator-(const vec3 &vec) const {
		return vec3(x - vec.x, y - vec.y, z - vec.z);
	}

	vec3 operator+=(const vec3 &vec) {
		return vec3(x += vec.x, y += vec.y, z += vec.z);
	}

	vec3 operator-=(const vec3 &vec) {
		return vec3(x -= vec.x, y -= vec.y, z -= vec.z);
	}

	vec3 operator=(const vec3 &vec) {
		return vec3(x = vec.x, y = vec.y, z = vec.z);
	}

	const bool operator==(vec3 &vec)
	{
		if (x == vec.x && y == vec.y && z == vec.z) { return true; }
		else { return false; }
	}

	//Methods
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

#endif 
