#include<iostream>
using namespace std;
int main()
{
	float radius,volume_of_sphere;
	cout<<"input radius:";
	cin>>radius;
	volume_of_sphere = (4*3.14*radius*radius*radius)/3;
	cout<<"volume of sphere ="<<" "<<volume_of_sphere<<endl;
    return 0;
}
