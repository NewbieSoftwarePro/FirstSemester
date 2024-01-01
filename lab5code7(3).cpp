#include<iostream>
using namespace std;
int main()
{
	int temp;
	cout<<"input temperature of water:";
	cin>>temp;
	switch(temp==0?1:(temp>0&&temp<=100?2:3))
	{
		case 1:
			cout<<"State of water is solid";
			break;
		case 2:
			cout<<"State of water is liquit";
			break;
		case 3:
			cout<<"State of water is gas(stream)";
			break;
		default:
			cout<<"input temperature ";
	}
	return 0;
}
