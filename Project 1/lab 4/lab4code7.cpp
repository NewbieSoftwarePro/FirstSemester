#include<iostream>
using namespace std;
int main()
{
	int height;
	cout<<"input height:";
	cin>>height;
	if (height>=6.2)
	{
		cout<<"Height is large";
	}
	else if (height<=5)
	{
		cout<<"Height is small";
	}
	else if ((height<6.2)&&(height>5))
	{
		cout<<"Height is medium";
	}
	return 0;
}
