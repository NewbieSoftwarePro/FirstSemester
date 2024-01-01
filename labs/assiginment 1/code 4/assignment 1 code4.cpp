#include <iostream>

using namespace std;

int main ()
{
	double radius, area,pi;
	cout<<"Give the radius of circle:";
	cin>>radius;
	pi =3.141592653589793238462643383279502884197;
	area = pi*(radius*radius);
	cout<< "Area of circle :"<< area  << " meter square" << endl;
	return 0;  
}
