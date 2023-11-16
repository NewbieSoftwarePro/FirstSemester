#include <iostream>

using namespace std;

int main ()
{
	float radius, height, volume;
	cout<<"Give radius of the cylinder:";
	cin>>radius;
	cout<<"Give height of the cylinder:";
	cin>>height;
	volume = 3.14 *radius*radius*height; 
	cout<<"volume of the cylinder:"<<" "<< volume << "meter cube" <<endl;
	return 0;  
}

