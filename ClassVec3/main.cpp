#include <iostream>
using namespace std; 
#include "vec3.h"

int main() 
{
	vec3<float> *vec1 = new vec3<float>(1, 1, 1);
	cout << "Vector 1: (" << vec1->x << "," << vec1->y << "," << vec1->z << ")" << endl << endl; 
	
	vec3<float> *vec2 = new vec3<float>(3, 1, 2);
	cout << "Vector 2: (" << vec2->x << "," << vec2->y << "," << vec2->z << ")" << endl << endl;

	vec3<float> *vec0 = new vec3<float>(3, 1, 2);

	/**vec0 = *vec1 + *vec2;
	cout << "Vector 1 + Vector 2 = (" << vec0->x << "," << vec0->y << "," << vec0->z << ")" << endl << endl;

	vec3<float> *vec4 = new vec3<float>(3, 1, 2);

	*vec4 = *vec1 - *vec2;
	cout << "Vector 1 - Vector 2 = (" << vec0->x << "," << vec0->y << "," << vec0->z << ")" << endl << endl;*/

	//+=
	*vec1 += *vec1; 
	cout << "Vector 1 + Vector 1 = (" << vec1->x << "," << vec1->y << "," << vec1->z << ")" << endl << endl;
	
	//-=
	vec3<float> *vec4 = new vec3<float>(1, 1, 1);
	*vec4 -= *vec4;
	cout << "Vector 1 - Vector 1 = (" << vec4->x << "," << vec4->y << "," << vec4->z << ")" << endl << endl;
	
	//NORMALIZE
	vec2->normalize();
	cout << "Vector 2 normalized: (" << vec2->x << "," << vec2->y << "," << vec2->z << ")" << endl << endl;
	
	//VEC TO ZERO
	vec2->zero(); 
	cout << "Vector 2 to zero: (" << vec2->x << "," << vec2->y << "," << vec2->z << ")" << endl << endl;

	//IS ZERO?
	cout << "Is Vector 2 zero? " << vec2->is_zero() << endl << endl;

	//DISTANCE
	cout << "Distance between Vector 1 and Vector 2: " << vec1->distance_to(vec2) << endl << endl;

	system("pause");
}