#include <iostream>
using namespace std;
#define PI 3.14
int main()
{
	const float pi = 3.142;
	float area1, area2, radius;
	radius = 5;
	area1 = pi*radius*radius;
	area2=PI*radius*radius;
	cout<<"Radius = " << radius <<", Area of the Circle= " << area1 << endl;
	cout<<"Radius = " << radius <<", Area of the Circle= " << area2 << endl;
	return 0;
}