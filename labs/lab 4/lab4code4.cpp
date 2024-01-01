#include<iostream>
using namespace std;
int main()
{
	int room_temperature;
	cout<<"input room_temperature:";
	cin>>room_temperature;
	if (room_temperature>23)
	{
		cout<<"Room temperature is hot";
	}
	else if(room_temperature<=23)
	{
		cout<<"Room temperature is cold";
	}
	return 0;
}
