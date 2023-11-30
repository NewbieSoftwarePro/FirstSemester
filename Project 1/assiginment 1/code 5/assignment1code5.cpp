#include <iostream>
using namespace std;
int main()
{
	double radius, circumference,pi;
	cout<<"Give the radius of the circle:";
	cin>>radius;
	pi =3.141592653589793238462643383279502884197;
	circumference = 2*pi*radius;
	cout<<"Circumference of circle:"<< " "<< circumference << "perimeter"<<endl;
	return 0;
}
