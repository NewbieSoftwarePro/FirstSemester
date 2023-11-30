#include<iostream>
using namespace std;
int main()
{
	float distance,speed,time;
	cout<<"input distance in mile:";
	cin>>distance;
	cout<<"input speed in mph:";
	cin>>speed;
	time= distance/speed;
	cout<<"Time required to reach the destination ="<<" "<<time<<"mphm"<<endl;
	return 0;
	
}
