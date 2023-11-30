#include <iostream>

using namespace std;

int main ()
{
	double radius, height, volume,pi;
	cout<<"Give radius of the cylinder:";
	cin>>radius;
	cout<<"Give height of the cylinder:";
	cin>>height;
	pi=3.141592653589793238462643383279502884197;
	volume = pi*radius*radius*height; 
	cout<<"volume of the cylinder:"<<" "<< volume << "meter cube" <<endl;
	return 0;  
}

