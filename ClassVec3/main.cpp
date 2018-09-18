#include <iostream>
using namespace std; 
#include "vec3.h"

int main() 
{
	vec3 *vec0 = new vec3(0, 0, 0);
	vec3 *vec1 = new vec3(1, 1, 1);
	vec3 *vec2 = new vec3(2, 2, 2);
	vec3 *vec4 = new vec3(4, 5, 2);

	cout << "VECTORS " << endl << endl;
	cout << "Vector 0: (" << vec0->x << "," << vec0->y << "," << vec0->z << ")" << endl;
	cout << "Vector 1: (" << vec1->x << "," << vec1->y << "," << vec1->z << ")" << endl; 
	cout << "Vector 2: (" << vec2->x << "," << vec2->y << "," << vec2->z << ")" << endl;
	cout << "Vector 4: (" << vec4->x << "," << vec4->y << "," << vec4->z << ")" << endl << endl;

	//Vector1 + Vector
	*vec0 = *vec1 + *vec2;
	cout << "Vector 1 + Vector 2 = (" << vec0->x << "," << vec0->y << "," << vec0->z << ")" << endl << endl;

	*vec0 = vec3(0, 0, 0);
	*vec0 = *vec1 - *vec2;
	cout << "Vector 1 - Vector 2 = (" << vec0->x << "," << vec0->y << "," << vec0->z << ")" << endl << endl;

	//+=
	*vec1 += *vec1; 
	cout << "Vector 1 + Vector 1 = (" << vec1->x << "," << vec1->y << "," << vec1->z << ")" << endl << endl;
	
	//-=
	*vec1 -= *vec1;
	cout << "Vector 2 - Vector 2 = (" << vec1->x << "," << vec1->y << "," << vec1->z << ")" << endl << endl;
	
	//NORMALIZE
	vec2->normalize();
	cout << "Vector 2 normalized: (" << vec2->x << "," << vec2->y << "," << vec2->z << ")" << endl << endl;
	
	//VEC TO ZERO
	vec2->zero(); 
	cout << "Vector 2 to zero: (" << vec2->x << "," << vec2->y << "," << vec2->z << ")" << endl << endl;

	//IS ZERO?
	cout << "Is Vector 2 zero? ";
	if (vec2->is_zero() == 1) { cout << "True" << endl << endl; }
	else { cout << "False" << endl << endl; }

	//DISTANCE
	cout << "Distance between Vector 1 and Vector 4: " << vec1->distance_to(vec4) << endl << endl;

	system("pause");
}